#include<iostream>
#include<string>
//第一种解决方式，直接包含 源文件
//#include"person.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include"person.hpp"
using namespace std;

/*
	1.问题: 类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
	2.解决方式1: 直接包含.cpp源文件
	  解决方式2. 将声明和实现写到同一个文件中，并更改后缀名为.hpp,hpp是约定的名称，并不是强制
*/

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//}

//void test1()
//{
//	Person<string, int> p("Tom", 50);
//	p.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}