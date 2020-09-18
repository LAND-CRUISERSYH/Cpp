#include<iostream>
#include<string>

using namespace std;

/*
	1.友元的目的就是让一个函数或者类访问另一个类中私有成员
	2.友元的关键字: friend
	3.友元的三种实现
		全局函数做友元
		类做友元
		成员函数做友元
*/

//class Building
//{
//	//GoodGay全局函数是类的友元，可以访问类的私有成员
//	friend void GoodGay(Building &b);
//public:
//	Building():m_SettingRoom("客厅"),m_BedRoom("卧室"){}
//	string m_SettingRoom;             //客厅
//private:
//	string m_BedRoom;				//卧室
//};
//
//void GoodGay(Building &b)
//{
//	cout << "好朋友的全局函数" << endl;
//	cout << b.m_SettingRoom << endl;
//	cout << b.m_BedRoom << endl;
//}
//
//void test1()
//{
//	Building B;
//	GoodGay(B);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}