#include<iostream>
#include<string>

#define MAXSIZE 1000          //通讯录最大容量

using namespace std;

/*
	通讯录是一个可以记录亲人，好友信息的工具，利用C++来实现一个通讯录管理系统
	系统中需要实现的功能如下:
	1.添加联系人:向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
	2.显示联系人:显示通讯录中所有联系人信息
	3.删除联系人:按照姓名进行删除指定联系人
	4.查找联系人:按照姓名查看指定联系人信息
	5.修改联系人:按照姓名重新修改指定联系人、
	6.清空联系人:清空通讯录中所有信息
	7.退出通讯录:退出当前使用的通讯录
*/


//联系人结构体
struct User_info
{
	string name;      //姓名
	int sex;         //性别:1男 2女
	int age;           //年龄
	string phone_number; //联系电话
	string address;        //家庭住址

};

//通讯录结构体
struct Mail_list
{
	User_info array[MAXSIZE];         //通讯录中的联系人数组
	int size;				//通讯录中的信息个数
};

//菜单界面
void showMenu()                               
{
	cout << "********************************" << endl;
	cout << "*****     1.添加联系人     *****" << endl;
	cout << "*****     2.显示联系人     *****" << endl;
	cout << "*****     3.删除联系人     *****" << endl;
	cout << "*****     4.查找联系人     *****" << endl;
	cout << "*****     5.修改联系人     *****" << endl;
	cout << "*****     6.清空联系人     *****" << endl;
	cout << "*****     0.退出通讯录     *****" << endl;
	cout << "********************************" << endl;

}


//添加联系人
void addUser(Mail_list *arr)
{
	if (arr->size == MAXSIZE)					//判断通讯录是否已满
	{
		cout << "通讯录已满!" << endl;
		return;
	}
	else												//添加联系人
	{
		cout << "请输入姓名: ";
		cin >> arr->array[arr->size].name;
		int num = 0;
		while (true)                               //判断是否输入1/2，输入错误重新输入
		{
			cout << "请输入性别(1男 2女): ";
			cin >> num;
			if (num == 1 || num == 2)
			{
				arr->array[arr->size].sex = num;
				break;
			}
			else
				cout << "输入错误，请重新输入!" << endl;
		}
		int temp = 0; 
		while (true)                              //判断年龄是否合法，不合法提示用户重新输入
		{
			cout << "请输入年龄: ";
			cin >> temp;
			if (temp <= 0 || temp > 150)
				cout << "输入错误，请重新输入!" << endl;
			else
			{
				arr->array[arr->size].age = temp;
				break;
			}
		}
		cout << "请输入联系方式: ";
		cin >> arr->array[arr->size].phone_number;
		cout << "请输入住址: ";
		cin >> arr->array[arr->size].address;
		arr->size++;                                  //更新通讯录信息个数
		cout << "添加成功!" << endl;
		system("pause");							//请按任意键继续

		system("cls");							//清屏
	}
}

//显示联系人
void showUser(Mail_list *arr)
{
	if (arr->size == 0)							//判断通讯录是否为空
	{
		cout << "通讯录为空" << endl;
	}
	else                                  //if通讯录不为空
	{
		for (int i = 0; i < arr->size; i++)
		{
			cout << "姓名: " << arr->array[i].name <<"\t"
				<< "性别:" << ((arr->array[i].sex == 1) ? "男" : "女") <<"\t"
				<< "年龄: "<< arr->array[i].age<< "\t"
				<< "联系电话: " << arr->array[i].phone_number <<"\t"
				<< "住址: " << arr->array[i].address << endl;
		}
	}
	system("pause");					//请按任意键继续
	system("cls");								//清屏
}

//判断联系人是否存在
int isUser(Mail_list *arr,string s) 
{
	for (int i = 0; i < arr->size; i++)
	{
		if (arr->array[i].name == s)                       //如果存在返回下标位置
			return i;
	}
	return -1;												//如果不存在return -1
}

//删除联系人
void DeleteUser(Mail_list *arr)
{
	if (arr->size == 0)                          //判断通讯录是否为空
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		string s;
		cout << "请输入联系人姓名: ";
		cin >> s;                                 
		int temp = isUser(arr, s);
		if (temp>=0)                         //如果联系人存在
		{
			for (int j = temp;j<arr->size-1;j++)
			{
				arr->array[j] = arr->array[j + 1];	  //从后向前依次覆盖掉这条信息
			}
			arr->size--;                      //更新通信录中信息数量
			cout << "删除成功" << endl;
		}
		else                                            //如果联系人不存在
		{
			cout << "联系人不存在" << endl;
		}
	}
	system("pause");                        //请按任意键继续
	system("cls");							//清屏
}

//查找联系人
void findUser(Mail_list *arr)
{
	if (arr->size == 0)                                //判断通讯录是否为空
		cout << "通讯录为空" << endl;
	else
	{
		cout << "请输入您要查找的姓名: ";
		string s;
		cin >> s;
		int temp = isUser(arr, s);
		if (temp == -1)                                //判断该联系人是否存在
			cout << "该联系人不存在" << endl;
		else
			cout << "姓名: " << arr->array[temp].name << "\t"
			<< "性别:" << ((arr->array[temp].sex == 1) ? "男" : "女") << "\t"
			<< "年龄: " << arr->array[temp].age << "\t"
			<< "联系电话: " << arr->array[temp].phone_number << "\t"
			<< "住址: " << arr->array[temp].address << endl;
	}
	system("pause");                                  //请按任意键继续
	system("cls");										//清屏
}

//修改联系人
void modifyUser(Mail_list *arr)
{
	if (arr->size == 0)								//判断通讯录是否为空
		cout << "通讯录为空" << endl;
	else
	{
		string s;
		cout << "请输入您要修改的联系人姓名: ";
		cin >> s;
		int temp = isUser(arr, s);
		if (temp == -1)
			cout << "该联系人不存在" << endl;
		else
		{
			cout << "请输入姓名: ";
			cin >> arr->array[temp].name;
			int num = 0;
			while (true)                               //判断是否输入1/2，输入错误重新输入
			{
				cout << "请输入性别(1男 2女): ";
				cin >> num;
				if (num == 1 || num == 2)
				{
					arr->array[temp].sex = num;
					break;
				}
				else
					cout << "输入错误，请重新输入!" << endl;
			}
			int n = 0;
			while (true)                              //判断年龄是否合法，不合法提示用户重新输入
			{
				cout << "请输入年龄: ";
				cin >> n;
				if (n <= 0 || n > 150)
					cout << "输入错误，请重新输入!" << endl;
				else
				{
					arr->array[temp].age = n;
					break;
				}
			}
			cout << "请输入联系方式: ";
			cin >> arr->array[temp].phone_number;
			cout << "请输入住址: ";
			cin >> arr->array[temp].address;
			cout << "修改成功!" << endl;
		}
	}
	system("pause");								//请按任意键继续
	system("cls");									//清屏
}

//清空联系人
void cleanUser(Mail_list *arr)
{
	arr->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");							//请按任意键继续
	system("cls");								//清屏
}

int main()
{
	Mail_list mail;                  //创建通讯录结构体变量
	mail.size = 0;                 //初始化通讯录信息个数

	int select = 0;            //创建用户选择输入的变量

	while (true)
	{
		showMenu();					//菜单调用
		cin >> select;       //用户输入
		switch (select)
		{
		case 1:            //添加联系人
			addUser(&mail);
			break;
		case 2:				//显示联系人
			showUser(&mail);
			break;
		case 3:				//删除联系人
			DeleteUser(&mail);
			break;
		case 4:				//查找联系人
			findUser(&mail);
			break;
		case 5:				//修改联系人
			modifyUser(&mail);
			break;
		case 6:				//清空联系人
			cleanUser(&mail);
			break;
		case 0: {		//退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
		}
		default: {
			cout << "输入有误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}
	return 0;
}