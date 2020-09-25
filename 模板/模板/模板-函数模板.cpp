#include<iostream>

using namespace std;

/*
	1.C++��һ�ֱ��˼���Ϊ���ͱ�̣���Ҫ���õļ�������ģ��
	2.C++�ṩ����ģ�����:����ģ�����ģ��
	3.����ģ������:����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������
	4.�﷨:  template<typename T>
		template----��������ģ��
		typename----���������ķ�����һ���������ͣ�������class����
		T-----------ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
	5.����ģ�����ùؼ���template
	6.ʹ�ú���ģ�������ַ�ʽ:�Զ������Ƶ�����ʽָ������
	7.ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����
	8.�Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
	9.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
*/


//�����������ͺ���
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>           //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ������
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << "\tb = " << b << endl;
	//swapInt(a, b);
	//���ú���ģ��������(���ַ�ʽ)
	//1.�Զ������Ƶ�
	//mySwap(a, b);
	//2.��ʾָ������
	mySwap<int>(a, b);
	cout << "a = " << a << "\tb = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	cout << "c = " << c << "\td = " << d << endl;
	//swaoDouble(a,b);
	cout << "c = " << c << "\td = " << d << endl;
	return 0;
}