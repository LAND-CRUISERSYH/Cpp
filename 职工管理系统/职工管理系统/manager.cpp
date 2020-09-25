#include"manager.h"
#include<string>
#include<iostream>

using namespace std;

manager::manager(int Id, string name, int Did)
{
	m_Id = Id;
	m_Name = name;
	m_DeptId = Did;
}

void manager::showInfo()
{
	cout << "员工编号: " << m_Id << "\t员工姓名: " << m_Name << "\t员工岗位: " << getDeptName() << "\t员工职责: " << "完成老板交给的任务，并下发任务给员工" << endl;
}

string manager::getDeptName()
{
	return string("经理");
}
