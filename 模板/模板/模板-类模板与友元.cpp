#include<iostream>
#include<string>

using namespace std;

/*
	1.ȫ�ֺ�������ʵ��:ֱ��������������Ԫ����
	2.ȫ�ֺ�������ʵ��:��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
	3.����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��
*/

//ȫ�ֺ�������ʵ��
//template<class T1,class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����: " << p.m_Name << "\t����: " << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "����: " << p.m_Name << "\t����: " << p.m_Age << endl;
//	}
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson2<>(Person<T1, T2> p);          //�ӿ�ģ��Ĳ����б�
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