#include<iostream>
#include<string>

using namespace std;
/*-----------------------string概念特点及构造函数------------------------------------*/
/*
	1.string是C++风格的字符串，而string本质上是一个类
	2.string和char*区别:
		char*是一个指针
		string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器
	3.特点:string类内部封装了很多成员方法
		查找find,拷贝copy,删除delete,替换replace,插入insert等
		string管理char*所分配的内存，不用担心复制越界或取值越界等,由类内部进行负责
	4.构造函数原型:	
		string();						创建一个空的字符串，例如：string str;
		string(const char* s);			使用字符串s初始化
		string(const string& str);      使用一个string对象初始化另一个string对象
		string(int n,char c);           使用n个字符c初始化
*/
/*-----------------------------------------------------------------------------------*/

//string构造函数使用
void test1()
{
	string s1;        //默认构造
	const char* s = "hello world";
	string s2(s);

	string s3(s2);

	string s4(10, 'a');

	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

/*------------------------string赋值操作---------------------------------------------*/
/*
	赋值的函数原型:
	string& operator=(const char* s);                 char*类型字符串赋值给当前的字符串
	string& operator=(const string &s);               把字符串s赋给当前的字符串
	string& operator=(char c);                        把字符赋值给当前的字符串
	string& assign(const char* s);                    把字符串s赋给当前的字符串
	string& assign(const char* s,int n);              把字符串s的前n个字符赋给当前的字符串
	string& assign(const string& s);                  把字符串s赋给当前字符串
	string& assign(int n,char c);                     用n个字符c赋给当前字符串
*/
/*-----------------------------------------------------------------------------------*/

//string赋值操作
void test2()
{
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3 = 'a';
	cout << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << str4 << endl;

	string str5;
	str5.assign("hello C++", 5);
	cout << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << str6 << endl;


	string str7;
	str7.assign(3, 'w');
	cout << str7 << endl;
}

/*------------------------string字符串拼接---------------------------------------------*/
/*
	函数原型:
	string& operator+=(const char* str);                      //重载+=操作符
	string& operator+=(const char c);                         //重载+=操作符
	string& operator+=(const string& str);                    //重载+=操作符
	string& append(const char* s);                            //把字符串s连接到当前字符串结尾
	string& append(const char* s,int n);                      //把字符串s的前n个字符连接到当前字符串结尾
	string& append(const string& s);                          //同operator+=(const string& str)
	string& append(const string& s,int pos,int n);            //字符串s中从pos位置开始的n个字符连接到字符串结尾
*/
/*-----------------------------------------------------------------------------------*/

//string字符串拼接
void test3()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << str1 << endl;

	str1 += ':';
	cout << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << str3 << endl;

	str3.append("gameasjdlakdja", 4);
	cout << str3 << endl;

	str3.append(str2);
	cout << str3 << endl;

	str3.append(str2, 0, 3);
	cout << str3 << endl;

}

/*------------------------string字符串查找和替换---------------------------------------------*/
/*
	查找:查找指定字符串是否存在
	替换:在指定的位置替换字符串
	函数原型:
	int find(const string& str,int pos = 0) const;        查找str第一次出现位置，从pos开始查找
	int find(const char* s,int pos = 0) const;            查找s第一次出现位置，从pos开始查找
	int find(const char* s,int pos = 0,int n) const;      从pos位置查找s的前n个字符第一次位置
	int find(const char c,int pos = 0) const;             查找字符c第一次出现位置
	int rfind(const string& str,int pos = npos) const;    查找str最后一次位置，从pos开始查找
	int rfind(const char* s,int pos = npos) const;        查找s最后一次出现位置，从pos开始查找
	int rfind(const char* s,int pos,int n) const;         从pos位置查找s的前n个字符最后一次位置
	int rfind(const char c,int pos = 0) const;            查找字符c最后一次出现位置
	string& replace(int pos,int n,const string& str);     替换从pos开始n个字符为字符串str
	string& replace(int pos,int n,const char* s);         替换从pos开始的n个字符串为字符串s
	1.find查找是从左往右，rfind是从右往左
	2.find找到字符串后返回查找的第一个字符位置，找不到返回-1
	3.replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符 
*/
/*-----------------------------------------------------------------------------------*/

//string查找和替换
void test4()
{
	string str1 = "abdecdefg";
	int pos = str1.find("de");
	if (pos == -1)
		cout << "未找到字符串" << endl;
	else
		cout << "字符串的位置为: " << pos << endl;

	//find和rfind的区别:  
	//find是从左往右查找，rfind是从右往左查找
	pos = str1.rfind("de");
	if (pos == -1)
		cout << "未找到字符串" << endl;
	else
		cout << "字符串的位置为: " << pos << endl;

	string str2 = "abcdefg";
	str2.replace(1, 3, "BCDE");
	cout << str2 << endl;
}

/*------------------------string字符串比较---------------------------------------------*/
/*
	1.比较方式:字符串比较是按的ASCII码进行对比(相等返回0，左大右小返回1，左小右大返回-1)
	2.函数原型:
	int compare(const string& s) const;                         //与字符串s比较
	int compare(const char* s) const;                          //与字符串s比较
*/
/*-----------------------------------------------------------------------------------*/

//string字符串比较
void test5()
{
	string str1 = "hello";
	string str2 = "Hello";
	if (str1.compare(str2) == 0)
	{
		cout << "相等!" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "左大" << endl;
	}
	else
		cout << "右大" << endl;
}

/*------------------------string字符存取---------------------------------------------*/
/*
	函数原型:
	char& operator[](int n);                   //通过[]方式取字符
	char& at(int n);                            //通过at方法获取字符
*/
/*-----------------------------------------------------------------------------------*/

//string字符存取
void test6()
{
	string str = "hello world";
	//cout << str << endl;
	//cout << str.size() << endl;
	for (string::size_type i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	for (string::size_type i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	str[0] = 'X';
	cout << str << endl;
	str.at(0) = 'H';
	cout << str << endl;
}

/*------------------------string字符串插入和删除---------------------------------------------*/
/*
	函数原型:
	string& insert(int pos,const char* s);                  //插入字符串
	string& insert(int pos,const string& str);               //插入字符串
	string& insert(int pos,int n,char c);                    //在指定位置插入n个字符c
	string& erase(int pos,int n = npos);                      //删除从pos开始的n个字符
*/
/*-----------------------------------------------------------------------------------*/

//string字符串插入和删除
void test7()
{
	string str = "hello";
	str.insert(1, "LAND");
	cout << str << endl;

	str.erase(1, 4);
	cout << str << endl;

	str.insert(1, 5, 'c');
	cout << str << endl;
}

/*------------------------string子串---------------------------------------------*/
/*
	函数原型:
	string substr(int pos = 0;int n = npos) const;      //返回由pos开始的n个字符组成的字符串
*/
/*-----------------------------------------------------------------------------------*/

//string子串
void test8()
{
	string str = "hello world";
	string str2;
	str2 = str.substr(0, 5);
	cout << str2 << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}