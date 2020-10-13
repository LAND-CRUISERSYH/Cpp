#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<map>

using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2
/*
	案例描述:
		1.公司今天招聘了10个员工(ABCDEFGHIJ),10名员工进入公司之后，需要指派员工在哪个部门工作
		2.员工信息有:姓名、工资组成  部门分为: 策划、美术、研发
		3.随机给10名员工分配部门和工资
		4.通过multimap进行信息的插入、key(部门编号) value(员工)
		5.分部门显示员工信息
	实现步骤:
		1.创建10名员工，放到vector中
		2.遍历vector容器，取出每个员工，进行随机分组
		3.分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
		4.分部门显示员工信息
*/

//class Person
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createPerson(vector<Person> &v)
//{
//	string TempName = "ABCDEFGHIJ";
//	for (vector<int>::size_type i = 0; i < 10; i++)
//	{
//		Person p;
//		p.m_Name = "员工";
//		p.m_Name += TempName[i];
//		p.m_Salary = rand() % 10000 + 10000;                //10000~19999
//		v.push_back(p);                    //添加员工
//	}
//}
//
//void setGroup(vector<Person> &v, multimap<int, Person> &m)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int tempID = rand() % 3;           //0 1 2
//		//将员工插入到分组中
//		m.insert(make_pair(tempID, (*it)));
//	}
//}
//
//void showPersonByGroup(multimap<int, Person> &m)
//{
//	cout << "策划部门: " << endl;
//	multimap<int, Person>::iterator pos = m.find(CEHUA);
//	int num = m.count(CEHUA);
//	int index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------------------"<<endl;
//	cout << "美术部门: " << endl;
//	pos = m.find(MEISHU);
//	num = m.count(MEISHU);
//	index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------------------" << endl;
//	cout << "研发部门: " << endl;
//	pos = m.find(YANFA);
//	num = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_Salary << endl;
//	}
//}
//
//int main()
//{
//	srand((int)time(NULL));
//	//创建员工
//	vector<Person> vPerson;
//	createPerson(vPerson);
//	
//	//员工分组
//	multimap<int, Person> mPerson;
//	setGroup(vPerson,mPerson);
//
//	//分部门显示员工信息
//	showPersonByGroup(mPerson);
//
//	/*for (vector<Person>::iterator it = vPerson.begin(); it != vPerson.end(); it++)
//	{
//		cout << "姓名: " << it->m_Name << " 工资: " << it->m_Salary << endl;
//	}
//	cout << endl;
//	*/
//
//	return 0;
//}