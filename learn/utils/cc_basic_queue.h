#ifndef CC_BASIC_QUEUE_H
#define CC_BASIC_QUEUE_H

namespace cc
{
template <typename T>
class cc_basic_queue
{

    virtual bool push(T &&t) = 0;
    virtual T top()  = 0;
    virtual bool pop()  = 0;
    virtual int size()  = 0;
    virtual bool empty()  = 0;
    
};
} // namespace cc
#endif