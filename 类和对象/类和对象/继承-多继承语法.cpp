#include<iostream>

using namespace std;

/*
	1.C++����һ����̳ж����
	2.�﷨:   class ���� : �̳з�ʽ ����1,�̳з�ʽ ����2...
	3.��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
	4.C++ʵ�ʿ����в������ö�̳�
*/

//class Base1
//{
//public:
//	Base1():m_A(100){}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2():m_A(200){}
//	int m_A;
//};
//
////�̳�Base1��Base2
//class Base :public Base1, public Base2
//{
//public:
//	Base():m_C(300),m_D(400){}
//	int m_C;
//	int m_D;
//};
//
//void test1()
//{
//	Base b;
//	cout << b.Base1::m_A << endl;
//	cout << b.Base2::m_A << endl;
//	cout << b.m_C << endl;
//	cout << b.m_D << endl;
//	cout << sizeof(b) << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}