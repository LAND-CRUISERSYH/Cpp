#include<iostream>

using namespace std;

/*
	//������Ʒ�Ĵ�������Ϊ:��ˮ--����--���뱭��--���븨��
	//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
*/

//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething() = 0;
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee:public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "����ɱ���" << endl;
//	}
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "����" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "������ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���벣������" << endl;
//	}
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����" << endl;
//	}
//};
//
//void test1()
//{
//	AbstractDrinking *Abs = new Coffee;
//	Abs->makeDrink();
//	delete Abs;
//
//	cout << "-----------------------" << endl;
//
//	Abs = new Tea;
//	Abs->makeDrink();
//	delete Abs;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}