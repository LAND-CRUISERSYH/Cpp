#include<iostream>

using namespace std;

/*
	1.在C++中，函数的形参列表中的形参是可以有默认值的(func1())
	2.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
	3.如果函数声明有默认参数，函数的定义就不能有默认参数(func2())----声明和定义只能一个有默认参数
	4.C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置(占位参数还可以有默认参数func3())
	5.函数重载满足条件:同一个作用域下、函数名称相同，函数参数类型或者个数或者顺序不同
	6.注意:函数的返回值不可以作为函数重载的条件
*/

//默认参数

int func1(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b)
{
	return a * b;
}

void func3(int, int=10)
{
	cout <<__FILE__ << endl;
}

void func()
{
	cout << "func()的调用" << endl;
}

void func(int a)
{
	cout << "func(int)的调用!" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用" << endl;
}

void func(int a, double b)
{
	cout << "func(int a,double b)的调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)的调用" << endl;
}

void func4(int &a)
{
	cout << "func4(int &a)的调用" << endl;
}

void func4(const int &a)
{
	cout << "func4(const int &a)的调用" << endl;
}

int main()
{
	cout << func1(10,30) << endl;

	cout << func2(50, 20) << endl;
	
	func3(10, 10);

	func(5.20);

	func(3, 5.20);
	func(5.20, 3);

	int a = 10;
	func4(a);
	func4(10);

	return 0;
}