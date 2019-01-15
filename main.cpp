
#include <string>
#include <iostream>
#include <map>
#include <memory.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <math.h>
#include <iomanip>
#include <bitset>
#include "cc/env/CCENV.h"

namespace cc
{
using std::bitset;
using std::cin;
using std::cout;
using std::endl;
using std::greater;
using std::map;
using std::priority_queue;
using std::sort;
using std::stack;
using std::string;
using std::swap;
using std::vector;

void solve()
{
}

class Account
{
  public:
    int i;
    Account(int i)
     {
         this->i=i;
         std::cout<<"construct"<<std::endl;
     };
    Account(double ib) { this->balance = ib; }
    double GetBalance();
    double Deposit(double Amount);
    double Withdraw(double Amount);
    Account(Account &&a)
    {
        cout<<"move..."<<endl;
    }
    Account(Account &a)
    {
        cout<<"copy...."<<endl;
    }
     ~Account()
    {
        std::cout << "delete....." << std::endl;
    }
    Account& operator= (const Account&& a)
    {
        std::cout<<"copy....==="<<std::endl;
        return *this;
    }



  private:
    double balance;
};

/***
 *声明时未写成inline,但是在实现时可以指明是inline 
 */
inline double Account::GetBalance()
{
    return balance;
};
inline double Account::Deposit(double Amount)
{
    return balance += Amount;
}
inline double Account::Withdraw(double Amount)
{
    return balance -= Amount;
}

/**
 *但是在函数调用后重新声明函数为inline是非法的 
 */
/**
 * inline _inline 编译器指令只在编译器觉得插入一个副本到
 * 调用处是合算的时候才会进行操作.
 * _forceinline 就是强制进行inline,
 * 在c++内可以用inline,_inline,_forceline关键字c和c++都可以用.
 * 为了保证向前兼容,_inline和_forceinline是一个同义词.
 * inline关键字告诉编译器对函数进行inline扩展会更好.然而.
 * 编译器能够创建一个单独的函数实例,然后再创建一个标准的调用链接到实例.
 * 而不是把代码插入到调用处.以下俩种情况会发生这种事.
 * 1.递归调用
 * 2.指针指向函数
 * 
 * 
 ***/
} // namespace cc
cc::Account test()
{
    cc::Account a(10);
    return a;
}
void test2()
{
    cc::Account a(test());
    std::cout << "a..."<<a.i << std::endl;
    cc::Account aa = test();
    std::cout<<"aa...."<<aa.i<<std::endl;
    return;
}
// namespace cc
int main()
{
    test2();
#ifndef ONLINE_JUDGE
        freopen("/Users/caicai/in", "r", stdin);
#endif // !ONLINE_JUDGE
    cc::solve();
    while (true)
        ;
    return 0;
}
