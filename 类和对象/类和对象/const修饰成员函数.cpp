#include<iostream>

using namespace std;

/*
	1.成员函数后加const后我们称这个函数为常函数
	2.常函数内不可以修改成员属性
	3.成员属性声明时加关键字mutable，在常函数中依然可以修改
	4.声明对象前加const称该对象为常对象
	5.常对象只能调用常函数
*/

//class Man
//{
//public:
//	//this指针的本质是指针常量(指针的指向是不可以修改的)
//	//this:Man *const this-----------const Man *const this
//	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//	void showMan() const         //常成员函数
//	{
//		//this->age = 100;
//		num = 100;
//	}
//
//	void func(){}
//	int age;
//	mutable int num;      //特殊变量，即使在常函数中，也可以修改这个值(加关键字mutable)
//};
//
//void  test1()
//{
//	const Man m;         //在对象前加const，变为常对象
//	//常对象只能调用常函数,不能调用普通成员函数，因为普通成员函数可以修改属性
//	m.showMan();
//}
//
//int main()
//{
//
//	return 0;
//}