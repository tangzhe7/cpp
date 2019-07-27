#ifndef CC_LINKLIST_NODE_H
#define CC_LINKLIST_NODE_H
#include "../../env/CCENV.h"
namespace cc 
{


	template<class T> class CC_LINKLIST_NODE
	{
	private:
		CC_LINKLIST_NODE<T>* prev;
		CC_LINKLIST_NODE<T>* next;
		T* value;
	public:
		CC_LINKLIST_NODE();
		CC_LINKLIST_NODE(CC_LINKLIST_NODE<T>* prev, CC_LINKLIST_NODE<T>* next,T* value);
		~CC_LINKLIST_NODE();
		CC_LINKLIST_NODE<T>* preNode();
		CC_LINKLIST_NODE<T>* nextNode();
		const T& val();
		CC_INT32 cmp(const T&) const;
		const bool operator==(const T&)const;
		CC_LINKLIST_NODE<T>* freeNode();
	};
}
#endif // !LINKLIST_H
