#include"pch.h"
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
#include<exception>
#include "cc/env/CCENV.h"
#include "cc/redis/str/CC_SDS.h"
#include "cc/redis/linklist/CC_LINKLIST.cpp"

using namespace std;

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
	using std::nothrow;
	using std::ostream;
}
   
 
int main () 
{
	int j = 10;
	cc::CC_LINKLIST<int>*  cl2 =new cc::CC_LINKLIST<int>();
	cout << cl2->listlength() << endl;
	cl2->listAddNodeTail(j);
	cout << cl2->listlength() << endl;
	cout << cl2->searchKey(j)->val() << endl;
	delete cl2;
  return 0;
} 

