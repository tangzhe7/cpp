#ifndef CC_DICTHT_ENTRY_H
#define CC_DICTHT_ENTRY_H
namespace cc 
{
	template<class K,class V> class CC_DICTHT_ENTRY
	{
	private:
		T k;
		V v;
		CC_DICTHT_ENTRY<K, V>* next;

	};

}
#endif // !CC_DICTHT_ENTRY_H
