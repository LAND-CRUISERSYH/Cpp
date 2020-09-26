#include<iostream>

using namespace std;

/*
	1.当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
	2.如果不指定，编译器无法给子类分配内存
	3.如果想灵活指定出父类中T的类型，子类也需变为类模板
*/

//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son :public Base       //错误，必须要知道父类中的T类型，才能继承给子类
//class Son:public Base<int>
//{
//
//};
//
////如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为: " << typeid(T1).name() << endl;
//		cout << "T2的类型为: " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test1()
//{
//	//Son s1;
//	Son2<int, char> s2;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}