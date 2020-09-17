#include<iostream>

using namespace std;

/*
	1.默认情况下，C++编译器至少给一个类添加3个函数
		(1).默认构造函数(无参，函数体为空)
		(2).默认析构函数(无参，函数体为空)
		(3).默认拷贝构造函数，对属性进行值拷贝
	2.构造函数调用规则如下:
		(1).如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
		(2).如果用户定义拷贝构造函数，C++不会再提供其他构造函数
*/

class Person
{
public:
	/*Person()
	{
		cout << "默认构造函数调用" << endl;
	}*/
	/*Person(int num)
	{
		cout << "有参构造函数" << endl;
		age = num;
	}*/
	Person(const Person &p)
	{
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
	}

	int age;
};

//void test_1()
//{
//	Person p;
//	p.age = 18;
//
//	Person p2(p);
//
//	cout << p2.age << endl;
//}
//
//void test_2()
//{
//	Person p(28);
//	Person p2(p);
//	cout << p2.age << endl;
//}

//int main()
//{
//	//test_1();
//	test_2();
//	return 0;
//}