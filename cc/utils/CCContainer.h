#if !defined(C_CCCONTAINER_H)
  #define C_CCCONTAINER_H
#include "../CCTypes.h"
namespace cc
{
  template<typename T>  class Container
    {
      public:
        virtual CC_INT32t sizeOf()=0;
        virtual CC_BOOL empty()=0;
        virtual CC_BOOL insert(T &&) = 0;
        virtual T at(CC_INT32t) =0;
        virtual T remove(CC_INT32t )=0;
        virtual T contain(CC_INT32t)=0;


      private:
        Container()=0;
        virtual ~Container()=0; 
        

    };

};
#endif