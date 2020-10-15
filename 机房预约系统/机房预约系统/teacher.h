#pragma once
#include"identity.h"

//老师类
class Teacher :public Identity
{
public:

	//默认构造
	Teacher();

	//有参构造
	Teacher(int id, string name, string pwd);

	//显示菜单
	virtual void Menu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void valiOrder();

	int m_tId;                   //教师编号
};