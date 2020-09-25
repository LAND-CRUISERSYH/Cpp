#include"employee.h"
#include<iostream>
#include<string>

using namespace std;

employee::employee(int Id, string name, int Did)
{
	m_Id = Id;
	m_Name = name;
	m_DeptId = Did;
}

void employee::showInfo()
{
	cout << "员工编号: " << m_Id << "\t员工姓名: " << m_Name << "\t员工岗位: " << getDeptName() << "\t员工职责: " << "完成经理交给的任务" << endl;
}

string employee::getDeptName()
{
	return string("员工");
}
