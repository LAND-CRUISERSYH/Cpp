#include<iostream>
#include<string>

using namespace std;

/*
	1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
	2.��ģ����ģ������б��п�����Ĭ�ϲ���
*/
//
//template<class NameType,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name,AgeType age):m_Name(name),m_Age(age){}
//	void showPerson()
//	{
//		cout << "����: " << m_Name << "\t����: " << m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test1()
//{
//	//Person p("Tom", 10);           //�޷����Զ������Ƶ�
//	Person<string, int> p1("Tom", 10);        //ֻ������ʾָ������
//	p1.showPerson();
//}
//
////��ģ����ģ������б��п�����Ĭ�ϲ���
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