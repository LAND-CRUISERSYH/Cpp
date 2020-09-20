#include<iostream>

using namespace std;

/*
	1.两个派生类继承同一个基类
	2.又有某个类同时继承这两个派生类
	3.菱形继承导致数据有两份，资源浪费
	4.利用虚继承解决菱形继承问题(在继承之前加上关键字virtual)
	5.加上关键字virtual,父类变为虚基类，继承虚基类指针(vbptr),虚基类指针指向虚基类表(vbtable),表中有数据的偏移量
*/

//class Base            //虚基类
//{
//public:
//	int m_Age;
//protected:
//
//private:
//
//};
//
//class Base1 :virtual public Base
//{
//public:
//
//protected:
//
//private:
//
//};
//
//class Base2 :virtual public Base//两个虚基类指针都指向一块虚基类表，所以数据变成一份
//{
//public:
//
//protected:
//
//private:
//
//};
//
//class Base12 :public Base1, public Base2
//{
//public:
//
//protected:
//
//private:
//
//};
//
//void test1()
//{
//	Base12 b;
//	b.Base1::m_Age = 18;
//	b.Base2::m_Age = 20;
//	//当出现菱形继承，有两个父类拥有相同的数据，需要加作用域区分
//	cout << b.Base1::m_Age << endl;
//	cout << b.Base2::m_Age << endl;
//	cout << b.m_Age << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}