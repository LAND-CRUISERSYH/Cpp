#include<iostream>

using namespace std;

/*
	1.�ڴ�������Ϊ����������ȫ������������ջ��
	2.�������������ǹ�����ֻ����
	3.ȫ����:ȫ�ֱ�������̬�����ͳ���(constȫ�ֱ������ַ�������)
	4.ջ�������ɱ����������ͷţ���ź����Ĳ����;ֲ�������
	5.���������ɳ���Ա�����ͷţ������ͷţ��������ʱ�ɲ���ϵͳ����
*/

//ȫ�ֱ���
int c = 10;
int d = 10;

//constȫ�ֱ���
int g = 10;
int h = 10;

int *func()
{
	int *a = new int(10);
	return a;
}

void test()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;

	//cout << *p << endl;                 //�ڴ��Ѿ��ͷţ��ٴη��ʻᱨ��
}
/*int main()
{
	//�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�������ַ" << endl;
	cout << (int)&a << endl;
	cout << (int)&b << endl;

	cout << "ȫ�ֱ�����ַ" << endl;
	cout << (int)&c << endl;
	cout << (int)&d << endl;

	//��̬����
	static int e = 10;
	static int f = 10;
	cout << "��̬������ַ" << endl;
	cout << (int)&e << endl;
	cout << (int)&f << endl;

	cout << "constȫ�ֱ�����ַ" << endl;
	cout << (int)&g << endl;
	cout << (int)&h << endl;

	cout << "�ַ���������ַ" << endl;
	cout << (int)&"hello world" << endl;

	//const�ֲ�����
	const int i = 10;
	const int j = 10;
	cout << "const�ֲ�������ַ" << endl;
	cout << (int)&i << endl;
	cout << (int)&j << endl;

	int *p = func();
	cout << *p << endl;
	cout << *p << endl;

	cout << "--------------------------------------" << endl;

	test();
	return 0;
}*/