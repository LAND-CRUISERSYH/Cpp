#include<iostream>

using namespace std;

/*
	1.普通函数调用时可以发生自动类型转换(隐式类型转换)
	2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
	3.如果利用显式指定类型的方式，可以发生隐式类型转换
	4.建议使用显式指定类型的方式，调用函数模板，因为可以自己确定通用类型T
*/

//int myAdd(int a, int b)
//{
//	return a + b;
//}
//
//template<typename T>
//T mySub(T a, T b)
//{
//	return a - b;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//
//	char c = 'c';          //ASCII a = 97  c = 99
//
//	cout << myAdd(a, c) << endl;
//
//	//cout << mySub(a, c) << endl;          //自动类型推导不会发生类型转换
//
//	cout << mySub<int>(c, a) << endl;         //显式指定类型会发生隐式类型转换
//}
//
//int main()
//{
//	test1();
//	return 0;
//}