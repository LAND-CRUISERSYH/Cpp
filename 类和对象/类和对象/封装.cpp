#include<iostream>
#include<string>

using namespace std;

/*
	1.C++面向对象的三大特性:封装、继承、多态
	2.C++认为万物都皆为对象，对象上有其属性和行为
	3.具有相同性质的对象，我们可以抽象称为类
	4.封装的意义:将属性和行为作为一个整体，表现生活中的事物；将属性和行为加以权限控制
	5.实例化:通过一个类，创建一个对象的过程
	6.访问权限有三种:public(公共权限)、protected(保护权限)、private(私有权限)
	   (1)公共权限 public          成员类内可以访问   类外可以访问
	   (2)保护权限 protected       成员类内可以访问   类外不可以访问   (子类可以访问父类中的保护内容)
	   (3)私有权限 private         成员类内可以访问   类外不可以访问   (子类不可以访问父类中的私有内容)
	7.在C++中struct和class唯一的区别就在于默认的访问权限不同
		struct默认权限为公共public
		class默认权限为私有private
	8.将成员属性设置为私有，可以自己控制读写权限；对于写权限，我们可以检测数据的有效性
*/

//设计一个圆类，来求圆的周长(2*PI*半径)
const double PI = 3.14;       //圆周率
class Circle
{
public:
	double radius;              //半径
	double  calculateZC()      //获取圆的周长
	{
		return 2 * PI*radius;
	}
};

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public:
	string name;				//姓名
	string number;				//学号
	void showStudent()           //显示姓名和学号
	{
		cout << "姓名: " << name << "  学号: " << number << endl;
	}
};

class Person
{
public:
	string name;            //姓名
protected:
	string Car;             //汽车
private:
	string password;        //银行卡密码
public:
	void func()
	{
		name = "张三";
		Car = "拖拉机";
		password = "12346";
	}
};

//设计用户类
class User
{
public:
	void setName(string s)          //设置姓名
	{
		name = s;       
	}
	string getName()              //获取姓名
	{
		return name;
	}
	int getAge()                 //获取年龄
	{
		//age = 0;                   //初始化年龄
		return age;
	}
	void setAge(int num)       //设置年龄
	{
		if (num < 0 || num>150)
		{
			cout << "您输入的年龄有误!" << endl;
			age = 0;
			return;
		}
		else
			age = num;
	}
	void setLover(string s)          //设置情人
	{
		lover = s;
	}
private:
	string name;       //姓名 (可读可写)
	int age;          //年龄(只读)
	string lover;		//情人(只写)
};

//int main()
//{
//	Circle c;             //创建一个圆对象
//	c.radius = 10;                //给圆属性赋值
//	cout << "圆的周长为: " << c.calculateZC() << endl;
//
//	Student s1, s2;			//创建两个学生对象
//	s1.name = "张三";
//	s1.number = "10086";
//	s2.name = "李四";
//	s2.number = "10001";
//	s1.showStudent();
//	s2.showStudent();
//
//	Person p1;           //实例化一个对象
//	p1.name = "李四";
//	//p1.Car = "奔驰";         //保护权限内容在类外访问不到
//	//p1.password = "789123";   //私有权限内容，类外访问不到
//
//	User man;
//	man.setName("张三");
//	man.setAge(22);
//	cout << "姓名为: " << man.getName() << endl;
//	cout << "年龄为: " << man.getAge() << endl;
//	man.setLover("灰灰");
//	return 0;
//}