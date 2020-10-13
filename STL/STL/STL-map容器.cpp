#include<iostream>
#include<map>

using namespace std;

/*
	1.map������Ԫ�ض���pair
	2.pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
	3.����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
	4.map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
	5.���Ը���keyֵ�����ҵ�valueֵ
	6.map��multimap����:
		map���������������ظ�keyֵԪ��
		multimap�������������ظ�keyֵԪ��
	7.map������Ԫ�ض��ǳɶԳ��֣���������ʱҪʹ�ö���
*/

/*-------------------map����͸�ֵ------------------------*/
/*
	map<T1,T2> mp;                   mapĬ�Ϲ��캯��
	map(const map& mp);             �������캯��
	map& operator=(const map& mp);   ���صȺŲ�����
*/
/*--------------------------------------------------------*/

//void printMap(const map<int, int> &mp)
//{
//	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////map����͸�ֵ
//void test1()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 20));
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	map<int, int> m1(m);
//	printMap(m1);
//
//	map<int, int> m2;
//	m2 = m1;
//	printMap(m2);
//}
//
///*-------------------map��С�ͽ���------------------------*/
///*
//	size();                ����������Ԫ�ص���Ŀ
//	empty();               �ж������Ƿ�Ϊ��
//	swap(st);              ����������������
//*/
///*--------------------------------------------------------*/
//
////map��С�ͽ���
//void test2()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	if (m.empty())
//		cout << "����Ϊ��!" << endl;
//	else
//	{
//		printMap(m);
//		cout << "������Ԫ����ĿΪ: " << m.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(1, 100));
//	m2.insert(pair<int, int>(2, 200));
//	m2.insert(pair<int, int>(3, 300));
//	m2.insert(pair<int, int>(4, 400));
//
//	cout << "������" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//
///*-------------------map�����ɾ��------------------------*/
///*
//	insert(elem);                   �������в���Ԫ��
//	clear();                      �������Ԫ��
//	erase(pos);                   ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//	erase(beg,end);             ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//	erase(key);                 ɾ��������ֵΪkey��Ԫ��
//*/
///*--------------------------------------------------------*/
//
////map�����ɾ��
//void test3()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	m.erase(3);                   //����key����ɾ��
//	printMap(m);
//
//	m.erase(++m.begin());
//	printMap(m);
//
//	m.clear();
//	printMap(m);
//}
//
///*-------------------map���Һ�ͳ��------------------------*/
///*
//	find(key);                 ����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//	count(key);                ͳ��key��Ԫ�ظ���
//*/
///*--------------------------------------------------------*/
//
//void test4()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "���ҵ���Ԫ��,value = " << pos->second << endl;
//		cout << "��Ԫ�ظ���Ϊ: " << m.count(3) << endl;
//	}
//	else
//		cout << "û�в��ҵ���Ԫ��" << endl;
//
//}
//
///*-------------------map��������------------------------*/
///*
//	map����Ĭ���������Ϊ:����keyֵ���д�С�����������÷º������Ըı��������
//*/
///*--------------------------------------------------------*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////map��������
//void test5()
//{
//	map<int, int,MyCompare> m;
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(5, 50));
//	m.insert(make_pair(4, 40));
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value: " << it->second << endl;
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
//	test5();
//	return 0;
//}