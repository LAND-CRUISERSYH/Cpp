#include<iostream>
#include<string>

using namespace std;

/*
	��ģ���������������һ�������ִ��뷽ʽ:
	1.ָ�����������  ---  ֱ����ʾ�������������(����)
	2.����ģ�廯      ---  �������еĲ�����Ϊģ����д���
	3.������ģ�廯    ---  ������������� ģ�廯���д���
*/

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name,T2 age):m_Name(name),m_Age(age){}
//	void showPerson()
//	{
//		cout << "����: " << m_Name << "\t����: " << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ָ�����������
//void printPerson1(Person<string,int> &p)
//{
//	p.showPerson();
//}
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1,T2> &p)
//{
//	p.showPerson();
//}
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T������Ϊ: " << typeid(T).name() << endl;                 //�鿴������
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