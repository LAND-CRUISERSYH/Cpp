#include"workerManager.h"

//构造函数
workerManager::workerManager()
{
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);          //读文件
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		m_EmpNum = 0;                //初始化记录人数
		m_EmpArray = NULL;			//初始化数组指针
		m_FileIsEmpty = true;		//初始化文件是否为空
		ifs.close();
		return;
	}
	//2.文件存在且没有记录
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		//初始化属性
		m_EmpNum = 0;                //初始化记录人数
		m_EmpArray = NULL;			//初始化数组指针
		m_FileIsEmpty = true;		//初始化文件是否为空
		ifs.close();
		return;
	}

	//3.文件存在且有记录
	int num = getEmpNum();
	//cout << "职工人数为: " << num << endl;
	m_EmpNum = num;
	//开辟空间
	m_EmpArray = new worker*[m_EmpNum];
	//将文件中的数据，存到数组中
	init_Emp();

}

//析构函数
workerManager::~workerManager()
{
	if (m_EmpArray != NULL)
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			if (m_EmpArray[i] != NULL)
			{
				delete m_EmpArray[i];
				m_EmpArray[i] = NULL;
			}
		}
		delete[] m_EmpArray;
		m_EmpArray = NULL;
	}
}


//展示菜单
void workerManager::Show_Menu()
{
	cout << "**************************************" << endl;
	cout << "******** 欢迎使用职工管理系统 ********" << endl;
	cout << "********    0.退出管理系统    ********" << endl;
	cout << "********    1.增加职工信息    ********" << endl;
	cout << "********    2.显示职工信息    ********" << endl;
	cout << "********    3.删除职工信息    ********" << endl;
	cout << "********    4.修改职工信息    ********" << endl;
	cout << "********    5.查找职工信息    ********" << endl;
	cout << "********    6.按照编号排序    ********" << endl;
	cout << "********    7.清空所有文档    ********" << endl;
	cout << "**************************************" << endl;
}

//退出系统
void workerManager::exitSystem()
{
	cout << "欢迎您下次使用!" << endl;
	exit(0);                                 //退出程序
}

//添加职工
void workerManager::Add()
{
	int id;            //保存员工编号
	string name;         //保存员工姓名
	int dId;              //保存员工部门编号

	int count;                //保存用户输入的员工数量

	cout << "请输入您要添加的员工数量: ";
	cin >> count;
	if (count > 0)
	{
		int newSize = m_EmpNum + count;                  //计算添加新空间大小 新空间人数=原来记录人数+新添加的人数
		worker** newSpace = new worker*[newSize];         //开辟新空间
		if (m_EmpArray != NULL)                     //将原来空间下数据，拷贝到新空间
		{
			for (int i = 0; i < m_EmpNum; i++)
				newSpace[i] = m_EmpArray[i];
		}
		for (int i = 0; i < count; i++)                      //批量添加新数据
		{
			cout << "请输入第" << i + 1 << "个新员工编号: ";
			cin >> id;
			cout << "请输入第" << i + 1 << "个新员工姓名: ";
			cin >> name;
			cout << "请选择该职工岗位(1.员工  2.经理  3.老板):  ";
			cin >> dId;

			worker* w = NULL;
			switch (dId)
			{
			case 1:
				w = new employee(id, name, 1);
				break;
			case 2:
				w = new manager(id, name, 2);
				break;
			case 3:
				w = new boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[m_EmpNum + i] = w;              //将创建的职工指针保存到数组中
		}
		delete[] m_EmpArray;                     //释放原有空间
		m_EmpArray = newSpace;                     //更改新空间指向
		m_EmpNum = newSize;                  //更新新的职工人数
		m_FileIsEmpty = false;                   //更新职工记录不为空
		cout << "成功添加" << count << "名新职工!" << endl;           //提示添加成功
		save();                        //保存数据到文件中
	}
	else
	{
		cout << "您输入有误!" << endl;
	}
	system("pause");        //按任意键后，清屏回到上级目录
	system("cls");
}


//保存文件
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);            //用输出的方式打开文件     写文件
	for (int i = 0; i < m_EmpNum; i++)
	{
		ofs << m_EmpArray[i]->m_Id << "  " << m_EmpArray[i]->m_Name << "  " << m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//统计文件中人数
int workerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);       //打开文件        读文件

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
		//统计人数
		num++;
	ifs.close();
	return num;
}

//初始化员工
void workerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		worker *w = NULL;
		if (dId == 1)               //普通员工
			w = new employee(id, name, dId);
		else if (dId == 2)                 //经理
			w = new manager(id, name, dId);
		else                          //老板
			w = new boss(id, name, dId);
		m_EmpArray[index] = w;
		index++;
	}
	ifs.close();
}

//显示职工
void workerManager::show_Emp()
{
	//判断文件是否为空
	if (m_FileIsEmpty)
		cout << "文件不存在或记录为空" << endl;
	else
		for (int i = 0; i < m_EmpNum; i++)
			//利用多态调用程序接口
			m_EmpArray[i]->showInfo();
	system("pause");         //按任意键后清屏
	system("cls");
}

//删除职工
void workerManager::Del_Emp()
{
	if (m_FileIsEmpty)
		cout << "文件不存在或记录为空!" << endl;
	else
	{
		//按照职工编号进行删除
		cout << "请输入想要删除的职工编号: ";
		int id = 0;
		cin >> id;
		int index = IsExist(id);
		if (index != -1)              //说明职工存在并删除该位置职工
		{
			//数据前移
			for (int i = index; i < m_EmpNum-1; i++)
			{
				m_EmpArray[i] = m_EmpArray[i + 1];
			}
			m_EmpNum--;               //更新数组中记录人员个数
			save();                   //数据同步更新到文件中
			cout << "删除成功!" << endl;
		}
		else
			cout << "该职工不存在!" << endl;
	}
	system("pause");           //按任意键后清屏
	system("cls");
}

//根据编号判断职工是否存在，存在返回职工在数组中的位置，不存在返回-1
int workerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < m_EmpNum; i++)
	{
		if (m_EmpArray[i]->m_Id == id)            //如果找到职工
		{
			index = i;
			break;
		}
	}
	return index;
}

//修改职工
void workerManager::Mod_Emp()
{
	if (m_FileIsEmpty)
		cout << "文件不存在或记录为空!" << endl;
	else
	{
		cout << "请输入您要修改的员工编号: ";
		int id;
		cin >> id;
		int ret = IsExist(id);
		if (ret != -1)               //找到此员工
		{
			delete m_EmpArray[ret];
			int Id;
			string name;
			int dId;
			cout << "查到" << id << "号员工!" << endl;
			cout << "请输入新员工编号: ";
			cin >> Id;
			cout << "请输入新员工姓名: ";
			cin >> name;
			cout << "请输入新员工岗位(1.普通职工 2.经理 3.老板): ";
			cin >> dId;
			worker *w = NULL;
			switch (dId)
			{
			case 1:
				w = new employee(Id, name, dId);
				break;
			case 2:
				w = new manager(Id, name, dId);
				break;
			case 3:
				w = new boss(Id, name, dId);
				break;
			default:
				break;
			}
			//更新数据到数组中
			m_EmpArray[ret] = w;
			//同步数据到文件中
			save();
			cout << "修改成功!" << endl;
		}
		else
			cout << "该职工不存在!" << endl;
	}
	system("pause");               //按任意键后清屏
	system("cls");            
}

//查找员工
void workerManager::Find_Emp()
{
	if (m_FileIsEmpty)
		cout << "文件不存在或记录为空" << endl;
	else
	{
		cout << "请输入您要查找的方式(1.按员工编号查找   2.按员工姓名查找):";
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "请输入你要查找的员工编号: ";
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)           //找到该职工
			{
				cout << "查找成功，信息如下!" << endl;
				m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "该职工不存在!" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "请输入你要查找的员工姓名: ";
			string name;
			bool flag = false;             //判断是否查到
			cin >> name;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					flag = true;
					cout << "查找成功，信息如下!" << endl;
					m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
				cout << "该职工不存在!" << endl;

		}
		else {
			cout << "输入的选项有误" << endl;
		}
	}
	system("pause");          //按任意键清屏
	system("cls");
}

//排序员工
void workerManager::Sort_Emp()
{
	if (m_FileIsEmpty)
		cout << "文件不存在或记录为空" << endl;
	else
	{
		cout << "请选择排序方式(1.按员工编号升序排序  2.按员工编号降序排序): ";
		int select;
		cin >> select;     
		for (int i = 0; i < m_EmpNum; i++)
		{
			int Index = i;             //声明最小值或最大值下标
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)                          //升序
				{
					if (m_EmpArray[Index]->m_Id > m_EmpArray[j]->m_Id)
						Index = j;
				}
				else                                     //降序
				{
					if (m_EmpArray[Index]->m_Id < m_EmpArray[j]->m_Id)
						Index = j;
				}
			}
			//判断一开始认定的最小值或最大值 是不是 计算的最小值或最大值 如果不是 交换数据
			if (i != Index)
			{
				worker* w = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[Index];
				m_EmpArray[Index] = w;
			}
		}
		cout << "排序成功!" << endl;
		save();               //排序结果保存到文件中
	}
	system("pause");        //按任意键清屏
	system("cls");
}

//清空文件
void workerManager::Clean_File()
{
	cout << "确定清空(1.确定  2.取消): ";
	int select;
	cin >> select;
	if (select == 1)
	{
		//清空文件
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);                    //删除文件后重新创建
		ofs.close();

		if (m_EmpArray != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i] != NULL)
				{
					delete m_EmpArray[i];
					m_EmpArray[i] = NULL;
				}
			}
			m_EmpNum = 0;
			//删除堆区数组指针
			delete[] m_EmpArray;
			m_EmpArray = NULL;
			m_FileIsEmpty = true;
		}
		cout << "清空成功!" << endl;
	}
	system("pause");
	system("cls");
}