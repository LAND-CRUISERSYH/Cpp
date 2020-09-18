#include<iostream>
#include<string>

using namespace std;

//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();           //让visit函数可以访问Building中私有成员
//	void visit2();			//让visit函数b不可以访问Building中私有成员
//	Building *building;
//};
//
//class Building
//{
//	//GoodGay类下的visit成员函数为本类的友元函数，可以访问本类的私有成员
//	friend void GoodGay::visit();
//public:
//	Building();
//	string m_SettingRoom;            //客厅
//private:
//	string m_BedRoom;				//卧室
//};
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//Building::Building()
//{
//	m_SettingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//void GoodGay::visit()
//{
//	cout << "好朋友正在访问" << endl;
//	cout << building->m_SettingRoom << endl;
//	cout << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "好朋友正在访问" << endl;
//	cout << building->m_SettingRoom << endl;
//	//cout << building->m_BedRoom << endl;
//}
//
//void test1()
//{
//	GoodGay g;
//	g.visit();
//	g.visit2();
//}

//int main()
//{
//	test1();
//	return 0;
//}