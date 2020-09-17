#include<iostream>

using namespace std;

/*
	1.设计一个圆类
	2.设计一个点类
	3.点和圆的关系(圆内 圆上  圆外)
*/

class Point
{
public:
	void setX(int num) { x = num; };                   //设置X坐标
	void setY(int num) { y = num; };                    //设置y坐标
	int getX() { return x; }                           //获取x坐标
	int getY() { return y; };                          //获取y坐标
private:
	int x; 
	int y;
};

class Circle
{
public:
	void setR(int num) { r = num; }                            //设置半径
	int getR() { return r; }                                      // 获取半径
	void setCenter(Point center) { Center = center; }          //设置圆心
	Point getCenter() { return Center; }                      //获取圆心
private:
	int r;              //半径
	Point Center;        //圆心
};

//判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	int num1 = ((c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY()));
	int num2 = c.getR()*c.getR();
	if (num1 == num2)
		cout << "点在圆上" << endl;
	else if (num1 > num2)
		cout << "点在圆外" << endl;
	else
		cout << "点在圆内" << endl;
}

//int main()
//{
//	Circle c;
//	Point p1;
//	Point p2;
//
//	c.setR(3);
//	p1.setX(3);
//	p1.setY(1);
//	c.setCenter(p1);
//	p2.setX(3);
//	p2.setY(3);
//	isInCircle(c, p2);
//	
//	return 0;
//}