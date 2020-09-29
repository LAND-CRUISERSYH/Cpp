#include<iostream>
#include<vector>
#include<algorithm>          //标准算法头文件
#include<string>

using namespace std;

/*
	1.C++的面向对象和泛型编程思想，目的就是复用性的提升
	2.大多情况下，数据结构和算法都未能有一套标准，导致被迫从事大量重复工作
	3.为了建立数据结构和算法的一套标准，诞生了STL
	4.STL(Standard Template Library,标准模板库)
	5.STL从广义上分为: 容器 算法 迭代器
	6.容器和算法之间通过迭代器进行无缝连接
	7.STL几乎所有的代码都采用了模板类或者模板函数

	STL大体分为六大组件: 容器、算法、迭代器、仿函数、适配器(配接器)、空间配置器
		1.容器:各种数据结构，如vector、list、deque、set、map等，用来存放数据
		2.算法:各种常用的算法，如sort、find、copy、for_each等
		3.迭代器:扮演了容器与算法之间的胶合剂
		4.仿函数:行为类似函数，可作为算法的某种策略
		5.适配器:一种用来修饰容器或者仿函数或迭代器接口的东西
		6.空间配置器:负责空间的配置与管理

	容器:
		1.STL容器就是将运用最广泛的一些数据结构实现出来
		2.常用的数据结构:数组、链表、树、栈、队列、集合、映射表等
		3.这些容器分为序列式容器和关联式容器两种:
			序列式容器:强调值的排序，序列式容器中的每个元素均有固定的位置
			关联式容器:二叉树结构，各元素之间没有严格的物理上的顺序关系

	算法:
		1.有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法(Algorithms)
		2.算法分为:质变算法和非质变算法
			质变算法:是指运算过程中会更改区间内的元素的内容。例如拷贝、替换、删除等等
			非质变算法:是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等

	迭代器(容器和算法之间粘合剂):
		1.提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式
		2.每个容器都有自己专属的迭代器
		3.迭代器使用非常类似指针
		4.迭代器种类:
			种类					功能									支持运算
		   输入迭代器			对数据的只读访问						只读，支持++、==、!、=
		   输出迭代器			对数据的只写访问						只写，支持++
		   前向迭代器			读写操作，并能向前推进迭代器			读写，支持++、==、!、=
		   双向迭代器			读写操作，并能向前和向后操作			读写，支持++、--
		   随机访问迭代器		读写操作，可以以跳跃的方式访问任意数据	读写，支持++、--、[n]、-n、<、<=、>、>=
		5.常用的容器中迭代器种类为双向迭代器和随机访问迭代器
*/

//class Person
//{
//public:
//	Person(string name,int age):m_Name(name),m_Age(age){}
//
//	string m_Name;
//	int m_Age;
//};
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
////存放内置类型
//void test1()
//{
//	//创建了一个vector容器
//	vector<int> ivec;
//
//	//向容器中插入数据
//	ivec.push_back(10);
//	ivec.push_back(20);
//	ivec.push_back(30);
//	ivec.push_back(40);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = ivec.begin();              //起始迭代器，指向容器中第一个元素
//	//vector<int>::iterator itEnd = ivec.end();                  //结束迭代器，指向容器最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << " ";
//	//	itBegin++;
//	//}
//
//	////第二种遍历方式
//	//for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
//	//{
//	//	cout << *it << " ";
//	//}
//
//	//第三种遍历方式    利用STL提供的遍历算法
//	for_each(ivec.begin(), ivec.end(), myPrint);
//}
//
////存放自定义数据类型
//void test2()
//{
//	vector<Person> vec;
//
//	Person p1("张三", 10);
//	Person p2("李四", 20);
//	Person p3("王五", 30);
//	Person p4("赵六", 40);
//	Person p5("陈七", 50);
//
//	//向容器中添加数据
//	vec.push_back(p1);
//	vec.push_back(p2);
//	vec.push_back(p3);
//	vec.push_back(p4);
//	vec.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << "姓名: " << it->m_Name << "\t年龄: " << it->m_Age << endl;
//	}
//}
//
////存放自定义类型指针
//void test3()
//{
//	vector<Person*> vec;
//
//	Person p1("张三", 10);
//	Person p2("李四", 20);
//	Person p3("王五", 30);
//	Person p4("赵六", 40);
//	Person p5("陈七", 50);
//
//	//向容器中添加数据
//	vec.push_back(&p1);
//	vec.push_back(&p2);
//	vec.push_back(&p3);
//	vec.push_back(&p4);
//	vec.push_back(&p5);
//
//	//遍历容器中的数据
//	for (vector<Person*>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << "姓名: " << (*it)->m_Name << "\t年龄: " << (*it)->m_Age << endl;
//	}
//}
//
////嵌套容器
//void test4()
//{
//	vector<vector<int>> ivec;
//	//创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//向小容器添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 10);
//		v3.push_back(i + 100);
//		v4.push_back(i + 1000);
//	}
//
//	//将小容器插入到大容器中
//	ivec.push_back(v1);
//	ivec.push_back(v2);
//	ivec.push_back(v3);
//	ivec.push_back(v4);
//
//	//通过大容器遍历数据
//	for (vector<vector<int>>::iterator it = ivec.begin(); it != ivec.end(); it++)
//	{
//		//(*it)   -- 容器 vector<int>
//		for (vector<int>::iterator i = (*it).begin(); i != (*it).end(); i++)
//		{
//			cout << *i << "\t";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}