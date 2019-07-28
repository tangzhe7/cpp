//#include "pch.h"
#include "./CC_LINKLIST_NODE.h"
#include <exception>
namespace cc
{
	using std::nothrow;
	template<class T> CC_LINKLIST_NODE<T>::CC_LINKLIST_NODE()
	{
		this->next = CC_NULL;
		this->prev = CC_NULL;
	}

	template<class T> CC_LINKLIST_NODE<T>::CC_LINKLIST_NODE(CC_LINKLIST_NODE<T>* prev,
		CC_LINKLIST_NODE<T>* next, T value)
	{
		this->next = next;
		this->prev = prev;
		//copy
		this->value = value;

	}
	template<class T> CC_LINKLIST_NODE<T>::~CC_LINKLIST_NODE()
	{
		this->prev = CC_NULL;
		if (this->next != CC_NULL)
			delete this->next;
	}

	template<class T> void CC_LINKLIST_NODE<T>::setPrevNode(CC_LINKLIST_NODE<T>* nprev)
	{
		//same
		if (this->prev == nprev)
			return;
		//test prev.prev is null
		if (this->prev==CC_NULL) 
		{
			//first
			this->prev = nprev;
			nprev->next = this;
			nprev->prev = CC_NULL;
		}
		if (this->prev != CC_NULL)
		{
			//check this->prev
			this->prev->next = nprev;
			nprev->prev = this->prev;
			//
			nprev->next = this;
			this->prev = nprev;
		}
	}

	template<class T> CC_LINKLIST_NODE<T>*  CC_LINKLIST_NODE<T>::preNode()
	{
		return this->preNode;
	};
	template<class T>  void CC_LINKLIST_NODE<T>::setNextNode(CC_LINKLIST_NODE<T>* nnext)
	{

		if (this->next == nnext)
			return;
		//set next
		if (this->next==CC_NULL) 
		{
			this->next = nnext;
			nnext->prev = this;
		}
		else
		{
			//this->next
			nnext->prev = this;
			nnext->next = this->next;
			this->next->prev = nnext;
			this->next = nnext;
		}

	}
	template<class T> CC_LINKLIST_NODE<T>* CC_LINKLIST_NODE<T>::nextNode()
	{
		return this->next;
	};

	template<class T> const T CC_LINKLIST_NODE<T>::val()
	{
		return (this->value);
	};

	template<class T> const bool CC_LINKLIST_NODE<T>::operator==(const T& v)const
	{
		return  (this->val) == v;
	}

	template<class T> CC_LINKLIST_NODE<T>* CC_LINKLIST_NODE<T>::freeNode()
	{
		//do not care head and tail
		if (this->prev != CC_NULL)
		{
			this->prev->next = this->next;
		}
		if (this->next != CC_NULL)
		{
			this->next->preNode = this->prev;
		}
		this->next = CC_NULL;
		this->prev = CC_NULL;
		return this;
	}



}