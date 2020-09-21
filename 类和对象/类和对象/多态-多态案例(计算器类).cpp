#include<iostream>
#include<string>

using namespace std;

/*
	1.多态的优点: 代码组织结构清晰、可读性强、利于前期和后期的扩展以及维护
*/

//普通写法
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
//		//如果想扩展新的功能，需求修改源码
//		//在真实开发中提倡开闭原则
//		//开闭原则:对扩展进行开放，对修改进行关闭
//	}
//	int m_A;             //操作数1
//	int m_B;			//操作数2
//};
//
//void test1()
//{
//	Calculator C;            //创建计算器对象
//	C.m_A = 10;
//	C.m_B = 10;
//	cout << C.m_A << "+" << C.m_B << "=" << C.getResult("+") << endl;
//	cout << C.m_A << "-" << C.m_B << "=" << C.getResult("-") << endl;
//	cout << C.m_A << "*" << C.m_B << "=" << C.getResult("*") << endl;
//}
//
////利用多态实现计算器
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//	virtual int getResult() { return 0; }
//	int m_A;
//	int m_B;
//};
//
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_A + m_B;
//	}
//};
//
////减法计算器类
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
////乘法计算器类
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
//	//加法运算
//	AbstractCalculator *Abs = new AddCalculator;
//	Abs->m_A = 100;
//	Abs->m_B = 100;
//	cout << Abs->m_A << "+" << Abs->m_B << "=" << Abs->getResult() << endl;
//	delete Abs;
//
//	//减法运算
//	Abs = new SubCalculator;
//	Abs->m_A = 100;
//	Abs->m_B = 100;
//	cout << Abs->m_A << "-" << Abs->m_B << "=" << Abs->getResult() << endl;
//	delete Abs;
//
//	//乘法运算
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