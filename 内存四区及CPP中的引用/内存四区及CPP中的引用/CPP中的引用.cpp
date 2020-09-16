#include<iostream>

using namespace std;

/*
	1.���ñ����ʼ��
	2.�����ڳ�ʼ���󣬲����Ըı�
	3.��������ʱ�������������õļ������β�����ʵ��(���Լ�ָ���޸�ʵ��)
	4.��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	5.���õı�����c++�ڲ�ʵ����һ��ָ�볣��
	6.����������Ҫ���������βΣ���ֹ�����
*/

//��������
//1.ֵ����
void swap_1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//ַ����
void swap_2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void swap_3(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int& test1()
{
	int a = 10;
	return a;
}

int& test02()
{
	static int x = 10;
	return x;
}

int main()
{
	int a = 10;
	int &b = a;
	//int &c;              //���ñ����ʼ��
	cout << a << endl;
	cout << b << endl;

	b = 20;
	int c = 30;
	b = c;                      //��ֵ����
	cout << a << endl;
	cout << b << endl;
	cout << "-------------------------------------" << endl;

	cout << "ֵ����" << endl;
	int i = 3, j = 5;
	cout << "i=" << i << ",j=" << j << endl;
	swap_1(i, j);
	cout << "i=" << i << ",j=" << j << endl;

	cout << "ַ����" << endl;
	cout << "i=" << i << ",j=" << j << endl;
	swap_2(&i, &j);
	cout << "i=" << i << ",j=" << j << endl;

	cout << "���ô���" << endl;
	cout << "i=" << i << ",j=" << j << endl;
	swap_3(i, j);
	cout << "i=" << i << ",j=" << j << endl;
	system("cls");
	
	int &num1 = test1();
	cout << num1 << endl;                           //��һ�ν����ȷ������Ϊ���������˱���
	//cout << num1 << endl;                           //�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�

	int &num2 = test02();
	cout << num2 << endl;
	cout << num2 << endl;

	test02() = 500;
	cout << num2 << endl;
	cout << num2 << endl;
	return 0;
}