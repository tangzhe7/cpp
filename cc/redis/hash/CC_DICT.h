#ifndef  CC_DICT_H
#define CC_DICT_H
#include "../../env/CCENV.h"

#include "./CC_DICTHT.h"
#include "./CC_DICT.cpp"
namespace cc 
{
	template<class K,class V>
	class CC_DICT 
	{
	private:
		U_CC_INT32 (*hashcode)(const K& key);
		CC_DICTHT tables[2];
		//δ����rehashʱֵ��-1
		int trehashidx;
	public:
		~CC_DICT();
		CC_DICT();
		CC_DICT(U_CC_INT32(*hashcode)(const K& key));
		void setHashFunc(U_CC_INT32(*hashcode)(const K& key));
		/**
		 *�������ֱ�ӷ���
		 *
		 **/
		void put(K k,V v);
		const K& operator[]();
		V get(K k);

	};
}
#endif // ! CC_DICT_H
