#include<iostream>

using namespace std;

/*
	1.内存四区分为：代码区、全局区、堆区和栈区
	2.代码区的内容是共享且只读的
	3.全局区:全局变量、静态变量和常量(const全局变量、字符串常量)
	4.栈区数据由编译器分配释放，存放函数的参数和局部变量等
	5.堆区数据由程序员分配释放，若不释放，程序结束时由操作系统回收
*/

//全局变量
int c = 10;
int d = 10;

//const全局变量
int g = 10;
int h = 10;

int *func()
{
	int *a = new int(10);
	return a;
}

void test()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;

	//cout << *p << endl;                 //内存已经释放，再次访问会报错
}
/*int main()
{
	//局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量地址" << endl;
	cout << (int)&a << endl;
	cout << (int)&b << endl;

	cout << "全局变量地址" << endl;
	cout << (int)&c << endl;
	cout << (int)&d << endl;

	//静态变量
	static int e = 10;
	static int f = 10;
	cout << "静态变量地址" << endl;
	cout << (int)&e << endl;
	cout << (int)&f << endl;

	cout << "const全局变量地址" << endl;
	cout << (int)&g << endl;
	cout << (int)&h << endl;

	cout << "字符串常量地址" << endl;
	cout << (int)&"hello world" << endl;

	//const局部变量
	const int i = 10;
	const int j = 10;
	cout << "const局部变量地址" << endl;
	cout << (int)&i << endl;
	cout << (int)&j << endl;

	int *p = func();
	cout << *p << endl;
	cout << *p << endl;

	cout << "--------------------------------------" << endl;

	test();
	return 0;
}*/