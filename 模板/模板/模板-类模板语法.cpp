#include<iostream>
#include<string>

using namespace std;

/*
	1.��ģ�������:����һ��ͨ���࣬���еĳ�Ա�������Ϳ��Բ�����ָ������һ�����������������
	2.�﷨:   template<class T>           /����    template<typename T>   ������
		template----��������ģ��
		typename----���������ķ�����һ���������ͣ�������class����
		T-----------ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
	3.��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��
*/

//template<class NameType,class AgeType>
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
//void test1()
//{
//	Person<string,int> p1("Tom", 10);
//	p1.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}