#include<iostream>
#include<string>

using namespace std;

/*
	1.模板的通用性并不是万能的
	2.C++提供模板的重载，可以为特定的类型提供具体化的模板
	3.利用具体化的模板，可以解决自定义类型的通用化
	4.学习模板并不是为了写模板，而是在STL能工运用系统提供的模板
*/

//class Person
//{
//public:
//	Person(string name,int age):m_Name(name),m_Age(age){}
//	string m_Name;
//	int m_Age;
//};
//
////对比两个数据是否相等
//template<typename T>
//bool myCompare(T &a, T &b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
////利用具体化Person的版本实现代码，具体化优先调用
//template<> bool myCompare(Person &a, Person &b)
//{
//	if (a.m_Name == b.m_Name&&a.m_Age == b.m_Age)
//		return true;
//	else
//		return false;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//		cout << "a==b" << endl;
//	else
//		cout << "a!=b" << endl;
//}
//
//void test2()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 11);
//	bool ret = myCompare(p1, p2);
//	if (ret)
//		cout << "p1==p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}