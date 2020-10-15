#pragma once
#include"identity.h"
#include<string>
#include<vector>
#include"computerRoom.h"
#include<fstream>
#include"globalFile.h"
#include"orderFile.h"

//学生类
class Student :public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int id, string name, string pwd);

	//显示菜单
	virtual void Menu();

	//申请预约
	void ApplyOrder();

	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();


	int m_sId;               //学号

	//机房容器
	vector<ComputerRoom> vCom;
};