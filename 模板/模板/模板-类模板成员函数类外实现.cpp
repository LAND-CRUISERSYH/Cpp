#include<iostream>
#include<string>

using namespace std;

/*
	��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�
*/

//template<class T1,class T2>
//class Person
//{
//public:
//	/*Person(T1 name, T2 age) :m_Name(name), m_Age(age){}
//	void showPerson()
//	{
//		cout << "����: " << m_Name << "\t����: " << m_Age << endl;
//	}*/
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯������ʵ��
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
////��Ա��������ʵ��
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "����: " << m_Name << "\t����: " << m_Age << endl;
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