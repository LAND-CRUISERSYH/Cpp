#include"student.h"

//默认构造
Student::Student()
{

}

//有参构造
Student::Student(int id, string name, string pwd)
{
	//初始化属性
	this->m_sId = id;
	this->m_Name = name;
	this->m_pwd = pwd;

	//初始化机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	
	ComputerRoom com;
	while (ifs >> com.m_id&&ifs >> com.m_size)
	{
		vCom.push_back(com);         //将读取的信息放入容器中
	}
	ifs.close();
}

//显示菜单
void Student::Menu()
{
	cout << "************        欢迎学生: " << this->m_Name << "      *************" << endl;
	cout << "************        1.   申请预约       *************" << endl;
	cout << "************        2.   查看自身预约   *************" << endl;
	cout << "************        3.   查看所有预约   *************" << endl;
	cout << "************        4.   取消预约       *************" << endl;
	cout << "************        0.   注销登录       *************" << endl;
	cout << "******************************************************" << endl;
	cout << "请输入您的选择: ";
}

//申请预约
void Student::ApplyOrder()
{
	cout << "机房开放时间为周一至周五!" << endl;
	 
	int date = 0;        //日期
	int interval = 0;		//时间段
	int room = 0;			//机房编号

	while (true)
	{
		cout << "请输入申请预约时间(1.周一  2.周二  3.周三  4.周四  5.周五): ";
		cin >> date;
		if (date >= 1 && date <= 5)
			break;
		else
			cout << "输入有误，请重新输入" << endl;
	}
	while (true)
	{
		cout << "请输入申请预约的时间段(1.上午  2.下午): ";
		cin >> interval;
		if (interval >= 1 && interval <= 2)
			break;
		else
			cout << "输入有误，请重新输入" << endl;
	}
	cout << "机房信息如下: " << endl;
	for (vector<ComputerRoom>::size_type i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_id << "号机房--" << "容量: " << vCom[i].m_size << endl;
	}
	while (true)
	{
		cout << "请选择机房: ";
		cin >> room;
		if (room >= 1 && room <= 3)
			break;
		else
			cout << "输入有误，请重新输入" << endl;
	}
	cout << "预约成功!审核中!" << endl;
	
	//将信息写入到文件中
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "日期: " << date << " ";
	ofs << "时间段: " << interval << " ";
	ofs << "学生学号: " << this->m_sId << " ";
	ofs << "学生姓名: " << this->m_Name << " ";
	ofs << "机房编号: " << room << " ";
	ofs << "审核状态: " << 1 << endl;

	ofs.close();
	system("pause");
	system("cls");
}

//查看自身预约
void Student::showMyOrder()
{

}

//查看所有预约
void Student::showAllOrder()
{

}

//取消预约
void Student::cancelOrder()
{

}