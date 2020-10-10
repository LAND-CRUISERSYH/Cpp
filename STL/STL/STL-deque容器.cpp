#include<iostream>
#include<deque>
#include<algorithm>        //标准算法头文件

using namespace std;

///*-------------------deque容器基本概念及构造函数----------------------*/
///*
//	1.功能:双端数组，可以对头端进行插入删除操作
//	2.deque与vector区别:
//		vector对于头部的插入删除效率低，数据量越大、效率越低
//		deque相对而言，对头部的插入删除速度会比vector快
//		vector访问元素时的速度会比deque快，这和两者的内部实现有关
//	3.deque内部工作原理:
//		deque内部有个中控器:维护每段缓冲区中的内容，缓冲区中存放真实数据
//		中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
//	4.deque容器的迭代器也是支持随机访问的
//	5.deque构造函数:
//		deque<T> deq;                      //默认构造形式
//		deque(beg,end);                     //构造函数将[beg,end)区间中的元素拷贝给本身
//		deque(n,elem);                     //构造函数将n个elem拷贝给本身
//		deque(const deque &deq);              //拷贝构造函数
//*/
///*------------------------------------------------------------------- */
//
//void printDeque(const deque<int> &deq)
//{
//	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
////deque构造函数
//void test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(9, 5);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//}
//
///*-----------------------------deque赋值操作--------------------------*/
///*
//	函数原型:
//		deque& operator=(const deque& deq);              重载等号操作符
//		assign(beg,end);                                将[beg,end)区间中的数据拷贝赋值给本身
//		assign(n,elem);                                 将n个elem拷贝赋值给本身
//*/
///*------------------------------------------------------------------- */
//
////deque赋值操作
//void test2()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	deque<int> d2 = d1;
//	printDeque(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	
//	deque<int> d4;
//	d4.assign(9, 5);
//	printDeque(d4);
//}
//
///*-----------------------------deque大小操作--------------------------*/
///*
//	函数原型:
//		deque.empty();             判断容器是否为空
//		deque.size();              返回容器中元素的个数
//		deque.resize(num);      重新指定容器的长度为num，若容器变长，则以默认值填充新位置，若容器变短，则末尾超出容器长度的元素被删除
//		deque.resize(num,elem); 重新指定容器的长度为num，若容器变长，则以elem值填充新位置，若容器变短，则末尾超出容器长度的元素被删除
//*/
///*------------------------------------------------------------------- */
//
////deque大小操作
//void test3()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	if (d1.empty())
//		cout << "deque容器为空!" << endl;
//	else
//		cout << "deque容器不为空!" << endl;
//	cout << "deque容器中元素个数为: " << d1.size() << endl;
//
//	d1.resize(5);
//	printDeque(d1);
//	cout << "deque容器中元素个数为: " << d1.size() << endl;
//
//	d1.resize(8, 1);
//	printDeque(d1);
//	cout << "deque容器中元素个数为: " << d1.size() << endl;
//}
//
///*-----------------------------deque插入和删除--------------------------*/
///*
//	函数原型:
//	两端插入删除操作:
//		push_back(elem);                  在容器尾部添加一个数据
//		push_front(elem);                 在容器头部插入一个数据
//		pop_back();                       删除容器最后一个数据
//		pop_front();                      删除容器第一个数据
//	指定位置操作:
//		insert(pos,elem);                 在pos位置插入一个elem元素的拷贝，返回新数据的位置
//		insert(pos,n.elem);               在pos位置插入n个elem数据，无返回值
//		insert(pos,beg,end);              在pos位置插入[beg,end)区间的数据，无返回值
//		clear();                          清空容器的所有数据
//		erase(beg,end);                   删除[beg,end)区间的数据，返回下一个数据的位置
//		erase(pos);                       删除pos位置的数据，返回下一个数据的位置
//*/
///*------------------------------------------------------------------- */
//
////deque插入和删除
//void test4()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	d1.pop_back();
//	d1.pop_front();
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(10);
//	d2.push_back(20);
//	d2.push_front(100);
//	d2.push_front(200);
//	printDeque(d2);
//
//	d2.insert(d2.begin(), 1000);
//	printDeque(d2);
//
//	d2.insert(d2.begin()+1, 2, 700);
//	printDeque(d2);
//
//	deque<int> d3;
//	for (int i = 0; i < 10; i++)
//		d3.push_back(i);
//
//	d2.insert(d2.begin() + 2, d3.begin() + 1, d3.end());
//	printDeque(d2);
//
//	d2.erase(d2.begin() + 6, d2.begin() + 8);
//	printDeque(d2);
//
//	d2.erase(d2.begin() + 2);
//	printDeque(d2);
//
//	d2.clear();
//	if (d2.empty())
//		cout << "容器为空" << endl;
//	else
//		cout << "容器不为空" << endl;
//	cout << d2.size() << endl;
//	printDeque(d2);
//}
//
///*-----------------------------deque数据存取--------------------------*/
///*
//	函数原型:
//		at(int idx);                返回索引idx所指的数据
//		operator[];                 返回索引idx所指的数据
//		front();                    返回容器中第一个数据元素
//		back();                     返回容器中最后一个数据元素
//*/
///*------------------------------------------------------------------- */
//
////deque数据存取
//void test5()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	cout << d1[5] << endl;
//	cout << d1.at(5) << endl;
//	cout << "容器中第一个数据元素为: " << d1.front() << endl;
//	cout << "容器中最后一个数据元素为: " << d1.back() << endl;
//}
//
///*-----------------------------deque排序--------------------------*/
///*
//	函数原型:
//		sort(iterator beg,iterator end)       对beg和end区间内元素进行排序
//*/
///*------------------------------------------------------------------- */
//
////deque排序
//void test6()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	printDeque(d1);
//
//	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//	sort(d1.begin(), d1.end());           //默认排序规则:从小到大
//	printDeque(d1);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//
//	return 0;
//}