#include<iostream>
#include<string>

using namespace std;

/*
	1.��̬���ŵ�: ������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
*/

//��ͨд��
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//			return m_A + m_B;
//		else if (oper == "-")
//			return m_A - m_B;
//		else if(oper == "*")
//			return m_A * m_B;
//		//�������չ�µĹ��ܣ������޸�Դ��
//		//����ʵ�������ᳫ����ԭ��
//		//����ԭ��:����չ���п��ţ����޸Ľ��йر�
//	}
//	int m_A;             //������1
//	int m_B;			//������2
//};
//
//void test1()
//{
//	Calculator C;            //��������������
//	C.m_A = 10;
//	C.m_B = 10;
//	cout << C.m_A << "+" << C.m_B << "=" << C.getResult("+") << endl;
//	cout << C.m_A << "-" << C.m_B << "=" << C.getResult("-") << endl;
//	cout << C.m_A << "*" << C.m_B << "=" << C.getResult("*") << endl;
//}
//
////���ö�̬ʵ�ּ�����
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult() { return 0; }
//	int m_A;
//	int m_B;
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_A + m_B;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_A - m_B;
//	}
//};
//
//
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_A * m_B;
//	}
//};
//
//void test2()
//{
//	//�ӷ�����
//	AbstractCalculator *Abs = new AddCalculator;
//	Abs->m_A = 100;
//	Abs->m_B = 100;
//	cout << Abs->m_A << "+" << Abs->m_B << "=" << Abs->getResult() << endl;
//	delete Abs;
//
//	//��������
//	Abs = new SubCalculator;
//	Abs->m_A = 100;
//	Abs->m_B = 100;
//	cout << Abs->m_A << "-" << Abs->m_B << "=" << Abs->getResult() << endl;
//	delete Abs;
//
//	//�˷�����
//	Abs = new MulCalculator;
//	Abs->m_A = 100;
//	Abs->m_B = 100;
//	cout << Abs->m_A << "*" << Abs->m_B << "=" << Abs->getResult() << endl;
//	delete Abs;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}