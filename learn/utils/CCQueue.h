#ifndef CC_QUEUE_H
#define CC_QUEUE_H
#include <type_traits>
#include <queue>
#include <deque>
#include "cc_basic_queue.h"
namespace cc
{
using std::forward;
template <typename T>
class CCQueue : public cc::cc_basic_queue<T>
{
  private:
    T *t;
    int length;
    int front;
    int rear;

  public:
    CCQueue()
    {
        t = new T[1 << 10];
        this->length = 1 << 10;
        this->index = 0;
    };
    explicit CCQueue(int length)
    {
    
        if (length <= 0)
            throw length;
        t = new T[length];
        this->length = length;
        this->index = 0;
        this->rear = 0;
    }

    //false if queue flow
     bool push(T &&t) override
    {
        if (length == (rear + 1) || rear == front)
            return false;
        t[rear++] = std::forward(t);
    }
     bool empty() override
    {
        return rear == front;
    }
    T top() override
    {
        return t[front];
    }
     bool pop() override
    {
        ++front;
        return true;
    }

    int size() override
    {
        return rear-front;
    }

   

    ~CCQueue()
    {
        delete[] t;
    }
    CCQueue(CCQueue &q) = default;
    CCQueue &operator=(CCQueue &q) = default;
    CCQueue(CCQueue &&q) = delete;
    CCQueue &operator=(CCQueue &&q) = delete;
};

} // namespace cc
#endif