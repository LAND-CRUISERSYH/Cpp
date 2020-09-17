#include<iostream>

using namespace std;

/*
	1.两种分类方式
		(1).按参数分为:有参构造和无参构造(默认构造)
		(2).按类型分为:普通构造和拷贝构造(不要利用拷贝构造函数初始化匿名对象)
	2.三种调用方式
		(1).括号法
		(2).显示法
		(3).隐式转换法
*/

class Person
{
public:
	Person() 
	{ 
		cout << "无参构造函数的调用!" << endl;					 //无参构造函数
	}            
	Person(int a) 
	{
		age = a;
		cout << "有参构造函数的调用!" << endl;                  //有参构造函数
	}		
	Person(const Person &p)                                    //拷贝构造函数
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}
	~Person() 
	{ 
		cout << "析构函数的调用!" << endl; 
	}

	int age;
};

void func()
{
	//Person p;            //默认构造函数的调用
	//Person p1(10);      //有参构造函数
	//Person p2(p1);      //拷贝构造函数

	//cout << p1.age << endl;
	//cout << p2.age << endl;

	Person p1;
	Person p2 = Person(10);        //有参构造(等号右边为匿名对象:当当前行执行结束后，系统会立即回收掉匿名对象)
	Person p3 = Person(p2);         //拷贝构造

	Person p4 = 10;         //相当于Person p4 = Person(10);
}

//int main()
//{
//	func();
//	return 0;
//}