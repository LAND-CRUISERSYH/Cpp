#include<iostream>

using namespace std;

/*
	1.C++�п������캯������ʱ��ͨ�����������
		(1).ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
		(2).ֵ���ݵķ�ʽ������������ֵ
		(3).��ֵ��ʽ���ؾֲ�����
*/

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������!" << endl;
	}
	Person(int num)
	{
		age = num;
		cout << "�вι��캯���ĵ���!" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person�Ŀ������캯������!" << endl;
	}
	~Person()
	{
		cout << "���������ĵ���!" << endl;
	}

	int age;
};

void func1()
{
	Person p1(20);
	Person p2(p1);        //ʹ��һ���Ѿ���ʼ����ϵĶ�������ʼ��һ���¶���

	cout << p2.age << endl;
}

void doWork(Person p)
{

}

void func2()
{
	Person p;
	doWork(p);          //��ֵ���ݵķ�ʽ������������ֵ
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