#include<iostream>

using namespace std;

/*
	1.������Ҫ��ɲ���ΪCPU(���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
	2.��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Inter���̺�Lenovo����
	3.�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
*/

//����ͬ�����
//����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculte() = 0;
//};
//
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
//
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};
//
////������
//class Computer
//{
//public:
//	Computer(CPU *c,VideoCard *v,Memory *m):cpu(c),vc(v),mem(m){}
//	//�ṩ��������
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
//	CPU *cpu;          //CPU�����ָ��
//	VideoCard *vc;		//�Կ������ָ��
//	Memory *mem;		//�ڴ��������ָ��
//};
//
////Inter����
//class InterCPU :public CPU
//{
//public:
//	virtual void calculte()
//	{
//		cout << "Inter��CPU��ʼ������" << endl;
//	}
//};
//class InterVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Inter���Կ���ʼ��ʾ��" << endl;
//	}
//};
//class InterMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Inter���ڴ�����ʼ�洢��" << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculte()
//	{
//		cout << "Lenovo��CPU��ʼ������" << endl;
//	}
//};
//class LenovoVidepCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
//	}
//};
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//void test1()
//{
//	//��һ���������
//	CPU *intelCpu = new InterCPU;
//	VideoCard *intelVc = new InterVideoCard;
//	Memory *intelMem = new InterMemory;
//	//��һ̨����
//	cout << "��һ̨����" << endl;
//	Computer *c1 = new Computer(intelCpu, intelVc, intelMem);
//	c1->work();
//	delete c1;
//	cout << "--------------------------" << endl;
//
//	cout << "�ڶ�̨����" << endl;
//	//�ڶ�̨����
//	Computer *c2 = new Computer(new LenovoCPU, new LenovoVidepCard, new LenovoMemory);
//	c2->work();
//	delete c2;
//	cout << "--------------------------" << endl;
//
//	cout << "����̨����" << endl;
//	//����̨����
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