#include<iostream>
#include<string>
//��һ�ֽ����ʽ��ֱ�Ӱ��� Դ�ļ�
//#include"person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include"person.hpp"
using namespace std;

/*
	1.����: ��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
	2.�����ʽ1: ֱ�Ӱ���.cppԴ�ļ�
	  �����ʽ2. ��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp,hpp��Լ�������ƣ�������ǿ��
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
//	cout << "����: " << m_Name << "\t����: " << m_Age << endl;
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