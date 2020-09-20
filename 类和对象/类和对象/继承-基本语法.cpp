#include<iostream>

using namespace std;

/*
	1.继承的好处:减少重复代码
	2.语法: class 子类 : 继承方式 父类
	3.子类也称为派生类，父类也称为基类
	4.派生类的成员包括:基类继承过来的和自己增加的成员
*/

//class BasePage
//{
//public:
//	void header() {
//		cout << "公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部" << endl;
//	}
//	void left()
//	{
//		cout << "公共列表" << endl;
//	}
//};
//
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java页面" << endl;
//	}
//};
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python页面" << endl;
//	}
//};
//
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP页面" << endl;
//	}
//};
//
//void test1()
//{
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}