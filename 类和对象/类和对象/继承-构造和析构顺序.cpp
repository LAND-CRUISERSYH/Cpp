#include<iostream>

using namespace std;

/*
	1.子类继承父类后，当创建子类对象，也会调用父类的构造函数
	2.先构造父类再构造子类(先调用父类构造函数，在调用子类构造函数)，先析构子类再析构父类(先调用子类析构函数，再调用父类析构函数)
*/

//class Base
//{
//public:
//	Base()
//	{
//		cout << "父类的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "父类的析构函数" << endl;
//	}
//};
//
//class Base1 :public Base
//{
//public:
//	Base1()
//	{
//		cout << "子类的构造函数" << endl;
//	}
//	~Base1()
//	{
//		cout << "子类的析构函数" << endl;
//	}
//};
//
//void test1()
//{
//	//Base b;
//	Base1 b1;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}