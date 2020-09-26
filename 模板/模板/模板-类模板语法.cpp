#include<iostream>
#include<string>

using namespace std;

/*
	1.类模板的作用:建立一个通用类，类中的成员数据类型可以不具体指定，用一个虚拟的类型来代替
	2.语法:   template<class T>           /或者    template<typename T>   都可以
		template----声明创建模板
		typename----表明其后面的符号是一种数据类型，可以用class代替
		T-----------通用的数据类型，名称可以替换，通常为大写字母
	3.类模板和函数模板语法相似，在声明模板template后面加类，此类称为类模板
*/

//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age):m_Name(name),m_Age(age){}
//	void showPerson()
//	{
//		cout << "姓名: " << m_Name << "\t年龄: " << m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test1()
//{
//	Person<string,int> p1("Tom", 10);
//	p1.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}