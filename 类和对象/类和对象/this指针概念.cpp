#include<iostream>

using namespace std;

/*
	1.ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
	2.thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	3.thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
	4.thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
	5.���βκͳ�Ա����ͬ��ʱ������thisָ��������
	6.����ķǾ�̬��Ա�����з��ض�������ʹ��return *this;
*/

//class Man
//{
//public:
//	Man(int age)
//	{
//		this->age = age;         //thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	}
//
//	Man& ManAdd(const Man &m)
//	{
//		this->age += m.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test1()
//{
//	Man m1(18);
//	cout << m1.age << endl;
//}
//
//void test2()
//{
//	Man m1(10);
//	Man m2(10);
//	//��ʽ���˼��
//	m2.ManAdd(m1).ManAdd(m1).ManAdd(m1);
//	cout << m2.age << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}