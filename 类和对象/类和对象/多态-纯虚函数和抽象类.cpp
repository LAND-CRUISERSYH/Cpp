#include<iostream>

using namespace std;

/*
	1.在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
	2.纯虚函数语法: virtual 返回值类型 函数名(参数列表) = 0;
	3.当类中有了纯虚函数，这个类也称为抽象类
	4.抽象类特点:
		无法实例化对象(堆区和栈区都不可)
		子类必须重写抽象类中的纯虚函数，否则也属于抽象类，无法实例化对象
*/

//class Base
//{
//public:
//	//纯虚函数
//	//只要有一个纯虚函数，这个类称为抽象类
//	virtual void func() = 0;
//};
//
//class Base1 :public Base
//{
//public:
//	void func()
//	{
//		cout << "子类func()调用" << endl;
//	}
//};
//
//void test1()
//{
//	Base1 b1;
//	Base &b = b1;
//	b.func();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}