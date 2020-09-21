#include<iostream>

using namespace std;

/*
	//制作饮品的大致流程为:煮水--冲泡--倒入杯中--加入辅料
	//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
*/

//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee:public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入瓷杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加糖" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮自来水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入玻璃杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加枸杞" << endl;
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