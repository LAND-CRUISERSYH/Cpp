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
	cout << "Ա�����: " << m_Id << "\tԱ������: " << m_Name << "\tԱ����λ: " << getDeptName() << "\tԱ��ְ��: " << "����˾��������" << endl;
}

string boss::getDeptName()
{
	return string("�ϰ�");
}

