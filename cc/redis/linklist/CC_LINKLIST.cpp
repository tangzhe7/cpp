#include "./CC_LINKLIST.h"
namespace cc
{
	template<class T> CC_LINKLIST<T>::CC_LINKLIST()
	{
		this->h = new CC_LINKLIST_NODE<T>();
		this->l = new CC_LINKLIST_NODE<T>();
		/*this->h->next = this->l;
		this->l->prev = this->h;*/
		this->len = 0;
	}
	 
	template<class T>	CC_INT32 CC_LINKLIST<T>::listlength()
	{
		return this->len;
	}
	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST<T>::head()
	{
		return this->head;
	}
	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST<T>::last()
	{
		return this->last;
	}


}