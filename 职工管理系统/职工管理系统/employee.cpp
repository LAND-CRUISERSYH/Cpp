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
	cout << "Ա�����: " << m_Id << "\tԱ������: " << m_Name << "\tԱ����λ: " << getDeptName() << "\tԱ��ְ��: " << "��ɾ�����������" << endl;
}

string employee::getDeptName()
{
	return string("Ա��");
}
