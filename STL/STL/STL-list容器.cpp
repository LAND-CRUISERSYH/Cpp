#include<iostream>
#include<list>
#include<string>

using namespace std;

/*
	1.功能:将数据进行链式存储
	2.链表:是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
	3.链表的组成:链表由一系列结点组成
	4.结点的组成:一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
	5.STL中的链表是一个双向循环链表
	6.由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器
	7.list的优点:
		采用动态存储分配，不会造成内存浪费和溢出
		链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
	8.list的缺点:
		链表灵活，但是空间(指针域)和时间(遍历)额外耗费较大
	9.list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
*/

/*-----------------------------list构造函数----------------------------------*/
/*
	函数原型:
		list<T> lst;                            list采用模板类实现对象的默认构造形式
		list(beg,end);                          构造函数将[beg,end)区间中的元素拷贝给本身
		list(n,elem);                        构造函数将n个elem拷贝给本身
		list(const list& lst);                拷贝构造函数
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
////list构造函数
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
///*-----------------------------list赋值和交换----------------------------------*/
///*
//	函数原型:
//		assign(beg,end);             将[beg,end)区间中的数据拷贝赋值给本身
//		assign(n,elem);              将n个elem拷贝赋值给本身
//		list& operator=(const list &lst);    重载等号操作符
//		swap(lst);                    将lst与本身的元素互换
//*/
///*---------------------------------------------------------------------------*/
//
////list赋值和交换
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
///*-----------------------------list大小操作----------------------------------*/
///*
//	函数原型:
//		size();                        返回容器中元素的个数
//		empty();                        判断容器是否为空
//		resize(num);           重新指定容器的长度为num，若容器变长，则以默认值填充新位置，如果容器变短，则末尾超出容器长度的元素被删除
//		resize(num,elem);      重新指定容器的长度为num，若容器变长，则以elem值填充新位置，如果容器变短，则末尾超出容器长度的元素被删除
//*/
///*---------------------------------------------------------------------------*/
//
////list大小操作
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
//		cout << "容器不为空!" << endl;
//		cout << "容器大小为: " << L.size() << endl;
//	}
//	else
//		cout << "容器为空!" << endl;
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
///*-----------------------------list插入和删除----------------------------------*/
///*
//	函数原型:
//		push_back(elem);          在容器尾部加入一个元素
//		pop_back();              删除容器中最后一个元素
//		push_front(elem);        在容器开头插入一个元素
//		pop_front();             从容器开头移除第一个元素
//		insert(pos,elem);        在pos位置插elem元素的拷贝，返回新数据的位置
//		insert(pos,n,elem);      在pos位置插入n个elem数据，无返回值
//		insert(pos,beg,end);     在pos位置插入[beg,end)区间的数据，无返回值
//		clear();                 移除容器的所有数据
//		erase(beg,end);          删除[beg,end)区间的数据，返回下一个数据的位置
//		erase(pos);              删除pos位置的数据，返回下一个数据的位置
//		remove(elem);            删除容器中所有与elem值匹配的元素
//*/
///*---------------------------------------------------------------------------*/
//
////list插入和删除
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
///*-----------------------------list数据存取----------------------------------*/
///*
//	函数原型:
//		front();                      返回第一个元素
//		back();                      返回最后一个元素
//	list容器中不可以通过[]或者at方式访问数据
//	list容器的迭代器是双向迭代器，不支持随机访问
//*/
///*---------------------------------------------------------------------------*/
//
////list数据存取
//void test5()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//	printList(L);
//	cout << "第一个元素: " << L.front() << endl;
//	cout << "最后一个元素: " << L.back() << endl;
//}
//
///*-----------------------------list反转和排序----------------------------------*/
///*
//	函数原型:
//		reverse();         反转链表
//		sort();            链表排序
//	所有不支持随机访问迭代器的容器，不可以用标准算法；内部会提供对应的算法
//*/
///*---------------------------------------------------------------------------*/
//
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//
////list反转和排序
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
//	L.sort();                //默认排序规则 从小到大
//	printList(L);     //10 20 30 100 200 300
//	L.sort(myCompare);         //指定规则  从大到小
//	printList(L);
//}
//
///*-----------------------------list排序案例----------------------------------*/
///*
//	案例描述:将Person自定义数据类型进行排序，Person中属性有姓名，年龄，身高
//	排序规则:按照年龄进行升序，如果年龄相同按照身高进行降序
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
//		cout << "姓名: " << (*it).m_Name << " 年龄: " << (*it).m_Age << " 身高: " << (*it).m_Height << endl;
//	}
//}
//
////指定排序规则
//bool comparePerson(Person &p1, Person &p2)
//{
//	//按年龄升序
//	if (p1.m_Age == p2.m_Age)
//	{
//		//年龄相同，按照身高进行降序
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
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
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