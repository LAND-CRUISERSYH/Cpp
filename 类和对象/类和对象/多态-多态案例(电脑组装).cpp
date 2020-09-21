#include<iostream>

using namespace std;

/*
	1.电脑主要组成部件为CPU(用于计算)、显卡(用于显示)、内存条(用于存储)
	2.将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Inter厂商和Lenovo厂商
	3.创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
*/

//抽象不同零件类
//抽象CPU类
//class CPU
//{
//public:
//	//抽象的计算函数
//	virtual void calculte() = 0;
//};
//
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象的显示函数
//	virtual void display() = 0;
//};
//
////抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public:
//	Computer(CPU *c,VideoCard *v,Memory *m):cpu(c),vc(v),mem(m){}
//	//提供工作函数
//	void work()
//	{
//		cpu->calculte();
//		vc->display();
//		mem->storage();
//	}
//	~Computer()
//	{
//		if (cpu != NULL)
//		{
//			delete cpu;
//			cpu = NULL;
//		}
//		if (vc != NULL)
//		{
//			delete vc;
//			vc = NULL;
//		}
//		if (mem != NULL)
//		{
//			delete mem;
//			mem = NULL;
//		}
//	}
//private:
//	CPU *cpu;          //CPU的零件指针
//	VideoCard *vc;		//显卡的零件指针
//	Memory *mem;		//内存条的零件指针
//};
//
////Inter厂商
//class InterCPU :public CPU
//{
//public:
//	virtual void calculte()
//	{
//		cout << "Inter的CPU开始计算了" << endl;
//	}
//};
//class InterVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Inter的显卡开始显示了" << endl;
//	}
//};
//class InterMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Inter的内存条开始存储了" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculte()
//	{
//		cout << "Lenovo的CPU开始计算了" << endl;
//	}
//};
//class LenovoVidepCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的显卡开始显示了" << endl;
//	}
//};
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存条开始存储了" << endl;
//	}
//};
//
//void test1()
//{
//	//第一条电脑零件
//	CPU *intelCpu = new InterCPU;
//	VideoCard *intelVc = new InterVideoCard;
//	Memory *intelMem = new InterMemory;
//	//第一台电脑
//	cout << "第一台电脑" << endl;
//	Computer *c1 = new Computer(intelCpu, intelVc, intelMem);
//	c1->work();
//	delete c1;
//	cout << "--------------------------" << endl;
//
//	cout << "第二台电脑" << endl;
//	//第二台电脑
//	Computer *c2 = new Computer(new LenovoCPU, new LenovoVidepCard, new LenovoMemory);
//	c2->work();
//	delete c2;
//	cout << "--------------------------" << endl;
//
//	cout << "第三台电脑" << endl;
//	//第三台电脑
//	Computer *c3 = new Computer(new InterCPU, new LenovoVidepCard, new InterMemory);
//	c3->work();
//	delete c3;
//	cout << "--------------------------" << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}