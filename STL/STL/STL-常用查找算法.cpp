#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

/*
	find(iterator beg,iterator end,value);     ����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
*/

//����������������
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//���������Ƿ���5
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//		cout << "���ҵ���Ԫ��: " << *pos << endl;
//	else
//		cout << "δ���ҵ���Ԫ��" << endl;
//}
//
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {};
//	//���� == �õײ�find֪����ζԱ�person��������
//	bool operator==(const Person &p1)
//	{
//		if (this->m_Name == p1.m_Name&&this->m_Age == p1.m_Age)
//			return true;
//		else
//			return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////�����Զ�����������
//void test2()
//{
//	vector<Person> v;
//	Person p1("�ŷ�", 20);
//	Person p2("����", 26);
//	Person p3("����", 22);
//	Person p4("����", 27);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
//	if (pos != v.end())
//		cout << "����: " << pos->m_Name << " ����: " << pos->m_Age << endl;
//	else
//		cout << "�Ҳ�����Ԫ��" << endl;
//}
//
///*
//	find_if(iterator beg,iterator end,_Pred);       ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//*/
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////����������������
//void test3()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
//	if (pos != v.end())
//		cout << "�ҵ�Ԫ��: " << *pos << endl;
//	else
//		cout << "δ�ҵ�Ԫ��" << endl;
//}
//
//class Worker
//{
//public:
//	Worker(string name,int age) :m_Name(name), m_Age(age) {};
//	string m_Name;
//	int m_Age;
//};
//
//class NameGreater
//{
//public:
//	bool operator()(const Worker& w)
//	{
//		return w.m_Age > 25;
//	}
//};
//
////�����Զ�����������
//void test4()
//{
//	vector<Worker> v;
//	Worker w1("��ɮ", 22);
//	Worker w2("�����", 26);
//	Worker w3("��˽�", 23);
//	Worker w4("ɳɮ", 24);
//	v.push_back(w1);
//	v.push_back(w2);
//	v.push_back(w3);
//	v.push_back(w4);
//
//	vector<Worker>::iterator pos = find_if(v.begin(), v.end(), NameGreater());
//	if (pos != v.end())
//	{
//		cout << "����: " << pos->m_Name << " ����: " << pos->m_Age << endl;
//	}
//	else
//		cout << "û���ҵ�" << endl;
//}
//
///*
//	adjacent_find(iterator beg,iterator end);    ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
//*/
//
//void test5()
//{
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(0);
//	v.push_back(1);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos != v.end())
//		cout << "�ҵ������ظ�Ԫ��: " << *pos << endl;
//	else
//		cout << "û���ҵ������ظ�Ԫ��" << endl;
//}
//
///*
//	bool binary_search(iterator beg,iterator end,value);      ����ָ����Ԫ�أ��鵽����true,���򷵻�false
//	�����������в�����
//*/
//
//void test6()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//�����������Ƿ���9
//	//�����������������У�������������У����δ֪
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//		cout << "�ҵ���Ԫ��" << endl;
//	else
//		cout << "δ�ҵ���Ԫ��" << endl;
//}
//
///*
//	count(iterator beg,iterator end,value);               ͳ��Ԫ�س��ִ���
//*/
//
////ͳ��������������
//void test7()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(10);
//
//	int num = count(v.begin(), v.end(), 10);
//	cout << "10��������: " << num << "��" << endl;
//}
//
//class Man
//{
//public:
//	Man(string name, int age) :m_Name(name), m_Age(age) {};
//	bool operator==(const Man& m)
//	{
//		if (this->m_Age == m.m_Age)
//			return true;
//		else
//			return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////ͳ���Զ�����������
//void test8()
//{
//	vector<Man> v;
//	Man m1("����", 35);
//	Man m2("����", 35);
//	Man m3("�ŷ�", 35);
//	Man m4("����", 30);
//	Man m5("�ܲ�", 45);
//	v.push_back(m1);
//	v.push_back(m2);
//	v.push_back(m3);
//	v.push_back(m4);
//	v.push_back(m5);
//
//	Man m("�����", 35);
//	int num = count(v.begin(), v.end(), m);
//	cout << "�������ͬ����˴�: " << num << endl;
//}
//
///*
//	count_if(iterator beg,iterator end,_Pred);           ������ͳ��Ԫ�س��ִ���
//*/
//
//class Greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
////ͳ��������������
//void test9()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "����40������: " << num << "��" << endl;
//}
//
//class GreaterAge
//{
//public:
//	bool operator()(const Man &m)
//	{
//		return m.m_Age > 20;
//	}
//};
//
////ͳ���Զ�����������
//void test10()
//{
//	vector<Man> v;
//	Man m1("����", 35);
//	Man m2("����", 35);
//	Man m3("�ŷ�", 35);
//	Man m4("����", 40);
//	Man m5("�ܲ�", 20);
//	v.push_back(m1);
//	v.push_back(m2);
//	v.push_back(m3);
//	v.push_back(m4);
//	v.push_back(m5);
//
//	//����20����Ա����
//	int num = count_if(v.begin(), v.end(), GreaterAge());
//	cout << "����20�����Ա����Ϊ: " << num << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	test10();
//	return 0;
//}