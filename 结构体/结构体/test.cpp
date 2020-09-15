#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
}s3;

struct Teacher
{
	int id;
	string name;
	int age;
	Student stu;
};

void print_Stu(Student stu)
{
	stu.score = 0;
	cout << "学生姓名: " << stu.name << "  学生年龄: " << stu.age << "  学生年龄: " << stu.score << endl;
}

void print_Stuptr(Student *stu)
{
	stu->score = 0;
	cout << "学生姓名: " << stu->name << "  学生年龄: " << stu->age << "  学生年龄: " << stu->score << endl;
}

void display(const Student *stu)
{
	//stu->score = 50;   //加入const之后，数据不可修改
	cout << "学生姓名: " << stu->name << "  学生年龄: " << stu->age << "  学生年龄: " << stu->score << endl;
}

/*int main()
{
	struct Student s1;
	s1.name = "SYH";
	s1.age = 22;
	s1.score = 100;
	cout << "姓名 " << s1.name << "  年龄: " << s1.age << "  分数: " << s1.score << endl;

	struct Student s2 = { "SYH",22,100 };
	cout << "姓名 " << s2.name << "  年龄: " << s2.age << "  分数: " << s2.score << endl;

	s3.name = "SYH";
	s3.age = 22;
	s3.score = 100;
	cout << "姓名 " << s3.name << "  年龄: " << s3.age << "  分数: " << s3.score << endl;

	Student arr[3] = { {"SYH",22,100},{"SYH",22,90},{"SYH",22,80} };
	for (auto s : arr)
	{
		cout << "姓名 " << s.name << "  年龄: " << s.age << "  分数: " << s.score << endl;
	}

	Student *s4 = &s3;
	s4->name = "SYH";
	s4->age = 22;
	s4->score = 70;
	cout << "姓名 " << s4->name << "  年龄: " << s4->age << "  分数: " << s4->score << endl;

	Teacher T;
	T.id = 10000;
	T.name = "SYH";
	T.age = 50;
	T.stu.name = "YYF";
	T.stu.age = 3;
	T.stu.score = 100;
	cout << "老师姓名: " << T.name << "  老师编号: " << T.id << "  老师年龄: " << T.age<<endl;
	cout << "学生姓名: " << T.stu.name << "  学生年龄: " << T.stu.age << "  学生分数: " << T.stu.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student s = { "SYH",22,100 };
	cout << "学生姓名: " << s.name << "  学生年龄: " << s.age << "  学生年龄: " << s.score << endl;
	print_Stu(s);
	cout << "学生姓名: " << s.name << "  学生年龄: " << s.age << "  学生年龄: " << s.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student S = { "SYH",22,100 };
	cout << "学生姓名: " << S.name << "  学生年龄: " << S.age << "  学生年龄: " << S.score << endl;
	print_Stuptr(&S);
	cout << "学生姓名: " << S.name << "  学生年龄: " << S.age << "  学生年龄: " << S.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student S10 = { "SYH",22,100 };
	display(&S10);
	cout << "学生姓名：" << S10.name << "  学生年龄: " << S10.age << "  学生分数: " << S10.score << endl;
	return 0;
}*/









