#include<iostream>
#include<string>

using namespace std;

/*
	1.多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
	2.解决方式:将父类中的析构函数改为虚析构或者纯虚析构
	3.虚析构和纯虚析构共性
		可以解决父类指针释放子类对象
		都需要有具体的函数实现
	4.虚析构和纯虚析构区别:
		如果是纯虚析构，该类属于抽象类，无法实例化对象
	5.虚析构语法:virtual ~类名(){}
	6.纯虚析构语法:virtual ~类名()=0;
*/

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal()构造函数调用" << endl;
//	}
//	//利用虚析构，可以解决父类指针释放子类对象时不干净的问题
//	/*virtual ~Animal()
//	{
//		cout << "~Animal()析构函数调用" << endl;
//	}*/
//
//	//纯虚析构(需要声明和实现)
//	//有了纯虚析构之后，这个类也属于抽象类，不能实例化对象
//	virtual ~Animal() = 0;
//	//纯虚函数
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal的纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat()构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "猫在说话" << endl;
//	}
//	string *m_Name;
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "~Cat()析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//
//void test1()
//{
//	Animal *animal = new Cat("Tom");
//	animal->speak();
//	//父类指针在析构时，不会调用子类中的析构函数，导致子类如果有堆区属性，会造成内存泄漏
//	delete animal;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}