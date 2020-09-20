#include<iostream>

using namespace std;

/*
	1.C++允许一个类继承多个类
	2.语法:   class 类名 : 继承方式 父类1,继承方式 父类2...
	3.多继承可能会引发父类中有同名成员出现，需要加作用域区分
	4.C++实际开发中不建议用多继承
*/

//class Base1
//{
//public:
//	Base1():m_A(100){}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2():m_A(200){}
//	int m_A;
//};
//
////继承Base1和Base2
//class Base :public Base1, public Base2
//{
//public:
//	Base():m_C(300),m_D(400){}
//	int m_C;
//	int m_D;
//};
//
//void test1()
//{
//	Base b;
//	cout << b.Base1::m_A << endl;
//	cout << b.Base2::m_A << endl;
//	cout << b.m_C << endl;
//	cout << b.m_D << endl;
//	cout << sizeof(b) << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}