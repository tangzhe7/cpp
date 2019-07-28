#ifndef CC_DICTHT_H
#define CC_DICTHT_H
#include "../../env/CCENV.h"
#include "./CC_DICTHT_ENTRY.h"
namespace cc 
{
	template<class T,class V> class CC_DICTHT 
	{
	private:

		CC_DICTHT_ENTRY<T,V>** tables;
		U_CC_INT32 size;
		U_CC_INT32 sizemask;
		U_CC_INT32 used;
	};
}
#endif // !CC_DICTHT_H
