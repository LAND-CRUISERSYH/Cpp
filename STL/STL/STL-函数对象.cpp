#include<iostream>
#include<string>

using namespace std;

/*
	1.���غ������ò��������࣬����󳣳�Ϊ��������
	2.��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
	3.��������(�º�����һ����)������һ������
	4.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
	5.�������󳬳���ͨ�����ĸ����������������Լ���״̬
	6.�������������Ϊ��������
*/

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint() :count(0) {};
//	void operator()(string text)
//	{
//		cout << text << endl;
//		count++;
//	}
//	int count;                  //�ڲ��Լ�״̬
//};
//
//void doPrint(MyPrint &mp, string text)
//{
//	mp(text);
//}
//
//void test1()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << myPrint.count << endl;
//
//	doPrint(myPrint, "hello C++");
//}
//
//int main()
//{
//	test1();
//	return 0;
//}