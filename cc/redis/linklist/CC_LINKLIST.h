#ifndef CC_LINKLIST_H
#define CC_LINKLIST_H
#include "../../env/CCENV.h"
#include "CC_LINKLIST_NODE.cpp"

namespace cc 
{
#define CLASS_T template<class T>
	template<class T>  class CC_LINKLIST
	{
	private:
		CC_LINKLIST_NODE<T> * h;
		CC_LINKLIST_NODE<T> * l;
		CC_INT32 len;
	public:
		CC_LINKLIST();
		CC_INT32 listlength();
		CC_LINKLIST_NODE<T>* head();
		CC_LINKLIST_NODE<T>* last();

	};
}
#endif // !CC_LINKLIST_H
