#include<iostream>

using namespace std;

/*
	1.����������̳�ͬһ������
	2.����ĳ����ͬʱ�̳�������������
	3.���μ̳е������������ݣ���Դ�˷�
	4.������̳н�����μ̳�����(�ڼ̳�֮ǰ���Ϲؼ���virtual)
	5.���Ϲؼ���virtual,�����Ϊ����࣬�̳������ָ��(vbptr),�����ָ��ָ��������(vbtable),���������ݵ�ƫ����
*/

//class Base            //�����
//{
//public:
//	int m_Age;
//protected:
//
//private:
//
//};
//
//class Base1 :virtual public Base
//{
//public:
//
//protected:
//
//private:
//
//};
//
//class Base2 :virtual public Base//���������ָ�붼ָ��һ���������������ݱ��һ��
//{
//public:
//
//protected:
//
//private:
//
//};
//
//class Base12 :public Base1, public Base2
//{
//public:
//
//protected:
//
//private:
//
//};
//
//void test1()
//{
//	Base12 b;
//	b.Base1::m_Age = 18;
//	b.Base2::m_Age = 20;
//	//���������μ̳У�����������ӵ����ͬ�����ݣ���Ҫ������������
//	cout << b.Base1::m_Age << endl;
//	cout << b.Base2::m_Age << endl;
//	cout << b.m_Age << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}