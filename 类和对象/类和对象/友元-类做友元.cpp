#include<iostream>
#include<string>

using namespace std;

//class Building;
//class GoodGay
//{
//public:
//	void visit();        //参观函数，访问Building中的属性
//	GoodGay();
//	Building *building;
//};
//
//class Building
//{
//	//GoodGay类是Building类的友元，可以访问本类的私有成员
//	friend class GoodGay;
//public:
//	//Building():m_SettingRoom("客厅"),m_BedRoom("卧室"){}
//	Building();
//	string m_SettingRoom;            //客厅
//private:	
//	string m_BedRoom;					//卧室
//};
//
//Building::Building()
//{
//	m_SettingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好朋友正在访问" << endl;
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