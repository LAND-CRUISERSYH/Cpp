#pragma once  //防止头文件被重复包含

#include<iostream>           //包含输入输出流头文件
#include<fstream>
#include"worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
#include"worker.h"

#define FILENAME "empFile.txt"

/*
	管理类负责的内容:
		1.与用户的沟通菜单界面
		2.对职工的增删查改操作
		3.与文件的读写交互
*/

using namespace std;                    //使用标准命名空间

class workerManager
{	
public:
	//构造函数
	workerManager();
	
	//展示菜单
	void Show_Menu();

	//退出系统
	void exitSystem();

	//添加职工
	void Add();

	//保存文件
	void save();

	//统计文件中人数
	int getEmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void show_Emp();

	//删除职工
	void Del_Emp();

	//根据编号判断职工是否存在，存在返回职工在数组中的位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找员工
	void Find_Emp();

	//排序员工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~workerManager();
	 
	int m_EmpNum;                         //记录职工人数
	worker** m_EmpArray;				//职工数组指针
	bool m_FileIsEmpty;                   //标志文件是否为空
};