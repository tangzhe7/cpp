#ifndef CC_ARRAYS_H
#define CC_ARRAYS_H

#include "../CCContainer.h"
namespace cc
{
    
template <typename T>
class Arrays : public cc::Container<T>
{
    private:
        T* t;
        CC_INT32t size;
        CC_INT32t ml;
    public:
        Arrays(){};
        Arrays(CC_INT32t initSize)
        {
            t = new T[initSize];
            ml = initSize;
            size = 0;
        }
        Arrays(Arrays& a)
        {
            t = new T[a.size];
            for(CC_INT32t i=0;i<a.size;i++)
            {
                t[i] = a.t[i];
            }
            ml= a.ml;
            size = a.size;
        };
        Arrays(Arrays&& a)
        {
            a.t = 0;
            size = a.size;
            ml = a.ml;
        };

};
} // namespace cc

#endif