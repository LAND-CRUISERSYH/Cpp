#include<iostream>

using namespace std;

//在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上

//class Man
//{
//	int num;       //非静态成员变量
//	static int a;   //静态成员变量
//	void func();    //非静态成员函数
//	static void func2();   //静态成员函数
//};
//
//int Man::a = 6;
//
//void test1()
//{
//	Man m;
//	//空对象占用内存空间为:1
//	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置(每个空对象占用内存位置独一无二)
//	cout << sizeof(m) << endl;
//}
//
//void test2()
//{
//	Man m;
//	cout << sizeof(m) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}