#include<iostream>

using namespace std;

/*
	1.��Ա�������const�����ǳ��������Ϊ������
	2.�������ڲ������޸ĳ�Ա����
	3.��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
	4.��������ǰ��const�Ƹö���Ϊ������
	5.������ֻ�ܵ��ó�����
*/

//class Man
//{
//public:
//	//thisָ��ı�����ָ�볣��(ָ���ָ���ǲ������޸ĵ�)
//	//this:Man *const this-----------const Man *const this
//	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
//	void showMan() const         //����Ա����
//	{
//		//this->age = 100;
//		num = 100;
//	}
//
//	void func(){}
//	int age;
//	mutable int num;      //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ(�ӹؼ���mutable)
//};
//
//void  test1()
//{
//	const Man m;         //�ڶ���ǰ��const����Ϊ������
//	//������ֻ�ܵ��ó�����,���ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//	m.showMan();
//}
//
//int main()
//{
//
//	return 0;
//}