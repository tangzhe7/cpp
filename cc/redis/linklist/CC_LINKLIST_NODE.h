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
		T value;
	public:
		CC_LINKLIST_NODE();
		CC_LINKLIST_NODE(CC_LINKLIST_NODE<T>* prev, CC_LINKLIST_NODE<T>* next,T value);
		~CC_LINKLIST_NODE();
		void setPrevNode(CC_LINKLIST_NODE<T>* nprev);
		CC_LINKLIST_NODE<T>* preNode();
		void setNextNode(CC_LINKLIST_NODE<T>* nnext);
		CC_LINKLIST_NODE<T>* nextNode();
		const T val();
		const bool operator==(const T& t)const;
		CC_LINKLIST_NODE<T>* freeNode();
	};
}
#endif // !LINKLIST_H
