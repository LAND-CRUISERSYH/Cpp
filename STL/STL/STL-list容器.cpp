#include<iostream>
#include<list>
#include<string>

using namespace std;

/*
	1.����:�����ݽ�����ʽ�洢
	2.����:��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
	3.��������:������һϵ�н�����
	4.�������:һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����
	5.STL�е�������һ��˫��ѭ������
	6.��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
	7.list���ŵ�:
		���ö�̬�洢���䣬��������ڴ��˷Ѻ����
		����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
	8.list��ȱ��:
		���������ǿռ�(ָ����)��ʱ��(����)����ķѽϴ�
	9.list��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������
*/

/*-----------------------------list���캯��----------------------------------*/
/*
	����ԭ��:
		list<T> lst;                            list����ģ����ʵ�ֶ����Ĭ�Ϲ�����ʽ
		list(beg,end);                          ���캯����[beg,end)�����е�Ԫ�ؿ���������
		list(n,elem);                        ���캯����n��elem����������
		list(const list& lst);                �������캯��
*/
/*---------------------------------------------------------------------------*/

//void printList(const list<int> &L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////list���캯��
//void test1()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//	printList(L);
//
//	list<int> L1(L.begin(), L.end());
//	printList(L1);
//
//	list<int> L2(4, 8);
//	printList(L2);
//
//	list<int> L3(L2);
//	printList(L3);
//}
//
///*-----------------------------list��ֵ�ͽ���----------------------------------*/
///*
//	����ԭ��:
//		assign(beg,end);             ��[beg,end)�����е����ݿ�����ֵ������
//		assign(n,elem);              ��n��elem������ֵ������
//		list& operator=(const list &lst);    ���صȺŲ�����
//		swap(lst);                    ��lst�뱾���Ԫ�ػ���
//*/
///*---------------------------------------------------------------------------*/
//
////list��ֵ�ͽ���
//void test2()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int> L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int> L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int> L4;
//	L4.assign(4, 8);
//	printList(L4);
//	cout << endl;
//	L4.swap(L2);
//	printList(L4);
//	printList(L2);
//}
//
///*-----------------------------list��С����----------------------------------*/
///*
//	����ԭ��:
//		size();                        ����������Ԫ�صĸ���
//		empty();                        �ж������Ƿ�Ϊ��
//		resize(num);           ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//		resize(num,elem);      ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�ã����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
///*---------------------------------------------------------------------------*/
//
////list��С����
//void test3()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	if (!L.empty())
//	{
//		cout << "������Ϊ��!" << endl;
//		cout << "������СΪ: " << L.size() << endl;
//	}
//	else
//		cout << "����Ϊ��!" << endl;
//
//	L.resize(10);
//	printList(L);
//
//	L.resize(20, 6);
//	printList(L);
//
//	L.resize(2);
//	printList(L);
//}
//
///*-----------------------------list�����ɾ��----------------------------------*/
///*
//	����ԭ��:
//		push_back(elem);          ������β������һ��Ԫ��
//		pop_back();              ɾ�����������һ��Ԫ��
//		push_front(elem);        ��������ͷ����һ��Ԫ��
//		pop_front();             ��������ͷ�Ƴ���һ��Ԫ��
//		insert(pos,elem);        ��posλ�ò�elemԪ�صĿ��������������ݵ�λ��
//		insert(pos,n,elem);      ��posλ�ò���n��elem���ݣ��޷���ֵ
//		insert(pos,beg,end);     ��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//		clear();                 �Ƴ���������������
//		erase(beg,end);          ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//		erase(pos);              ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//		remove(elem);            ɾ��������������elemֵƥ���Ԫ��
//*/
///*---------------------------------------------------------------------------*/
//
////list�����ɾ��
//void test4()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_front(100);
//	L.push_front(200);
//	printList(L);//200 100 10  20
//
//	L.pop_back();
//	L.pop_front();
//	printList(L);//100 10
//
//	L.insert(++L.begin(), 50);
//	printList(L);
//
//	L.insert(++L.begin(), 10, 70);
//	printList(L);
//	L.remove(70);
//	printList(L);
//
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L.insert(++L.begin(), L1.begin(), L1.end());
//	printList(L);
//
//	L.erase(L.begin());
//	printList(L);
//	L.erase(L.begin(), L.end());
//	printList(L);
//}
//
///*-----------------------------list���ݴ�ȡ----------------------------------*/
///*
//	����ԭ��:
//		front();                      ���ص�һ��Ԫ��
//		back();                      �������һ��Ԫ��
//	list�����в�����ͨ��[]����at��ʽ��������
//	list�����ĵ�������˫�����������֧���������
//*/
///*---------------------------------------------------------------------------*/
//
////list���ݴ�ȡ
//void test5()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//	printList(L);
//	cout << "��һ��Ԫ��: " << L.front() << endl;
//	cout << "���һ��Ԫ��: " << L.back() << endl;
//}
//
///*-----------------------------list��ת������----------------------------------*/
///*
//	����ԭ��:
//		reverse();         ��ת����
//		sort();            ��������
//	���в�֧��������ʵ��������������������ñ�׼�㷨���ڲ����ṩ��Ӧ���㷨
//*/
///*---------------------------------------------------------------------------*/
//
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//
////list��ת������
//void test6()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);   //300 200 100 10 20 30
//	L.reverse();
//	printList(L);   //30 20 10 100 200 300
//	L.sort();                //Ĭ��������� ��С����
//	printList(L);     //10 20 30 100 200 300
//	L.sort(myCompare);         //ָ������  �Ӵ�С
//	printList(L);
//}
//
///*-----------------------------list������----------------------------------*/
///*
//	��������:��Person�Զ����������ͽ�������Person�����������������䣬���
//	�������:������������������������ͬ������߽��н���
//*/
///*---------------------------------------------------------------------------*/
//
//class Person
//{
//public:
//	Person(string name, int age, int height) :m_Name(name), m_Age(age), m_Height(height) {};
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//void printPerson(const list<Person> &lst)
//{
//	for (list<Person>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << "����: " << (*it).m_Name << " ����: " << (*it).m_Age << " ���: " << (*it).m_Height << endl;
//	}
//}
//
////ָ���������
//bool comparePerson(Person &p1, Person &p2)
//{
//	//����������
//	if (p1.m_Age == p2.m_Age)
//	{
//		//������ͬ��������߽��н���
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//}
//
//void test7()
//{
//	list<Person> L;
//
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	printPerson(L);
//	cout << "-------------------------------------------" << endl;
//	L.sort(comparePerson);
//	printPerson(L);
//
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