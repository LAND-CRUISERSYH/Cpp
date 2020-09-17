#include<iostream>

using namespace std;

/*
	1.���һ��Բ��
	2.���һ������
	3.���Բ�Ĺ�ϵ(Բ�� Բ��  Բ��)
*/

class Point
{
public:
	void setX(int num) { x = num; };                   //����X����
	void setY(int num) { y = num; };                    //����y����
	int getX() { return x; }                           //��ȡx����
	int getY() { return y; };                          //��ȡy����
private:
	int x; 
	int y;
};

class Circle
{
public:
	void setR(int num) { r = num; }                            //���ð뾶
	int getR() { return r; }                                      // ��ȡ�뾶
	void setCenter(Point center) { Center = center; }          //����Բ��
	Point getCenter() { return Center; }                      //��ȡԲ��
private:
	int r;              //�뾶
	Point Center;        //Բ��
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point &p)
{
	int num1 = ((c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY()));
	int num2 = c.getR()*c.getR();
	if (num1 == num2)
		cout << "����Բ��" << endl;
	else if (num1 > num2)
		cout << "����Բ��" << endl;
	else
		cout << "����Բ��" << endl;
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