
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

    
string str;
bool check()
{
    int a[26] = {0};
    int odd = 0;
    for (int i = 0; i < str.length(); i++)
    {
        a[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            odd++;
            if (odd == 2)
                return false;
        }
    }
    return true;
}
void solve()
{
    
}

}; // namespace cc

int main()
{

#ifndef ONLINE_JUDGE
    freopen("/Users/caicai/in", "r", stdin);
#endif // !ONLINE_JUDGE
    cc::solve();
    #if defined(GUNC)
        std::cout<<"ssss"<<std::endl;
    #elif defined(CLANG)
    std::cout << "zzzzz" << std::endl;
    #endif
        while (true);
    return 0;
}