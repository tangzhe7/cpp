#ifndef CC_LINKLIST_H
#define CC_LINKLIST_H
#include "../../env/CCENV.h"
#include "CC_LINKLIST_NODE.cpp"

namespace cc 
{
	template<class T>  class CC_LINKLIST
	{
	private:
		CC_LINKLIST_NODE<T> * h;
		CC_LINKLIST_NODE<T> * l;
		CC_INT32 len;
	public:
		~CC_LINKLIST();
		CC_LINKLIST();
		CC_INT32 listlength();
		CC_LINKLIST_NODE<T>* head();
		CC_LINKLIST_NODE<T>* last();
		/***添加到表头**/
		void listAddNodeHead( T t);
		void listAddNodeTail(T t);
		/**
		 *if not ret CC_NULL
		 */
		CC_LINKLIST_NODE<T>* searchKey(T& t);
	};
}
#endif // !CC_LINKLIST_H
