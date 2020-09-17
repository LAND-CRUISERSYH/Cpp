#include<iostream>

using namespace std;

/*
	1.设计立方体类，求出立方体的面积和体积
	2.分别用全局函数和成员函数判断两个立方体是否相等
*/

class Cube
{
public: 
	double area()                     //获取面积
	{
		return 2 * (length * height + width * height + length * width);
	}
	double volume()                     //获取体积
	{
		return length * width*height;
	}
	void setLength(double n) { length = n; }        //设置长
	void setWidth(double n) { width = n; }          //设置宽
	void setHeight(double n) { height = n; }       //设置高
	double getLength() { return length; }            //获取长
	double getWidth() { return width; }                //获取宽
	double getHeight() { return height; }                 //获取高
	bool SameCube(Cube &c1);                           //判断两个立方体是否相等
private:
	double length;            //长
	double width;			//宽
	double height;			//高
};

bool isSame(Cube &c1, Cube &c2)		//判断两个立方体是否相等
{
	if ((c1.getLength() == c2.getLength()) && (c1.getWidth() == c2.getWidth()) && (c1.getHeight() == c2.getHeight()))
		return true;
	else
		return false;
}

bool Cube::SameCube(Cube &c2)
{
	if ((c2.getLength() == getLength()) && (c2.getWidth() ==getWidth()) && (c2.getHeight() == getHeight()))
		return true; 
	else
		return false;
}

//int main()
//{
//	Cube c1, c2;
//	c1.setLength(5);
//	c1.setWidth(5);
//	c1.setHeight(5);
//	cout << "长为: " << c1.getLength() << " 宽为: " << c1.getWidth() << " 高为: " << c1.getHeight() << endl;
//	cout << "面积为: " << c1.area() << "   体积为: " << c1.volume() << endl;
//
//	c2.setLength(5);
//	c2.setWidth(5);
//	c2.setHeight(5);
//	cout << "长为: " << c2.getLength() << " 宽为: " << c2.getWidth() << " 高为: " << c2.getHeight() << endl;
//	cout << "面积为: " << c2.area() << "   体积为: " << c2.volume() << endl;
//
//	/*bool num = isSame(c1, c2);
//	if (num == 1)
//		cout << "两个立方体相等!" << endl;
//	else
//		cout << "两个立方体不相等!" << endl;*/
//
//	bool num = c1.SameCube(c2);
//	if (num)
//		cout << "两个立方体相等!" << endl;
//	else
//		cout << "两个立方体不相等!" << endl; 
//	return 0;
//}