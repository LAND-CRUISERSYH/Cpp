#include<iostream>
#include<map>

using namespace std;

/*
	1.map中所有元素都是pair
	2.pair中第一个元素为key(键值)，祈祷索引作用，第二个元素为value(实值)
	3.所有元素都会根据元素的键值自动排序
	4.map/multimap属于关联式容器，底层结构是用二叉树实现
	5.可以根据key值快速找到value值
	6.map和multimap区别:
		map不允许容器中有重复key值元素
		multimap允许容器中有重复key值元素
	7.map中所有元素都是成对出现，插入数据时要使用对组
*/

/*-------------------map构造和赋值------------------------*/
/*
	map<T1,T2> mp;                   map默认构造函数
	map(const map& mp);             拷贝构造函数
	map& operator=(const map& mp);   重载等号操作符
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
////map构造和赋值
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
///*-------------------map大小和交换------------------------*/
///*
//	size();                返回容器中元素的数目
//	empty();               判断容器是否为空
//	swap(st);              交换两个集合容器
//*/
///*--------------------------------------------------------*/
//
////map大小和交换
//void test2()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	if (m.empty())
//		cout << "容器为空!" << endl;
//	else
//	{
//		printMap(m);
//		cout << "容器中元素数目为: " << m.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(1, 100));
//	m2.insert(pair<int, int>(2, 200));
//	m2.insert(pair<int, int>(3, 300));
//	m2.insert(pair<int, int>(4, 400));
//
//	cout << "交换后" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//
///*-------------------map插入和删除------------------------*/
///*
//	insert(elem);                   在容器中插入元素
//	clear();                      清除所有元素
//	erase(pos);                   删除pos迭代器所指的元素，返回下一个元素的迭代器
//	erase(beg,end);             删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//	erase(key);                 删除容器中值为key的元素
//*/
///*--------------------------------------------------------*/
//
////map插入和删除
//void test3()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//
//	m.erase(3);                   //按照key进行删除
//	printMap(m);
//
//	m.erase(++m.begin());
//	printMap(m);
//
//	m.clear();
//	printMap(m);
//}
//
///*-------------------map查找和统计------------------------*/
///*
//	find(key);                 查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//	count(key);                统计key的元素个数
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
//		cout << "查找到该元素,value = " << pos->second << endl;
//		cout << "该元素个数为: " << m.count(3) << endl;
//	}
//	else
//		cout << "没有查找到该元素" << endl;
//
//}
//
///*-------------------map容器排序------------------------*/
///*
//	map容器默认排序规则为:按照key值进行从小到大排序，利用仿函数可以改变排序规则
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
////map容器排序
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