#include<iostream>
#include<string>

using namespace std;

/*
	1.��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա
	2.��Ԫ�Ĺؼ���: friend
	3.��Ԫ������ʵ��
		ȫ�ֺ�������Ԫ
		������Ԫ
		��Ա��������Ԫ
*/

//class Building
//{
//	//GoodGayȫ�ֺ����������Ԫ�����Է������˽�г�Ա
//	friend void GoodGay(Building &b);
//public:
//	Building():m_SettingRoom("����"),m_BedRoom("����"){}
//	string m_SettingRoom;             //����
//private:
//	string m_BedRoom;				//����
//};
//
//void GoodGay(Building &b)
//{
//	cout << "�����ѵ�ȫ�ֺ���" << endl;
//	cout << b.m_SettingRoom << endl;
//	cout << b.m_BedRoom << endl;
//}
//
//void test1()
//{
//	Building B;
//	GoodGay(B);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}