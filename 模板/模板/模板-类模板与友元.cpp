#include<iostream>
#include<string>

using namespace std;

/*
	1.全局函数类内实现:直接在类内声明友元即可
	2.全局函数类外实现:需要提前让编译器知道全局函数的存在
	3.建议全局函数做类内实现，用法简单，而且编译器可以直接识别
*/

//全局函数类外实现
//template<class T1,class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "姓名: " << p.m_Name << "\t年龄: " << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "姓名: " << p.m_Name << "\t年龄: " << p.m_Age << endl;
//	}
//	//全局函数类外实现
//	friend void printPerson2<>(Person<T1, T2> p);          //加空模板的参数列表
//public:
//	Person(T1 name,T2 age):m_Name(name),m_Age(age){}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test1()
//{
//	/*Person<string, int> p1("Tom", 10);
//	printPerson(p1);*/
//
//	Person<string, int> p1("Tom", 10);
//	printPerson2(p1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}