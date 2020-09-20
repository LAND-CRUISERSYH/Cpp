#include<iostream>

using namespace std;

/*
	1.继承方式一共有三种:公共继承、保护继承和私有继承
*/

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Base1:public Base
//{
//public:
//	void func()
//	{
//		m_A = 10;              //父类中的公共权限成员，到子类中依然是公共权限成员
//		m_B = 20;              //父类中的保护权限成员，到子类中依然是保护权限成员
//		//m_C = 30;            //父类中的私有权限成员，子类访问不到
//	}
//};
//
//class Base2 :protected Base
//{
//public:
//	void func()
//	{ 
//		m_A = 100;                      //父类中的公共权限成员，到子类中为保护权限成员
//		m_B = 100;						//父类中的保护权限成员，到子类中为保护权限成员
//		//m_C = 100;                       //父类中私有成员，子类访问不到
//	}
//};
//
//class Base3 :private Base
//{
//public:
//	void func()
//	{
//		m_A = 100;                      //父类中的公共权限成员，到子类中为私有权限成员
//		m_B = 100;						//父类中的保护权限成员，到子类中为私有权限成员
//		//m_C = 100;                       //父类中私有成员，子类访问不到
//	}
//};
//
//class Base33 :public Base3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;                      //证实Base3中的成员为私有成员
//	}
//};
//
//void test1()
//{
//	Base1 b1;
//	b1.m_A = 100;
//	//b1.m_B = 100;              //到子类中依然为保护权限成员，类外不可访问
//
//	Base2 b2;
//	//b2.m_A = 100;                 //到子类中变为保护权限，类外不可访问
//
//	Base3 b3;
//	//b3.m_A = 100;                     //到子类中变为私有权限成员，类外不可访问
//}
//
//int main()
//{
//
//	return 0;
//}