#include<iostream>
#include<string>
#include<ctime>

using namespace std;

/*
	1.每名老师带领5个学生，共有3名老师
	2.设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
	3.学生的成员有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
	4.最终打印出老师数据及老师所带的学生数据
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
		cout << "老师姓名: " << arr[i].t_Name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "    学生: " << arr[i].stuArray[j].s_Name << "       " << "分数: " << arr[i].stuArray[j].score << endl;
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