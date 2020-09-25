#include"boss.h"
#include<string>
#include<iostream>

using namespace std;

boss::boss(int Id, string name, int Did)
{
	m_Id = Id;
	m_Name = name;
	m_DeptId = Did;
}

void boss::showInfo()
{
	cout << "员工编号: " << m_Id << "\t员工姓名: " << m_Name << "\t员工岗位: " << getDeptName() << "\t员工职责: " << "管理公司所有事务" << endl;
}

string boss::getDeptName()
{
	return string("老板");
}

