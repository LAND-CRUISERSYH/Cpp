#include<iostream>
#include<set>
#include<string>

using namespace std;

/*
	1.所有元素都会在插入时自动被排序
	2.set/multiset属于关联式容器，底层结构是用二叉树实现
	3.set和multiset区别: set不允许容器中有重复的元素，multiset允许容器中有重复的元素
*/

/*-----------------set构造和赋值---------------------*/
/*
	函数原型:
		set<T> st;                         默认构造函数
		set(const set &st);              拷贝构造函数
		set& operator=(const set& st);    重载等号操作符
	set容器插入数据时用insert
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
////set构造和赋值
//void test1()
//{
//	set<int> s1;
//	//插入数据只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	//s1.insert(20);                  //所有元素插入时自动被排序   不允许插入重复值
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
///*-----------------set大小和交换---------------------*/
///*
//	函数原型:
//		size();              返回容器中元素的数目
//		empty();             判断容器是否为空
//		swap(st);            交换两个集合容器
//*/
///*---------------------------------------------------*/
//
////set大小和交换
//void test2()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	printSet(s1);
//	if (s1.empty())
//		cout << "容器为空!" << endl;
//	else
//	{
//		cout << "容器不为空!" << endl;
//		cout << "元素个数为: " << s1.size() << endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	printSet(s2);
//
//	cout << "交换后: " << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
///*-----------------set插入和删除---------------------*/
///*
//	函数原型:
//		insert(elem);          在容器中插入元素
//		clear();               清除所有元素
//		erase(pos);            删除pos迭代器所指的元素，返回下一个元素的迭代器
//		erase(beg,end);        删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//		erase(elem);           删除容器中值为elem的元素
//*/
///*---------------------------------------------------*/
//
////set插入和删除
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
///*-----------------set查找和统计---------------------*/
///*
//	函数原型:
//		find(key);      查找key是否存在，若存在，返回该键的迭代器，若不存在，返回set.end();
//		coutn(key);     统计key的元素个数
//*/
///*---------------------------------------------------*/
//
////set查找和统计
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
//		cout << "找到元素: " << *pos << endl;
//	}
//	else
//		cout << "没有找到元素!" << endl;
//
//	int num = s1.count(30);          //对于set而言，统计结果要么是0，要么是1
//	cout << "元素个数为: " << num << endl;
//}
//
///*-----------------set和multiset的区别---------------------*/
///*
//	1.set不可以插入重复数据，而multiset可以
//	2.set插入数据的同时会返回插入结果，表示插入是否成功
//	3.multiset不会检测数据，因此可以插入重复数据
//*/
///*---------------------------------------------------*/
//
////set和multiset的区别
//void test5()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
//	
//	ret = s.insert(10);
//	if (ret.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
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
///*-----------------pair对组创建---------------------*/
///*
//	1.成对出现的数据，利用对组可以返回两个数据
//	2.创建方式:
//		pair<type,type> p(value1,value2);
//		pair<type,type> p = make_pair(value1,value2);
//*/
///*---------------------------------------------------*/
//
//void test6()
//{
//	pair<string, int> p("Tom", 30);
//	cout << "姓名: " << p.first << " 年龄: " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 20);
//	cout << "姓名: " << p2.first << " 年龄: " << p2.second << endl;
//}
//
///*-----------------set容器排序---------------------*/
///*
//	set容器默认排序规则为从小到大，利用仿函数，可以改变排序规则
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
////set容器排序
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
//	//指定排序规则为从大到小
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
//	//自定义数据类型 都会指定排序规则
//	set<Person,MyCompare1> s1;
//	Person p1("刘备", 24);
//	Person p2("关羽", 28);
//	Person p3("张飞", 26);
//	Person p4("赵云", 21);
//
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//	for (set<Person,MyCompare1>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << "姓名: " << it->m_Name << " 年龄: " << it->m_Age << endl;
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