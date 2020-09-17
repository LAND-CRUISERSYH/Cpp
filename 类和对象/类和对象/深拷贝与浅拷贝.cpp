#include<iostream>

using namespace std;

/*
	1.浅拷贝:简单的赋值拷贝操作(堆区的内存重复释放)
	2.深拷贝:在堆区重新申请空间，进行拷贝操作(自己实现)
*/

//class Man
//{
//public:
//	Man()
//	{
//		cout << "默认构造函数调用!" << endl;
//	}
//	Man(int num,int height)
//	{
//		age = num;
//		p = new int(height);
//		cout << "有参构造函数调用!" << endl;
//	}
//	Man(const Man &m)
//	{
//		cout << "拷贝构造函数!" << endl;
//		age = m.age;
//		p = new int(*m.p);
//	}
//	~Man()
//	{
//		if (p != NULL)
//		{
//			delete p;
//			p = NULL;
//		}
//		cout << "析构函数调用!" << endl;
//	}
//
//	int age;
//	int *p;
//};
//
//void test1()
//{
//	Man p1(18,188);
//	cout << p1.age << endl;
//	cout << *p1.p << endl;
//
//	Man p2(p1);
//	cout << p2.age << endl;
//	cout << *p2.p << endl;
//}

//int main()
//{
//	test1();
//	return 0;
//}