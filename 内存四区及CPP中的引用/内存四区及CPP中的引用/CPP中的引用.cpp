#include<iostream>

using namespace std;

/*
	1.引用必须初始化
	2.引用在初始化后，不可以改变
	3.函数传参时，可以利用引用的技术让形参修饰实参(可以简化指针修改实参)
	4.如果函数的返回值是引用，这个函数调用可以作为左值
	5.引用的本质在c++内部实现是一个指针常量
	6.常量引用主要用来修饰形参，防止误操作
*/

//交换函数
//1.值传递
void swap_1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//址传递
void swap_2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void swap_3(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int& test1()
{
	int a = 10;
	return a;
}

int& test02()
{
	static int x = 10;
	return x;
}

int main()
{
	int a = 10;
	int &b = a;
	//int &c;              //引用必须初始化
	cout << a << endl;
	cout << b << endl;

	b = 20;
	int c = 30;
	b = c;                      //赋值操作
	cout << a << endl;
	cout << b << endl;
	cout << "-------------------------------------" << endl;

	cout << "值传递" << endl;
	int i = 3, j = 5;
	cout << "i=" << i << ",j=" << j << endl;
	swap_1(i, j);
	cout << "i=" << i << ",j=" << j << endl;

	cout << "址传递" << endl;
	cout << "i=" << i << ",j=" << j << endl;
	swap_2(&i, &j);
	cout << "i=" << i << ",j=" << j << endl;

	cout << "引用传递" << endl;
	cout << "i=" << i << ",j=" << j << endl;
	swap_3(i, j);
	cout << "i=" << i << ",j=" << j << endl;
	system("cls");
	
	int &num1 = test1();
	cout << num1 << endl;                           //第一次结果正确，是因为编译器做了保留
	//cout << num1 << endl;                           //第二次结果错误，因为a的内存已经释放

	int &num2 = test02();
	cout << num2 << endl;
	cout << num2 << endl;

	test02() = 500;
	cout << num2 << endl;
	cout << num2 << endl;
	return 0;
}