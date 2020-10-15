#include"manager.h"

//默认构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string name, string pwd)
{
	//初始化管理员信息
	m_Name = name;
	m_pwd = pwd;
	   
	//初始化容器   获取文件中老师和学生的信息
	this->initVector();

	//初始化机房信息
	this->initRoom();
}

//显示菜单
void Manager::Menu()
{
	cout << "************       欢迎管理员: " << this->m_Name << "    *************" << endl;
	cout << "************        1.   添加账号       *************" << endl;
	cout << "************        2.   查看账号       *************" << endl;
	cout << "************        3.   查看机房       *************" << endl;
	cout << "************        4.   清空预约       *************" << endl;
	cout << "************        0.   注销登录       *************" << endl;
	cout << "******************************************************" << endl;
	cout << "请输入您的选择: ";
}

//添加账号
void Manager::addPerson()
{
	cout << "请输入添加类型(1.学生    2.老师): ";
	string fileName;            //操作文件名
	string tip;                 //提示ID号
	string errorTip;            //重复错误提示

	ofstream ofs;               //文件操作对象
	int select = 0;               //用于接收用户输入
	cin >> select;
	if (select == 1)               //添加学生
	{
		fileName = STUDENT_FILE;
		tip = "请输入学号: ";
		errorTip = "学号输入重复，请重新输入!";
	}
	else                            //添加教师
	{
		fileName = TEACHER_FILE;
		tip = "请输入教师编号: ";
		errorTip = "教师编号输入重复，请重新输入!";
	}

	int id;           //学号或职工编号
	string name;			//姓名
	string pwd;				//密码

	while (true)
	{
		cout << tip;
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)       //有重复
			cout << errorTip << endl;
		else
			break;
	}
	cout << "请输入姓名: ";
	cin >> name;
	cout << "请输入密码: ";
	cin >> pwd;

	ofs.open(fileName, ios::out | ios::app);           //利用追加的方式写文件
	ofs << id << " " << name << " " << pwd << " " << endl;       //向文件中添加数据

	ofs.close();
	cout << "添加成功!" << endl;

	system("pause");
	system("cls");

	//调用初始化容器结构，重新获取文件中数据
	this->initVector();
	return;
}

void printStudent(Student &s)
{
	cout << "学号: " << s.m_sId << "    姓名: " << s.m_Name << "    密码: " << s.m_pwd << endl;
}

void printTeacher(Teacher &t)
{
	cout << "教师编号: " << t.m_tId << "    姓名: " << t.m_Name << "    密码: " << t.m_pwd << endl;
}

//查看账号
void Manager::showPerson()
{
	cout << "请选择查看的内容(1.学生信息   2.老师信息):";
	int select = 0;                  //用于接收用户选择
	cin >> select;

	if (select == 1)
	{
		cout << "所有学生信息如下: " << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else
	{
		cout << "所有老师信息如下: " << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}
	system("pause");
	system("cls");
}

void printRoom(ComputerRoom &c)
{
	cout << "机房编号:  " << c.m_id << "    机房容量:  " << c.m_size << endl;
}

//查看机房信息
void Manager::showComputer()
{
	cout << "机房信息如下: " << endl;
	for_each(vCom.begin(), vCom.end(), printRoom);
	system("pause");
	system("cls");
}

//清空预约信息
void Manager::clearFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "清空成功!" << endl;
	system("pause");
	system("cls");
}

//初始化容器
void Manager::initVector()
{
	//确保容器清空状态
	vStu.clear();
	vTea.clear();
	//读取学生
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_sId&&ifs >> s.m_Name&&ifs >> s.m_pwd)
	{
		vStu.push_back(s);
	}
	ifs.close();

	//读取老师信息
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return;
	}

	Teacher t;
	while (ifs >> t.m_tId&&ifs >> t.m_Name&&ifs >> t.m_pwd)
	{
		vTea.push_back(t);
	}
	ifs.close();
}

//检测重复      参数1  检测学号或教师编号   参数2  检测类型
bool Manager::checkRepeat(int id, int type)
{ 
	if (type == 1)           //检测学生
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_sId)
				return true;
		}
	}
	else                                //检测老师
	{
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_tId)
				return true;
		}
	}
	return false;
}

//初始化机房信息
void Manager::initRoom()
{
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	ComputerRoom com;
	while (ifs >> com.m_id&&ifs >> com.m_size)
	{
		vCom.push_back(com);
	}
	ifs.close();
}