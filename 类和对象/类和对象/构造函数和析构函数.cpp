#include<iostream>

using namespace std;

/*
	1.构造函数:主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用
		(1).没有返回值
		(2).函数名称与类名相同
		(3).构造函数可以有参数，因此可以发生重载
		(4).程序在创建对象时会自动调用构造函数，无须手动调用，而且只会调用一次
	2.析构函数:主要作用在于对象销毁前系统自动调用，执行一些清理工作
		(1).没有返回值
		(2).函数名称与类名相同，在名称前加上符号~
		(3).析构函数不可以有参数，因此不可以发生重载
		(4).程序在对象销毁前会自动调用析构函数，无须手动调用而且只会调用一次
*/

class Person
{
public:
	Person() { cout << "构造函数的调用!" << endl; }
	~Person() { cout << "析构函数的调用!" << endl; }
};

//void func()
//{
//	Person p;
//}
//int main()
//{
//	//func();
//	Person p;
//	return 0;
//}