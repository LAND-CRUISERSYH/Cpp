#include<iostream>
#include<string>

using namespace std;

/*
	1.C++����������������:��װ���̳С���̬
	2.C++��Ϊ���ﶼ��Ϊ���󣬶������������Ժ���Ϊ
	3.������ͬ���ʵĶ������ǿ��Գ����Ϊ��
	4.��װ������:�����Ժ���Ϊ��Ϊһ�����壬���������е���������Ժ���Ϊ����Ȩ�޿���
	5.ʵ����:ͨ��һ���࣬����һ������Ĺ���
	6.����Ȩ��������:public(����Ȩ��)��protected(����Ȩ��)��private(˽��Ȩ��)
	   (1)����Ȩ�� public          ��Ա���ڿ��Է���   ������Է���
	   (2)����Ȩ�� protected       ��Ա���ڿ��Է���   ���ⲻ���Է���   (������Է��ʸ����еı�������)
	   (3)˽��Ȩ�� private         ��Ա���ڿ��Է���   ���ⲻ���Է���   (���಻���Է��ʸ����е�˽������)
	7.��C++��struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
		structĬ��Ȩ��Ϊ����public
		classĬ��Ȩ��Ϊ˽��private
	8.����Ա��������Ϊ˽�У������Լ����ƶ�дȨ�ޣ�����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/

//���һ��Բ�࣬����Բ���ܳ�(2*PI*�뾶)
const double PI = 3.14;       //Բ����
class Circle
{
public:
	double radius;              //�뾶
	double  calculateZC()      //��ȡԲ���ܳ�
	{
		return 2 * PI*radius;
	}
};

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
public:
	string name;				//����
	string number;				//ѧ��
	void showStudent()           //��ʾ������ѧ��
	{
		cout << "����: " << name << "  ѧ��: " << number << endl;
	}
};

class Person
{
public:
	string name;            //����
protected:
	string Car;             //����
private:
	string password;        //���п�����
public:
	void func()
	{
		name = "����";
		Car = "������";
		password = "12346";
	}
};

//����û���
class User
{
public:
	void setName(string s)          //��������
	{
		name = s;       
	}
	string getName()              //��ȡ����
	{
		return name;
	}
	int getAge()                 //��ȡ����
	{
		//age = 0;                   //��ʼ������
		return age;
	}
	void setAge(int num)       //��������
	{
		if (num < 0 || num>150)
		{
			cout << "���������������!" << endl;
			age = 0;
			return;
		}
		else
			age = num;
	}
	void setLover(string s)          //��������
	{
		lover = s;
	}
private:
	string name;       //���� (�ɶ���д)
	int age;          //����(ֻ��)
	string lover;		//����(ֻд)
};

//int main()
//{
//	Circle c;             //����һ��Բ����
//	c.radius = 10;                //��Բ���Ը�ֵ
//	cout << "Բ���ܳ�Ϊ: " << c.calculateZC() << endl;
//
//	Student s1, s2;			//��������ѧ������
//	s1.name = "����";
//	s1.number = "10086";
//	s2.name = "����";
//	s2.number = "10001";
//	s1.showStudent();
//	s2.showStudent();
//
//	Person p1;           //ʵ����һ������
//	p1.name = "����";
//	//p1.Car = "����";         //����Ȩ��������������ʲ���
//	//p1.password = "789123";   //˽��Ȩ�����ݣ�������ʲ���
//
//	User man;
//	man.setName("����");
//	man.setAge(22);
//	cout << "����Ϊ: " << man.getName() << endl;
//	cout << "����Ϊ: " << man.getAge() << endl;
//	man.setLover("�һ�");
//	return 0;
//}