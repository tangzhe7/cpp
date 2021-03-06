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
#include "cc/redis/hash/CC_DICTHT.h"

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
   
class Test 
{
public:
	const int& operator[]( const int& index) 
	{
		std::cout << "[]" << std::endl;
		return 2;
	}
	int& operator[](const int&& index)
	{
		std::cout << "[][]" << std::endl;
		int j = 3;
		return j;
	}
	const int& operator=(const int& index) 
	{
		std::cout << "=" << std::endl;
		return 3;
	}
	friend std::ostream& operator<<(std::ostream& out, const Test&)
	{
		out <<1 << endl;
		return out;
	}
};
int main () 
{
	Test t;
	const int i = 12;
	int k = t[1] = i;
	cout << k << endl;
	cout << t[i] << endl;
  return 0;
} 

