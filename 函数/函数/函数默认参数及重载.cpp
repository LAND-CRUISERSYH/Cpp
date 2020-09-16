#include<iostream>

using namespace std;

/*
	1.��C++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��(func1())
	2.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
	3.�������������Ĭ�ϲ����������Ķ���Ͳ�����Ĭ�ϲ���(func2())----�����Ͷ���ֻ��һ����Ĭ�ϲ���
	4.C++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��(ռλ������������Ĭ�ϲ���func3())
	5.����������������:ͬһ���������¡�����������ͬ�������������ͻ��߸�������˳��ͬ
	6.ע��:�����ķ���ֵ��������Ϊ�������ص�����
*/

//Ĭ�ϲ���

int func1(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b)
{
	return a * b;
}

void func3(int, int=10)
{
	cout <<__FILE__ << endl;
}

void func()
{
	cout << "func()�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int)�ĵ���!" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}

void func(int a, double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}

void func4(int &a)
{
	cout << "func4(int &a)�ĵ���" << endl;
}

void func4(const int &a)
{
	cout << "func4(const int &a)�ĵ���" << endl;
}

int main()
{
	cout << func1(10,30) << endl;

	cout << func2(50, 20) << endl;
	
	func3(10, 10);

	func(5.20);

	func(3, 5.20);
	func(5.20, 3);

	int a = 10;
	func4(a);
	func4(10);

	return 0;
}