//#include "pch.h"
#include "./CC_LINKLIST_NODE.h"
namespace cc 
{

	template<class T> CC_LINKLIST_NODE<T>::CC_LINKLIST_NODE()
	{
		this->next = CC_NULL;
		this->prev = CC_NULL;
		this->value = CC_NULL;
	}

	template<class T> CC_LINKLIST_NODE<T>::CC_LINKLIST_NODE(CC_LINKLIST_NODE<T>* prev,
		CC_LINKLIST_NODE<T>* next, T* value)
	{
		this->next = next;
		this->prev = prev;
		//copy
		if (value != CC_NULL)
		{
			this->value = new T;
			*(this->value) = *value;
		}
		else
		{
			this->value = CC_NULL;
		}
		
	}
	template<class T> CC_LINKLIST_NODE<T>::~CC_LINKLIST_NODE()
	{
		delete this->value;
		this->prev = CC_NULL;
		if(this->next != CC_NULL)
		delete this->next;
	}

	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST_NODE<T>::preNode()
	{
		return this->preNode;
	};
	template<class T> CC_LINKLIST_NODE<T>* CC_LINKLIST_NODE<T>::nextNode()
	{
		return this->next;
	};

	template<class T> const T& CC_LINKLIST_NODE<T>::val()
	{
		return *(this->value);
	};
	
	template<class T> CC_INT32 CC_LINKLIST_NODE<T>::cmp(const T& v) const
	{
		return *(this->val) == v;
	}
	template<class T> const bool CC_LINKLIST_NODE<T>::operator==(const T& v)const
	{
		return  *(this->val) == v;
	}

	template<class T> CC_LINKLIST_NODE<T>* CC_LINKLIST_NODE<T>::freeNode()
	{
		//do not care head and tail
		this->prev->next = this->next;
		this->next->preNode = this->prev;
		this->next = CC_NULL;
		this->prev = CC_NULL;
		return this;
	}



}