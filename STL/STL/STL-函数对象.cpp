#include<iostream>
#include<string>

using namespace std;

/*
	1.重载函数调用操作符的类，其对象常称为函数对象
	2.函数对象使用重载的()时，行为类似函数调用，也叫仿函数
	3.函数对象(仿函数是一个类)，不是一个函数
	4.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
	5.函数对象超出普通函数的概念，函数对象可以有自己的状态
	6.函数对象可以作为参数传递
*/

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint() :count(0) {};
//	void operator()(string text)
//	{
//		cout << text << endl;
//		count++;
//	}
//	int count;                  //内部自己状态
//};
//
//void doPrint(MyPrint &mp, string text)
//{
//	mp(text);
//}
//
//void test1()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << myPrint.count << endl;
//
//	doPrint(myPrint, "hello C++");
//}
//
//int main()
//{
//	test1();
//	return 0;
//}