#include<iostream>
#include<set>
#include<string>

using namespace std;

/*
	1.����Ԫ�ض����ڲ���ʱ�Զ�������
	2.set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
	3.set��multiset����: set���������������ظ���Ԫ�أ�multiset�������������ظ���Ԫ��
*/

/*-----------------set����͸�ֵ---------------------*/
/*
	����ԭ��:
		set<T> st;                         Ĭ�Ϲ��캯��
		set(const set &st);              �������캯��
		set& operator=(const set& st);    ���صȺŲ�����
	set������������ʱ��insert
*/
/*---------------------------------------------------*/

//void printSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
////set����͸�ֵ
//void test1()
//{
//	set<int> s1;
//	//��������ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	//s1.insert(20);                  //����Ԫ�ز���ʱ�Զ�������   ����������ظ�ֵ
//	s1.insert(30);
//	s1.insert(20);
//
//	printSet(s1);
//
//	set<int> s2(s1);
//	printSet(s2);
//
//	set<int> s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//
///*-----------------set��С�ͽ���---------------------*/
///*
//	����ԭ��:
//		size();              ����������Ԫ�ص���Ŀ
//		empty();             �ж������Ƿ�Ϊ��
//		swap(st);            ����������������
//*/
///*---------------------------------------------------*/
//
////set��С�ͽ���
//void test2()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	printSet(s1);
//	if (s1.empty())
//		cout << "����Ϊ��!" << endl;
//	else
//	{
//		cout << "������Ϊ��!" << endl;
//		cout << "Ԫ�ظ���Ϊ: " << s1.size() << endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	printSet(s2);
//
//	cout << "������: " << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
///*-----------------set�����ɾ��---------------------*/
///*
//	����ԭ��:
//		insert(elem);          �������в���Ԫ��
//		clear();               �������Ԫ��
//		erase(pos);            ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//		erase(beg,end);        ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//		erase(elem);           ɾ��������ֵΪelem��Ԫ��
//*/
///*---------------------------------------------------*/
//
////set�����ɾ��
//void test3()
//{
//	set<int> s1;
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	s1.insert(40);
//
//	s1.erase(++s1.begin());
//	printSet(s1);
//
//	s1.insert(60);
//	s1.erase(30);
//	printSet(s1);
//
//	s1.erase(s1.begin(), s1.end());
//	printSet(s1);
//}
//
///*-----------------set���Һ�ͳ��---------------------*/
///*
//	����ԭ��:
//		find(key);      ����key�Ƿ���ڣ������ڣ����ظü��ĵ��������������ڣ�����set.end();
//		coutn(key);     ͳ��key��Ԫ�ظ���
//*/
///*---------------------------------------------------*/
//
////set���Һ�ͳ��
//void test4()
//{
//	set<int> s1;
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ��: " << *pos << endl;
//	}
//	else
//		cout << "û���ҵ�Ԫ��!" << endl;
//
//	int num = s1.count(30);          //����set���ԣ�ͳ�ƽ��Ҫô��0��Ҫô��1
//	cout << "Ԫ�ظ���Ϊ: " << num << endl;
//}
//
///*-----------------set��multiset������---------------------*/
///*
//	1.set�����Բ����ظ����ݣ���multiset����
//	2.set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//	3.multiset���������ݣ���˿��Բ����ظ�����
//*/
///*---------------------------------------------------*/
//
////set��multiset������
//void test5()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//	
//	ret = s.insert(10);
//	if (ret.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//}
//
///*-----------------pair���鴴��---------------------*/
///*
//	1.�ɶԳ��ֵ����ݣ����ö�����Է�����������
//	2.������ʽ:
//		pair<type,type> p(value1,value2);
//		pair<type,type> p = make_pair(value1,value2);
//*/
///*---------------------------------------------------*/
//
//void test6()
//{
//	pair<string, int> p("Tom", 30);
//	cout << "����: " << p.first << " ����: " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 20);
//	cout << "����: " << p2.first << " ����: " << p2.second << endl;
//}
//
///*-----------------set��������---------------------*/
///*
//	set����Ĭ���������Ϊ��С�������÷º��������Ըı��������
//*/
///*---------------------------------------------------*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {};
//	string m_Name;
//	int m_Age;
//};
//
//class MyCompare1
//{
//public:
//	bool operator()(const Person &p1, const Person &p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
////set��������
//void test7()
//{
//	set<int> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(50);
//	s.insert(40);
//	s.insert(30);
//	printSet(s);
//
//	//ָ���������Ϊ�Ӵ�С
//	set<int,MyCompare> s2;
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(40);
//	s2.insert(30);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	cout << "---------------------------------------------" << endl;
//
//	//�Զ����������� ����ָ���������
//	set<Person,MyCompare1> s1;
//	Person p1("����", 24);
//	Person p2("����", 28);
//	Person p3("�ŷ�", 26);
//	Person p4("����", 21);
//
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//	for (set<Person,MyCompare1>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << "����: " << it->m_Name << " ����: " << it->m_Age << endl;
//	}
//	cout << endl;
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
//	test7();
//	return 0;
//}