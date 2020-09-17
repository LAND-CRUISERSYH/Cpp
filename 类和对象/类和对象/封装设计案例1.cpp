#include<iostream>

using namespace std;

/*
	1.����������࣬������������������
	2.�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/

class Cube
{
public: 
	double area()                     //��ȡ���
	{
		return 2 * (length * height + width * height + length * width);
	}
	double volume()                     //��ȡ���
	{
		return length * width*height;
	}
	void setLength(double n) { length = n; }        //���ó�
	void setWidth(double n) { width = n; }          //���ÿ�
	void setHeight(double n) { height = n; }       //���ø�
	double getLength() { return length; }            //��ȡ��
	double getWidth() { return width; }                //��ȡ��
	double getHeight() { return height; }                 //��ȡ��
	bool SameCube(Cube &c1);                           //�ж������������Ƿ����
private:
	double length;            //��
	double width;			//��
	double height;			//��
};

bool isSame(Cube &c1, Cube &c2)		//�ж������������Ƿ����
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
//	cout << "��Ϊ: " << c1.getLength() << " ��Ϊ: " << c1.getWidth() << " ��Ϊ: " << c1.getHeight() << endl;
//	cout << "���Ϊ: " << c1.area() << "   ���Ϊ: " << c1.volume() << endl;
//
//	c2.setLength(5);
//	c2.setWidth(5);
//	c2.setHeight(5);
//	cout << "��Ϊ: " << c2.getLength() << " ��Ϊ: " << c2.getWidth() << " ��Ϊ: " << c2.getHeight() << endl;
//	cout << "���Ϊ: " << c2.area() << "   ���Ϊ: " << c2.volume() << endl;
//
//	/*bool num = isSame(c1, c2);
//	if (num == 1)
//		cout << "�������������!" << endl;
//	else
//		cout << "���������岻���!" << endl;*/
//
//	bool num = c1.SameCube(c2);
//	if (num)
//		cout << "�������������!" << endl;
//	else
//		cout << "���������岻���!" << endl; 
//	return 0;
//}