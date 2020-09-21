#include<iostream>

using namespace std;

/*
	1.多态分为两类:静态多态和动态多态
	2.静态多态:函数重载和运算符重载属于静态多态，复用函数名
	3.动态多态:派生类和虚函数实现运行时多态
	4.静态多态的函数地址早绑定，编译阶段确定函数地址
	5.动态多态的函数地址晚绑定，运行阶段确定函数地址
	6.动态多态满足条件
		1.有继承关系
		2.子类重写父类的虚函数
	7.重写: 函数返回值类型 函数名 参数列表 完全相同
	8.动态多态使用:父类的指针或者引用 指向子类对象
*/

//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//
////在编译阶段确定函数地址，地址早绑定
////如果想执行子类成员函数，这个函数地址不能提前绑定，需要在运行时绑定函数地址，地址晚绑定
//void doSpeak(Animal &animal)         //Animal &animal = cat        父类引用指向子类对象
//{
//	animal.speak();
//}
//
//void test1()
//{
//
//	Animal animal;
//
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//
//	
//}
//
//int main()
//{
//	test1();
//	return 0;
//}