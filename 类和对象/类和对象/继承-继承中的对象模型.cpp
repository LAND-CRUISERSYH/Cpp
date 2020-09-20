#include<iostream>

using namespace std;

/*
	利用开发人员命令提示工具查看对象模型
		1.跳转盘符  F:
		2.跳转文件路径 cd 具体路径
		3.查看命名   cl /d1 reportSingleClassLayout类名 文件名
*/

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Base1 :public Base
//{
//public:
//	int m_D;
//};
//
//void test1()
//{
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有的成员属性，是被编译器给隐藏了，因此是访问不到，但是被子类继承了
//	cout << "Sizeof(Base1) = " << sizeof(Base1) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}