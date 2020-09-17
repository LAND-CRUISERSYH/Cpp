#include<iostream>

using namespace std;

/*
	1.C++中拷贝构造函数调用时机通常有三种情况
		(1).使用一个已经创建完毕的对象来初始化一个新对象
		(2).值传递的方式给函数参数传值
		(3).以值方式返回局部对象
*/

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用!" << endl;
	}
	Person(int num)
	{
		age = num;
		cout << "有参构造函数的调用!" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person的拷贝构造函数调用!" << endl;
	}
	~Person()
	{
		cout << "析构函数的调用!" << endl;
	}

	int age;
};

void func1()
{
	Person p1(20);
	Person p2(p1);        //使用一个已经初始化完毕的对象来初始化一个新对象

	cout << p2.age << endl;
}

void doWork(Person p)
{

}

void func2()
{
	Person p;
	doWork(p);          //以值传递的方式给函数参数传值
}

Person doWork2()
{
	Person p1;
	return p1;
}

void func3()
{
	Person p = doWork2();
}

//int main()
//{
//	//func1();
//	//func2();
//	func3();
//	return 0;
//}