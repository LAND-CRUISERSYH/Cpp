#include<iostream>
#include<string>

using namespace std;

/*
	1.��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
	2.�����ʽ:�������е�����������Ϊ���������ߴ�������
	3.�������ʹ�����������
		���Խ������ָ���ͷ��������
		����Ҫ�о���ĺ���ʵ��
	4.�������ʹ�����������:
		����Ǵ����������������ڳ����࣬�޷�ʵ��������
	5.�������﷨:virtual ~����(){}
	6.���������﷨:virtual ~����()=0;
*/

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal()���캯������" << endl;
//	}
//	//���������������Խ������ָ���ͷ��������ʱ���ɾ�������
//	/*virtual ~Animal()
//	{
//		cout << "~Animal()������������" << endl;
//	}*/
//
//	//��������(��Ҫ������ʵ��)
//	//���˴�������֮�������Ҳ���ڳ����࣬����ʵ��������
//	virtual ~Animal() = 0;
//	//���麯��
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal�Ĵ���������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat()���캯������" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "è��˵��" << endl;
//	}
//	string *m_Name;
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "~Cat()������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//
//void test1()
//{
//	Animal *animal = new Cat("Tom");
//	animal->speak();
//	//����ָ��������ʱ��������������е�����������������������ж������ԣ�������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}