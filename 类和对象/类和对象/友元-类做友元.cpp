#include<iostream>
#include<string>

using namespace std;

//class Building;
//class GoodGay
//{
//public:
//	void visit();        //�ιۺ���������Building�е�����
//	GoodGay();
//	Building *building;
//};
//
//class Building
//{
//	//GoodGay����Building�����Ԫ�����Է��ʱ����˽�г�Ա
//	friend class GoodGay;
//public:
//	//Building():m_SettingRoom("����"),m_BedRoom("����"){}
//	Building();
//	string m_SettingRoom;            //����
//private:	
//	string m_BedRoom;					//����
//};
//
//Building::Building()
//{
//	m_SettingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//�������������
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "���������ڷ���" << endl;
//	cout << building->m_SettingRoom << endl;
//	cout << building->m_BedRoom << endl;
//}
//
//void test1()
//{
//	GoodGay g;
//	g.visit();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}