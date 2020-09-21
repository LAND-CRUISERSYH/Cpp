#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/*
	1.读文件步骤如下
		包含头文件:                              #include<fstream>
		创建流对象:                              ifstream ifs;
		打开文件并判断文件是否打开成功:          ifs.open("文件路径",打开方式);
		读数据:                                  四种方式读取
		关闭文件:                                ifs.close();
*/

//void test1()
//{
//	ifstream ifs;             //创建流对象
//	ifs.open("test.txt", ios::in);      //打开文件
//	if (!ifs.is_open())          //如果打开失败
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//读数据
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第三种
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//第四种
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}*/
//
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}