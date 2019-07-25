#include "pch.h"
#include "SDS.h"
#include <exception>
#include <memory>
#include <iostream>

namespace cc 
{
	using std::nothrow;
	using std::ostream;

	SDS::SDS()
	{
		this->len = 0;
		this->free = 0;
		this->buf = CC_NULL;
	};

	SDS::SDS(const char* sc, CC_INT32 length)
	{
		//TODO check length
		if (length >= SDS::malloc1) 
		{
			//>=1mb free 1mb
			buf = new(nothrow)char[length+SDS::malloc1];
			this->len = length + SDS::malloc1;
			this->free = SDS::malloc1;
		}
		else
		{
			//< 1mb dup
			buf = new(nothrow)char[length<<1];
			this->len = length;
			this->free = length;
		}
		//copy
		//TODO check is null
		memcpy(buf, sc, length);
	}
	SDS::SDS(const SDS& sds) 
	{
		this->len = sds.len;
		this->free = sds.free;
		//check null
		this->buf = new(nothrow)char[len+free];
		memcpy(buf, sds.buf, this->len);
	}
	

	CC_INT32 SDS::sdslen()
	{
		return this->len;
	};
	CC_INT32 SDS::sdsfree()
	{
		return this->free;
	};
	//clear
	void SDS::sdsclear()
	{
		this->free = this->free + this->len;
		this->len = 0;
	};
	//append 
	void SDS::sdscat(const char*  append, CC_INT32 length)
	{
		//append
		if (this->free < length) 
		{
			CC_INT32 newL = length + this->len;
			char* nbuf  = new(nothrow)char[newL << 1];
			//TODO check nbuf is null
			//copy buf
			memcpy(nbuf,buf,this->len);
			//copy append
			memcpy(nbuf + this->len, append, length);
			delete buf;
			buf = nbuf;
			this->len = newL;
			this->free = newL;
		}
		else
		{
			//enough
			memcpy(buf+this->len,append,length);
			this->len = this->len+length ;
			this->free = this->free - length;
		}
	};
	//copy and replace
	void SDS::sdscpy(const char * re,CC_INT32 length) 
	{
		//check
		if (this->len+this->free < length) 
		{
			//copy
			CC_INT32 newL = length<<1;
			char* nbuf = new(nothrow)char[newL << 1];
			delete buf;
			buf = nbuf;
			this->len = length;
			this->free = length;
		}
		else
		{
			CC_INT32 total = this->free + this->len;
			this->len = length;
			this->free = total - this->len;
		}
		memcpy(buf, re,length);
	};
	bool SDS::sdscmp(const SDS& append, CC_INT32 length) 
	{
		if (this->len != length)
			return false;
		int i = 0;
		while (*(append.buf + i) != *(this->buf + i) && i<length)
			return false;
		return true;
	};

	

};
