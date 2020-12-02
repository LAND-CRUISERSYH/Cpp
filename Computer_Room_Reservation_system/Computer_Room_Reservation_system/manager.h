#pragma once
#include"identity.h"
#include<string>
#include<fstream>
#include"globalFile.h"
#include<vector>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerRoom.h"

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

	//初始化容器
	void initVector();

	//初始化机房信息
	void initRoom();

	//检测重复      参数1  检测学号或教师编号   参数2  检测类型
	bool checkRepeat(int id, int type);

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	//机房容器
	vector<ComputerRoom> vCom;
};
