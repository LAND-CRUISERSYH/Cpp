#include<iostream>
#include<string>

using namespace std;

/*
	类模板对象做函数参数一共有三种传入方式:
	1.指定传入的类型  ---  直接显示对象的数据类型(常用)
	2.参数模板化      ---  将对象中的参数变为模板进行传递
	3.整个类模板化    ---  将这个对象类型 模板化进行传递
*/

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name,T2 age):m_Name(name),m_Age(age){}
//	void showPerson()
//	{
//		cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.指定传入的类型
//void printPerson1(Person<string,int> &p)
//{
//	p.showPerson();
//}
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1,T2> &p)
//{
//	p.showPerson();
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的类型为: " << typeid(T).name() << endl;                 //查看类型名
//}
//
//
//void test1()
//{
//	/*Person<string, int> p1("Tom", 10);
//	printPerson1(p1);*/
//
//	/*Person<string, int> p1("Jack", 10);
//	printPerson2(p1);*/ 
//
//	Person<string, int> p1("Rose", 10);
//	printPerson3(p1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}