#include<iostream>
#include<string>
#include<ctime>

using namespace std;

/*
	1.ÿ����ʦ����5��ѧ��������3����ʦ
	2.���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
	3.ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
	4.���մ�ӡ����ʦ���ݼ���ʦ������ѧ������
*/

struct Student
{
	string s_Name;
	int score;
};

struct Teacher
{
	string t_Name;
	Student stuArray[5];
};

void init(Teacher *arr,int n)
{
	string tempName = "ABCDE";
	for (int i = 0; i < n; i++)
	{
		arr[i].t_Name = "Teacher_";
		arr[i].t_Name += tempName[i];
		for (int j = 0; j < 5; j++)
		{
			arr[i].stuArray[j].s_Name = "Student_";
			arr[i].stuArray[j].s_Name += tempName[j];
			int random = rand() % 61+40;
			arr[i].stuArray[j].score = random;
		}
	}
}

void print(Teacher *arr, int n)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "��ʦ����: " << arr[i].t_Name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "    ѧ��: " << arr[i].stuArray[j].s_Name << "       " << "����: " << arr[i].stuArray[j].score << endl;
		}
		cout << "-------------------------------------------------" << endl;
	}
}

/*int main()
{
	srand((unsigned int)time(NULL));
	Teacher teaArray[3];
	init(teaArray,3);
	print(teaArray, 3);

	return 0;
}*/