#include<iostream>

using namespace std;

/*
	1.访问子类同名成员，直接访问即可
	2.访问父类同名成员，需要加作用域
	3.子类对象可以直接访问到子类中同名成员
	4.子类对象加作用域可以访问到父类同名成员
	5.当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
*/

//class Base
//{
//public:
//	Base():m_A(100){}
//	void func()
//	{
//		cout << "父类的func()函数调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "父类的func(int a)函数调用" << endl;
//	}
//	int m_A;
//};
//
//class Base1 :public Base
//{
//public:
//	Base1():m_A(200){}
//	void func()
//	{
//		cout << "子类的func()函数调用" << endl;
//	}
//	int m_A;
//};
//
//void test1()
//{
//	Base1 b1;
//	cout << b1.m_A << endl;
//	//如果通过子类对象访问父类中同名成员，需要加作用域
//	cout << b1.Base::m_A << endl;
//	cout << "---------------------" << endl;
//
//	b1.func();
//	b1.Base::func();
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数(包括重载)
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	b1.Base::func(500);
//}
//int main()
//{
//	test1();
//	return 0;
//}