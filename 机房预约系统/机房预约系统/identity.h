#pragma once         //防止头文件重复包含
#include<iostream>
using namespace std;

//身份抽象基类
class Identity
{
public:
	virtual void Menu() = 0;    //操作菜单   纯虚函数

	string m_Name;            //用户名
	string m_pwd;				//密码
};