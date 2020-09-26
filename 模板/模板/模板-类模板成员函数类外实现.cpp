#include<iostream>
#include<string>

using namespace std;

/*
	类模板中成员函数类外实现时，需要加上模板参数列表
*/

//template<class T1,class T2>
//class Person
//{
//public:
//	/*Person(T1 name, T2 age) :m_Name(name), m_Age(age){}
//	void showPerson()
//	{
//		cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//	}*/
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
////成员函数类外实现
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//}
//
//void test1()
//{
//	Person<string, int> p("Tom", 100);
//	p.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}