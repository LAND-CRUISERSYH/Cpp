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

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_sId << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();
	system("pause");
	system("cls");
}

//查看自身预约
void Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		//string 转  int
		//string 利用 .c_str() 转 const char*
		//利用atoi(const char*)转int
		if (this->m_sId == atoi(of.m_orderData[i]["stuId"].c_str()))    //找到自身预约
		{
			cout << "预约日期: 周" << of.m_orderData[i]["date"] << "  ";
			cout << "时间段: " << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午") << "  ";
			cout << "机房编号: " << of.m_orderData[i]["roomId"] << "  ";
			string status = "状态: ";
			// 1 审核中   2 已预约  -1.预约失败   0 取消预约
			if (of.m_orderData[i]["status"] == "1")
				status += "审核中";
			else if (of.m_orderData[i]["status"] == "2")
				status += "预约成功";
			else if (of.m_orderData[i]["status"] == "-1")
				status += "预约失败,审核未通过";
			else {
				status += "取消预约";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

//查看所有预约
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "         ";
		cout << "预约日期: 周" << of.m_orderData[i]["date"] << "  ";
		cout << "时间段: " << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午") << "  ";
		cout << "学生学号: " << of.m_orderData[i]["stuId"] << " ";
		cout << "学生姓名: " << of.m_orderData[i]["stuName"] << " ";

		cout << "机房编号: " << of.m_orderData[i]["roomId"] << "  ";
		string status = "状态: ";
		// 1 审核中   2 已预约  -1.预约失败   0 取消预约
		if (of.m_orderData[i]["status"] == "1")
			status += "审核中";
		else if (of.m_orderData[i]["status"] == "2")
			status += "预约成功";
		else if (of.m_orderData[i]["status"] == "-1")
			status += "预约失败,审核未通过";
		else {
			status += "取消预约";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}


//取消预约
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录!" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "审核中或预约成功的记录可以取消，请输入取消的记录" << endl;
	int index = 1;
	vector<int> v;              //存放在最大容器中的下标编号
	for (int i = 0; i < of.m_Size; i++)
	{
		//先判断是自身学号
		if (m_sId == atoi(of.m_orderData[i]["stuId"].c_str()))
		{
			//在筛选状态
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "     ";
				cout << "预约日期: 周" << of.m_orderData[i]["date"] << "  ";
				cout << "时间段: " << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午") << "  ";
				cout << "机房编号: " << of.m_orderData[i]["roomId"] << " ";
				string status = "状态";
				if (of.m_orderData[i]["status"] == "1")
					status += "审核中";
				else if (of.m_orderData[i]["status"] == "2")
					status += "预约成功";
				cout << status << endl;
			}
		}
	}
	vector<int>::size_type select = 0;
	while (true)
	{
		cout << "请输入取消的记录(0代表返回): ";
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
				break;
			else
			{
				of.m_orderData[v[select - 1]]["status"] = "0";
				of.updateOrder();
				cout << "取消成功!" << endl;
				break;
			}
		}
		cout << "输入有误，请重新输入!" << endl;
	}
	system("pause");
	system("cls");
}