#include<iostream>

using namespace std;

/*
	1.C++另一种编程思想称为泛型编程，主要利用的技术就是模板
	2.C++提供两种模板机制:函数模板和类模板
	3.函数模板作用:建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
	4.语法:  template<typename T>
		template----声明创建模板
		typename----表明其后面的符号是一种数据类型，可以用class代替
		T-----------通用的数据类型，名称可以替换，通常为大写字母
	5.函数模板利用关键字template
	6.使用函数模板有两种方式:自动类型推导、显式指定类型
	7.模板的目的是为了提高复用性，将类型参数化
	8.自动类型推导，必须推导出一致的数据类型T，才可以使用
	9.模板必须要确定出T的数据类型，才可以使用
*/


//交换两个整型函数
//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型函数
//void swapDouble(double &a, double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>           //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用类型
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//mySwap(a, b);      //正确
//	//mySwap(a, c);        //错误     推导不出一致的T类型
//	cout << "a = " << a << "\tb = " << b << endl;
//}
//
//template<typename T>
//void func()
//{
//	cout << "func()函数调用" << endl;
//}
//
//void test2()
//{
//	func<int>();
//}
//
//int main()
//{
//	test1();
//	test2();
//	//int a = 10;
//	//int b = 20;
//	//cout << "a = " << a << "\tb = " << b << endl;
//	////swapInt(a, b);
//	////利用函数模板来交换(两种方式)
//	////1.自动类型推导
//	////mySwap(a, b);
//	////2.显示指定类型
//	//mySwap<int>(a, b);
//	//cout << "a = " << a << "\tb = " << b << endl;
//
//	//double c = 1.1;
//	//double d = 2.2;
//	//cout << "c = " << c << "\td = " << d << endl;
//	////swaoDouble(a,b);
//	//cout << "c = " << c << "\td = " << d << endl;
//	return 0;
//}