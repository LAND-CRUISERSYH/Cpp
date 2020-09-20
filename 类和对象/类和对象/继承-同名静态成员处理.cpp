#include<iostream>

using namespace std;

/*
	1.静态成员和非静态成员出现同名，处理方式一致
		访问子类同名成员    直接访问即可
		访问父类同名成员    需要加作用域
	2.同名静态成员函数处理方式和非静态处理方式一样，只不过有两种访问的方式(通过对象和通过类名)
*/

//class Base
//{
//public:
//	static void func()
//	{
//		cout << "父类中的静态成员函数" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "父类中的带参静态成员函数" << endl;
//	}
//	static int m_A;
//
//};
//
//int Base::m_A = 100;
//
//class Base1 :public Base
//{
//public:
//	static void func()
//	{
//		cout << "子类中的静态成员函数" << endl;
//	}
//	static int m_A;
//};
//
//int Base1::m_A = 200;
//
//void test1()
//{
//	Base1 b;
//	//1.通过对象访问
//	cout << b.m_A << endl;
//	cout << b.Base::m_A << endl;
//	//2.通过类名访问
//	cout << Base1::m_A << endl;
//	//第一个::代表通过类名方式访问   第二个::代表访问父类作用域下
//	cout << Base1::Base::m_A << endl;
//	cout << "-----------------------------------------" << endl;
//	//1.通过对象访问
//	b.func();
//	b.Base::func();
//	//2.通过类名访问
//	Base1::func();
//	Base1::Base::func();
//	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数(包括重载)
//	//如果想访问父类中被隐藏的同名成员，需要加作用域
//	b.Base::func(500);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
