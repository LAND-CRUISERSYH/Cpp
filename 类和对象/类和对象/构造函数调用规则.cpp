#include<iostream>

using namespace std;

/*
	1.Ĭ������£�C++���������ٸ�һ�������3������
		(1).Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
		(2).Ĭ����������(�޲Σ�������Ϊ��)
		(3).Ĭ�Ͽ������캯���������Խ���ֵ����
	2.���캯�����ù�������:
		(1).����û������вι��캯����C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
		(2).����û����忽�����캯����C++�������ṩ�������캯��
*/

class Person
{
public:
	/*Person()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}*/
	/*Person(int num)
	{
		cout << "�вι��캯��" << endl;
		age = num;
	}*/
	Person(const Person &p)
	{
		age = p.age;
		cout << "�������캯��" << endl;
	}
	~Person()
	{
		cout << "������������" << endl;
	}

	int age;
};

//void test_1()
//{
//	Person p;
//	p.age = 18;
//
//	Person p2(p);
//
//	cout << p2.age << endl;
//}
//
//void test_2()
//{
//	Person p(28);
//	Person p2(p);
//	cout << p2.age << endl;
//}

//int main()
//{
//	//test_1();
//	test_2();
//	return 0;
//}