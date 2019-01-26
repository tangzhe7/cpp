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
}

/**
*在赋值给一个兼容类型会出现隐式类型转换.比如下面这个例子.
*short a =2000;
*int b;
*b = 2000
*在以上例子中.值从short自动提升到int.这就是标准转换.
*标准转换影响基本数据类型.
*允许类型有数字类型和布尔类型和一些指针.
*short to int,int to float,double to int...
*/
/**
*int转换成小的数字类型.或者float to double叫做类型提升.
*这样的转换保证生成相同的值.
*其他算术类型转换不保证数值的精确.
*1.如果负数转换成unsigned 类型.-1转换成最大无符号值.
*2.其他类型转bool或者由bool转换成其他类型.false转成0(数值类型),nullptr(指针类型).true转换成1.
*3.由浮点数转换成整数类型.值被截断(小数部分直接被移除).如果剩余的部分超出整数能表示的范围,行为是未知的.
*4.如果转换发生在相同的数值类型.整数-整数,浮点数-浮点数.转换是合法的.但是具体的值是多少由实现着指定.
*某些转换可能会丢失精度.编译器会通知出现精度丢失,但是显示的转换不会出现通知.
*
*/

/**
*对于非基本类型.数组和函数隐式转换成指针类型.指针转换根据以下规则
*1.null指针允许转换成任意类型.
*2.任何类型指针都能转换成void类型指针.
*3.指针向上转换.派生类指针能够转换成任意基类指针.前提是没有const,volatile修饰.
*/

/**
*以下三个成员函数会出现隐式类型转换.
*1.只有一个参数的构造函数.初始化对象时转换特定类型.
*2.赋值操作.在赋值的时候允许特定类型转换.
*3.类型转换操作.允许隐式转换成特定类型.
*如下
*/
class A {};

class B 
{
public:
	/**从A强制转换(构造函数)**/
	explicit  B(const A&a) {};
	/**从A强制转换(赋值函数)**/
	B& operator=(const A& a) { return *this; };
	//类型转换操作,强制转换成A
	explicit operator A() { return A(); };
};
/**
*
*int main()
*{
*	A foo;
*	B bar = foo;// calls constructor
*	bar = foo;// calls assignment,对象已经被初始化.
*	foo = bar; // calls type-cast operator
*	return 0;
*}
*/
/**
*explicit关键字
*在函数调用时,C++允许隐式转换参数,这可能会引起错误.
*比如下面这个函数(来自上面的例子)
*void fn(B arg){};
*这个函数的参数类型是B,但是它可以用A来调用.fn(foo)
*为了消除这个影响,我们可以在受影响的构造函数上使用explicit
*   A foo;
*	B bar(foo);
*	B bar2 = foo;// 也是隐式转换.bar2未初始化,会调用构造函数
*	bar = foo;
*	foo = bar;
*
*	fn (foo);  // not allowed for explicit ctor.禁止隐式转换.
*	fn(bar);   //这个调用是可以的
*
* 类型转换函数也可以加上explicit关键字.效果和在构造函数上加一致.
*	foo = bar; //这个调用是错误的.
*/

/**
*C++是一个强类型语言.有许多转换.
*特别是表示对值有不同解释的转换,这些转换都需要显示转换.
*主要有俩种风格.函数型风格和C语言风格.如下.
* double x = 10.3;
* int y;
* y=int(x);//函数型风格.
* y=(int)x;//C风格.
*函数风格转换满足大部分基本类型转换.然而这个类型转换在类和指针转换到类的时候会混淆不清.
*然后引起运行时错误.比如下面这个代码,编译时没有任何错误.
*#include<iostream>
*using namespace std;
*class Dummy {
*	double i,j;
*};
*
*class Addition{
*	int x.y;
*  public:
*	Addition(int a,int b){x=a;y=b;}
*	int result(){return x+y;}
*};
*
*int main(){
*	Dummy d;
*	Addition* padd;
*	padd = (Addition*)&d;
*	cout<<padd->result()<<endl;
*	return 0;
*}
*
*程序声明一个指针指向Addition.但是它被赋值了一个不相关的对象.
*	padd = (Addition*) &d;
*自由的现式类型转换允许一个指针类型转换成任何一个指针类型.
*上面的调用会导致一个运行时错误或者是一个不期望的结果.
*
*为了控制这种不受控制的转换.我们有四种特定的类型转换.
*1.dynamic_cast
*2.reinterpret_cast
*3.static_cast
*4.const_cast
*语法如下.
*dynamic_cast<new_type>(expression);
*reinterpret_cast<new_type>(expression);
*static_cast<new_type>(exrepssion);
*const_cast<new_type>(expression);
*等价与传统的类型转换如下
*(new_type)expression;
*new_type(expression);
*但是以上的每一个都有自己独特的特点.
*
**/
void fn(B x) {}
int main()
{
	
	
    return 0;
}




