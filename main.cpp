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
#include "cc/redis/str/SDS.h"

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
}
   
 
int main () {
	cc::SDS ccc("123",3);
	ccc.sdscat("456",3);
	cout << ccc << endl;
  return 0;
} 

