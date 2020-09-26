#include<iostream>

using namespace std;

/*
	1.普通类中的成员函数一开始就可以创建
	2.类模板中的成员函数在调用时才创建
*/

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2" << endl;
//	}
//};
//
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//	//类模板中的成员函数
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test1()
//{
//	Myclass<Person2> m;
//	//m.func1();
//	m.func2();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}