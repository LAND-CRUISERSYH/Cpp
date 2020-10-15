#include<iostream>
using namespace std;
#include"identity.h"
#include<fstream>
#include<string>
#include"globalFile.h"
#include"student.h"
#include"manager.h"
#include"teacher.h"

void show_Menu()                    //页面主菜单
{
	cout << "****************欢迎来到机房预约系统******************" << endl;
	cout << "************         1.   学生          **************" << endl;
	cout << "************         2.   老师          **************" << endl;
	cout << "************         3.   管理员        **************" << endl;
	cout << "************         0.   退出系统      **************" << endl;
	cout << "******************************************************" << endl;
	cout << "请输入您的选择: ";	
}

//登录功能         参数1  操作文件名    参数2   操作身份类型
void LoginIn(string fileName, int type)
{
	//父类指针   用于指向子类对象
	Identity *person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在!" << endl;
		ifs.close();
		return;
	}

	//准备接收用户信息
	int id = 0;
	string name;
	string pwd;

	//判断登录身份
	if (type == 1)
	{
		cout << "请输入学号: ";
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入职工号: ";
		cin >> id;
	}

	cout << "请输入用户名: ";
	cin >> name;
	cout << "请输入密码: ";
	cin >> pwd;

	if (type == 1)
	{
		//学生登录验证
		int fid;            //从文件中读取的id号
		string fname;		//从文件中读取的姓名
		string fpwd;		//从文件中读取的密码
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "学生身份验证成功!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入学生身份子菜单
				return;
			}
		}
	}
	else if (type == 2)
	{
		//教师登录验证
		int fid;                 //从文件中读取的id号
		string fname;				//从文件中读取的姓名
		string fpwd;				//从文件中读取的密码
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "教师身份验证成功!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师身份子菜单
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员登录验证
		string fname;				//从文件中读取的姓名
		string fpwd;				//从文件中读取的密码
		while (ifs >> fname && ifs >> fpwd)
		{
			if (fname == name && fpwd == pwd)
			{
				cout << "管理员身份验证成功!" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//进入管理员身份子菜单
				return;
			}
		}
	}
	cout << "验证登录失败!" << endl;
	system("pause");
	system("cls");
	return;
}

int main()
{
	int select = 0;              //用于接收用户输入
	while (true)
	{
		show_Menu();
		if (cin >> select)               //接收用户输入并判断是否正确
		{
			switch (select)
			{
			case 1:                        //学生身份
				LoginIn(STUDENT_FILE, 1);
				break;
			case 2:                       //老师身份
				LoginIn(TEACHER_FILE, 2);
				break;
			case 3:                        //管理员身份
				LoginIn(ADMIN_FILE, 3);
				break;
			case 0:                      //退出系统
				cout << "欢迎下次使用!" << endl;
				system("pause");
				return 0;
			default:
				cout << "输入错误，请重新输入!" << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		else
		{
			cin.clear();
			cin.ignore(INT_MAX,'\n');                //清空输入缓冲区
			cout << "输入错误，请重新输入!" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}