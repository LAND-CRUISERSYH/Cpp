#include<iostream>
#include<string>

using namespace std;

/*
	1.ģ���ͨ���Բ��������ܵ�
	2.C++�ṩģ������أ�����Ϊ�ض��������ṩ���廯��ģ��
	3.���þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�
	4.ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��
*/

//class Person
//{
//public:
//	Person(string name,int age):m_Name(name),m_Age(age){}
//	string m_Name;
//	int m_Age;
//};
//
////�Ա����������Ƿ����
//template<typename T>
//bool myCompare(T &a, T &b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//
////���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
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