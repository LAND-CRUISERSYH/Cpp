#include<iostream>
#include<string>

using namespace std;

/*
	1.类模板没有自动类型推导的使用方式
	2.类模板在模板参数列表中可以有默认参数
*/
//
//template<class NameType,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name,AgeType age):m_Name(name),m_Age(age){}
//	void showPerson()
//	{
//		cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////类模板没有自动类型推导的使用方式
//void test1()
//{
//	//Person p("Tom", 10);           //无法用自动类型推导
//	Person<string, int> p1("Tom", 10);        //只能用显示指定类型
//	p1.showPerson();
//}
//
////类模板在模板参数列表中可以有默认参数
//void test2()
//{
//	Person<string> p2("Jack", 20);
//	p2.showPerson();
//}
//
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}