#include<iostream>
#include<string>

using namespace std;

/*
	1.运算符重载概念:对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
	2.运算符重载也可以发生函数重载
	3.对于内置的数据类型的表达式的运算符是不可能改变的
	4.不能滥用运算符重载
	5.左移运算符重载可以输出自定义数据类型(通常不会利用成员函数来重载左移运算符)
	6.重载左移运算符配合友元可以实现输出自定义数据类型
	7.重载前置递增运算符返回引用，重载后置递增运算符返回值
	8.函数调用运算符()也可以重载
*/

//class Man
//{
//public:
//	Man():a(10),b(20){}
//	Man operator+(Man &m);           //通过成员函数重载+号
//	Man operator+(int num);
//	int a;
//	int b;
//};
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream &os, MyInterger m);
//public:
//	MyInterger():m_Num(0){}
//	MyInterger& operator++()                    //通过成员函数重载前置++运算符
//	{
//		m_Num++;
//		return *this;
//	}
//	MyInterger operator++(int)                  //通过成员函数重载后置++运算符(int 代表占位参数)
//	{
//		MyInterger temp = *this;
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//class People
//{
//public:
//	People(int age)
//	{
//		m_Age = new int(age);
//	}
//	~People()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	People& operator=(People &p)
//	{
//		//编译器提供浅拷贝
//		//m_Age = p.m_Age;
//		//应该先判断是否有属性在堆区，如果有，先释放干净，然后深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int *m_Age;
//};
//
//class Teacher
//{
//public:
//	Teacher(string name,int age):m_Name(name),m_Age(age){}
//	bool operator==(Teacher &t)                          //通过成员函数重载==运算符
//	{
//		if (m_Name == t.m_Name&&m_Age == t.m_Age)
//			return true;
//		else
//			return false;
//	}
//	bool operator!=(Teacher &t)                          //通过成员函数重载!=运算符
//	{
//		if (m_Name != t.m_Name || m_Age != t.m_Age)
//			return true;
//		else
//			false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class MyPrint
//{
//public:
//	string operator()(string s)
//	{
//		return s;
//	}
//};
//
//Man Man::operator+(Man &m)              //通过成员函数重载+号
//{
//	Man temp;
//	temp.a = this->a + m.a;
//	temp.b = this->b + m.b;
//	return temp;
//}
//
//Man Man::operator+(int num)                  //通过成员函数重载+号(与int型相加)
//{
//	Man temp;
//	temp.a = this->a + num;
//	temp.b = this->b + num;
//	return temp;
//}
//
////Man operator+(Man &m1, Man &m2)              //通过全局函数重载+号
////{
////	Man temp;
////	temp.a = m1.a + m2.a;
////	temp.b = m1.b + m2.b;
////	return temp;
////}
//
//ostream& operator<<(ostream &os, Man &m)                //通过全局函数重载左移运算符
//{
//	os << "a = " << m.a << endl;;
//	os << "b = " << m.b << endl;;
//	return os;
//}
//
//ostream& operator<<(ostream &os, MyInterger m)
//{
//	os << "m_Num = " << m.m_Num;
//	return os;
//}
//
//void test1()
//{
//	Man m1;
//	Man m2;
//	Man m3 = m1 + m2;
//	cout << m3.a << "      " << m3.b << endl;
//	Man m4 = m1 + 50;
//	cout << m4.a << "      " << m4.b << endl;
//	system("cls");
//
//
//	Man m5;
//	cout << m5 << endl;;
//	system("cls");
//
//	MyInterger M;
//	cout << M++ << endl;
//	cout << M << endl;
//	system("cls");
//
//	People p1(18);
//	People p2(20);
//	People p3(30);
//	p3 = p2 = p1;
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//	system("cls");
//
//	Teacher t1("张三", 18);
//	Teacher t2("张三", 18);
//	if (t1 == t2)
//	{
//		cout << "相等!" << endl;
//	}
//	system("cls");
//
//	MyPrint myPrint;
//	cout<<myPrint("hello world")<<endl;  //由于使用起来非常像函数调用，所以称为仿函数
//	//匿名函数对象
//	cout << MyPrint()("hello world") << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}