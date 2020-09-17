#include<iostream>

using namespace std;

/*
	1.静态成员就是在成员变量和成员函数前加上关键字static,称为静态成员
	2.静态成员分为静态成员变量和静态成员函数
	3.静态成员变量(有访问权限):
		所有对象共享同一份数据
		在编译阶段分配内存
		类内声明，类外初始化
	4.静态成员函数(有访问权限):
		所有对象共享同一个函数
		静态成员函数只能访问静态成员变量
*/

//class Man
//{
//public:
//	static void func()
//	{
//		age = 10;               //静态成员函数可以访问静态成员变量 
//		//num = 20;              //静态成员函数不可以访问非静态成员变量
//		cout << "static void func()的调用" << endl;
//	}
//
//	static int age;         //静态成员变量
//	int num;              //非静态成员变量
//};
//
//int Man::age = 0;
//
//void test1()
//{
//	//1.通过对象来访问
//	/*Man m;
//	m.func();*/
//
//	//2.通过类名来访问
//	Man::func();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}