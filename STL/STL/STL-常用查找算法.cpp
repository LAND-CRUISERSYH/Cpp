#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

/*
	find(iterator beg,iterator end,value);     查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
*/

//查找内置数据类型
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找容器是否有5
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	if (pos != v.end())
//		cout << "查找到该元素: " << *pos << endl;
//	else
//		cout << "未查找到该元素" << endl;
//}
//
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {};
//	//重载 == 让底层find知道如何对比person数据类型
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
////查找自定义数据类型
//void test2()
//{
//	vector<Person> v;
//	Person p1("张飞", 20);
//	Person p2("刘备", 26);
//	Person p3("关羽", 22);
//	Person p4("赵云", 27);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
//	if (pos != v.end())
//		cout << "姓名: " << pos->m_Name << " 年龄: " << pos->m_Age << endl;
//	else
//		cout << "找不到该元素" << endl;
//}
//
///*
//	find_if(iterator beg,iterator end,_Pred);       按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
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
////查找内置数据类型
//void test3()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
//	if (pos != v.end())
//		cout << "找到元素: " << *pos << endl;
//	else
//		cout << "未找到元素" << endl;
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
////查找自定义数据类型
//void test4()
//{
//	vector<Worker> v;
//	Worker w1("唐僧", 22);
//	Worker w2("孙悟空", 26);
//	Worker w3("猪八戒", 23);
//	Worker w4("沙僧", 24);
//	v.push_back(w1);
//	v.push_back(w2);
//	v.push_back(w3);
//	v.push_back(w4);
//
//	vector<Worker>::iterator pos = find_if(v.begin(), v.end(), NameGreater());
//	if (pos != v.end())
//	{
//		cout << "姓名: " << pos->m_Name << " 年龄: " << pos->m_Age << endl;
//	}
//	else
//		cout << "没有找到" << endl;
//}
//
///*
//	adjacent_find(iterator beg,iterator end);    查找相邻重复元素，返回相邻元素的第一个位置的迭代器
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
//		cout << "找到相邻重复元素: " << *pos << endl;
//	else
//		cout << "没有找到相邻重复元素" << endl;
//}
//
///*
//	bool binary_search(iterator beg,iterator end,value);      查找指定的元素，查到返回true,否则返回false
//	在无序序列中不可用
//*/
//
//void test6()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找容器中是否有9
//	//容器必须是有序序列，如果是无序序列，结果未知
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//		cout << "找到该元素" << endl;
//	else
//		cout << "未找到该元素" << endl;
//}
//
///*
//	count(iterator beg,iterator end,value);               统计元素出现次数
//*/
//
////统计内置数据类型
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
//	cout << "10共出现了: " << num << "次" << endl;
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
////统计自定义数据类型
//void test8()
//{
//	vector<Man> v;
//	Man m1("刘备", 35);
//	Man m2("关羽", 35);
//	Man m3("张飞", 35);
//	Man m4("赵云", 30);
//	Man m5("曹操", 45);
//	v.push_back(m1);
//	v.push_back(m2);
//	v.push_back(m3);
//	v.push_back(m4);
//	v.push_back(m5);
//
//	Man m("诸葛亮", 35);
//	int num = count(v.begin(), v.end(), m);
//	cout << "和诸葛亮同岁的人次: " << num << endl;
//}
//
///*
//	count_if(iterator beg,iterator end,_Pred);           按条件统计元素出现次数
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
////统计内置数据类型
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
//	cout << "大于40的数有: " << num << "个" << endl;
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
////统计自定义数据类型
//void test10()
//{
//	vector<Man> v;
//	Man m1("刘备", 35);
//	Man m2("关羽", 35);
//	Man m3("张飞", 35);
//	Man m4("赵云", 40);
//	Man m5("曹操", 20);
//	v.push_back(m1);
//	v.push_back(m2);
//	v.push_back(m3);
//	v.push_back(m4);
//	v.push_back(m5);
//
//	//大于20岁人员个数
//	int num = count_if(v.begin(), v.end(), GreaterAge());
//	cout << "大于20岁的人员个数为: " << num << endl;
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