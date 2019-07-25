#ifndef CC_SDS_H
#define CC_SDS_H
#include "../../env/CCENV.h"
#include <iostream>
namespace cc
{
	using std::ostream;
	class SDS
	{
	private:
		CC_INT32 len;
		CC_INT32 free;
		char * buf;
		constexpr static CC_INT32 malloc1 = 1024 * 1024;
	public:
		SDS();
		SDS(const char* str, CC_INT32 length);
		SDS(const SDS& sds);
		CC_INT32 sdslen();
		CC_INT32 sdsfree();
		//clear
		void sdsclear();
		//append 
		void sdscat(const char*  append, int length);
		//copy
		void sdscpy(const char * s, CC_INT32 length);
		bool sdscmp(const SDS& append,CC_INT32 length);
		friend ostream& operator <<(ostream & os, const SDS& cs) 
		{
			for (int i = 0;i < cs.len;i++)
				os << *(cs.buf + i);
			return os;
		};
	};
	
}
#endif // !CC_SDS_H
