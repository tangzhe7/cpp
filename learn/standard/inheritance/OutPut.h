#ifndef _CC_OUTPUT_H
#define _CC_OUTPUT_H
#include <iostream>
namespace cc
{
    using std::cout;
    using std::endl;
    
    class Output
    {
        public:
        static void print(int);

    };

    void Output::print(int i)
    {
        std::cout<<i<<std::endl;
    }
}
#endif
