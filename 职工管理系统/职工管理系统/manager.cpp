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
	cout << "Ա�����: " << m_Id << "\tԱ������: " << m_Name << "\tԱ����λ: " << getDeptName() << "\tԱ��ְ��: " << "����ϰ彻�������񣬲��·������Ա��" << endl;
}

string manager::getDeptName()
{
	return string("����");
}
