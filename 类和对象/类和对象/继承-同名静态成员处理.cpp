#include<iostream>

using namespace std;

/*
	1.��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
		��������ͬ����Ա    ֱ�ӷ��ʼ���
		���ʸ���ͬ����Ա    ��Ҫ��������
	2.ͬ����̬��Ա��������ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ(ͨ�������ͨ������)
*/

//class Base
//{
//public:
//	static void func()
//	{
//		cout << "�����еľ�̬��Ա����" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "�����еĴ��ξ�̬��Ա����" << endl;
//	}
//	static int m_A;
//
//};
//
//int Base::m_A = 100;
//
//class Base1 :public Base
//{
//public:
//	static void func()
//	{
//		cout << "�����еľ�̬��Ա����" << endl;
//	}
//	static int m_A;
//};
//
//int Base1::m_A = 200;
//
//void test1()
//{
//	Base1 b;
//	//1.ͨ���������
//	cout << b.m_A << endl;
//	cout << b.Base::m_A << endl;
//	//2.ͨ����������
//	cout << Base1::m_A << endl;
//	//��һ��::����ͨ��������ʽ����   �ڶ���::������ʸ�����������
//	cout << Base1::Base::m_A << endl;
//	cout << "-----------------------------------------" << endl;
//	//1.ͨ���������
//	b.func();
//	b.Base::func();
//	//2.ͨ����������
//	Base1::func();
//	Base1::Base::func();
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����(��������)
//	//�������ʸ����б����ص�ͬ����Ա����Ҫ��������
//	b.Base::func(500);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
