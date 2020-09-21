#include<iostream>
#include<fstream>

using namespace std;

/*
	1.程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
	2.通过文件可以将数据持久化
	3.C++中对文件操作需要包含头文件<fstream>
	4.文件类型可以分为两种: 文本文件和二进制文件
	5.文本文件:文件以文本的ASCII码形式存储在计算机中
	6.二进制文件:文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
	7.操作文件的三大类:
		ofstream:写操作
		ifstream:读操作
		fstream：读写操作
	8.写文件步骤
		包含头文件:   #include<fstream>
		创建流对象:   ofstream ofs;
		打开文件:     ofs.open("文件路径",打开方式);
		写数据:       ofs<<"写入的数据";
		关闭文件:     ofs.close();
	9.文件打开方式:
		ios::in         为读文件而打开文件
		ios::out        为写文件而打开文件
		ios::ate        初始位置:文件尾
		ios::app        追加方式写文件
		ios::trunc      如果文件存在先删除，再创建
		ios::binary     二进制方式
	10.文件打开方式可以配合使用，利用|操作符
		例:用二进制方式写文件    ios::binary|ios::out
*/

//void test1()
//{
//	ofstream ofs;       //创建流对象
//	ofs.open("test.txt", ios::out);       //指定打开方式
//	ofs << "姓名: 张三" << endl;           //写入数据
//	ofs << "性别: 男" << endl;
//	ofs << "年龄: 18" << endl;
//	ofs.close();                    //关闭文件
//}
//
//int main()
//{
//	test1();
//	return 0;
//}