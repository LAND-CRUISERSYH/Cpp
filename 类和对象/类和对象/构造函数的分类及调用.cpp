#include<iostream>

using namespace std;

/*
	1.���ַ��෽ʽ
		(1).��������Ϊ:�вι�����޲ι���(Ĭ�Ϲ���)
		(2).�����ͷ�Ϊ:��ͨ����Ϳ�������(��Ҫ���ÿ������캯����ʼ����������)
	2.���ֵ��÷�ʽ
		(1).���ŷ�
		(2).��ʾ��
		(3).��ʽת����
*/

class Person
{
public:
	Person() 
	{ 
		cout << "�޲ι��캯���ĵ���!" << endl;					 //�޲ι��캯��
	}            
	Person(int a) 
	{
		age = a;
		cout << "�вι��캯���ĵ���!" << endl;                  //�вι��캯��
	}		
	Person(const Person &p)                                    //�������캯��
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}
	~Person() 
	{ 
		cout << "���������ĵ���!" << endl; 
	}

	int age;
};

void func()
{
	//Person p;            //Ĭ�Ϲ��캯���ĵ���
	//Person p1(10);      //�вι��캯��
	//Person p2(p1);      //�������캯��

	//cout << p1.age << endl;
	//cout << p2.age << endl;

	Person p1;
	Person p2 = Person(10);        //�вι���(�Ⱥ��ұ�Ϊ��������:����ǰ��ִ�н�����ϵͳ���������յ���������)
	Person p3 = Person(p2);         //��������

	Person p4 = 10;         //�൱��Person p4 = Person(10);
}

//int main()
//{
//	func();
//	return 0;
//}