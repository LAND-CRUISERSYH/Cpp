#include<iostream>

using namespace std;

/*
	1.每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
	2.this指针指向被调用的成员函数所属的对象
	3.this指针是隐含每一个非静态成员函数内的一种指针
	4.this指针不需要定义，直接使用即可
	5.当形参和成员变量同名时，可用this指针来区分
	6.在类的非静态成员函数中返回对象本身，可使用return *this;
*/

//class Man
//{
//public:
//	Man(int age)
//	{
//		this->age = age;         //this指针指向被调用的成员函数所属的对象
//	}
//
//	Man& ManAdd(const Man &m)
//	{
//		this->age += m.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test1()
//{
//	Man m1(18);
//	cout << m1.age << endl;
//}
//
//void test2()
//{
//	Man m1(10);
//	Man m2(10);
//	//链式编程思想
//	m2.ManAdd(m1).ManAdd(m1).ManAdd(m1);
//	cout << m2.age << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}