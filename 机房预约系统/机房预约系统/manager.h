#pragma once
#include"identity.h"

//管理员类
class Manager :public Identity
{
public:
	//默认构造
	Manager();

	//有参构造
	Manager(string name, string pwd);

	//显示菜单
	virtual void Menu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约信息
	void clearFile();
};