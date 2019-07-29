#include "./CC_LINKLIST.h"
#include<exception>
namespace cc
{
	using std::nothrow;
	template<class T>  CC_LINKLIST<T>::~CC_LINKLIST()
	{
		if (this->h == CC_NULL)
			return;
		delete this->h;
	}
	template<class T> CC_LINKLIST<T>::CC_LINKLIST()
	{
		this->h = new(nothrow) CC_LINKLIST_NODE<T>();
		this->l = new(nothrow) CC_LINKLIST_NODE<T>();
		h->setNextNode(this->l);
		this->len = 0;
	}
	 
	template<class T>	CC_INT32 CC_LINKLIST<T>::listlength()
	{
		return this->len;
	}
	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST<T>::head()
	{
		return this->h;
	}
	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST<T>::last()
	{
		return this->l;
	}
	template<class T> void CC_LINKLIST<T>::listAddNodeHead( T t) 
	{
		CC_LINKLIST_NODE<T>* nNode = new(nothrow) CC_LINKLIST_NODE<T>(CC_NULL,CC_NULL, t);
		this->h->setNextNode(nNode);
		++(this->len);
	}

	template<class T> void CC_LINKLIST<T>::listAddNodeTail(T t)
	{
		CC_LINKLIST_NODE<T>* nNode = new(nothrow) CC_LINKLIST_NODE<T>(CC_NULL, CC_NULL, t);
		this->l->setPrevNode(nNode);
		++(this->len);
	}

	template<class T> CC_LINKLIST_NODE<T>* CC_LINKLIST<T>::searchKey(T& t)
	{
		CC_LINKLIST_NODE<T>* cur = h->nextNode();
		while (cur != l)
		{
			if (cur->val() == t)
				return cur;
			cur = cur->nextNode();
		}
		return CC_NULL;
	}
}