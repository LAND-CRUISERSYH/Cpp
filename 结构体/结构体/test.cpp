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
	cout << "ѧ������: " << stu.name << "  ѧ������: " << stu.age << "  ѧ������: " << stu.score << endl;
}

void print_Stuptr(Student *stu)
{
	stu->score = 0;
	cout << "ѧ������: " << stu->name << "  ѧ������: " << stu->age << "  ѧ������: " << stu->score << endl;
}

void display(const Student *stu)
{
	//stu->score = 50;   //����const֮�����ݲ����޸�
	cout << "ѧ������: " << stu->name << "  ѧ������: " << stu->age << "  ѧ������: " << stu->score << endl;
}

/*int main()
{
	struct Student s1;
	s1.name = "SYH";
	s1.age = 22;
	s1.score = 100;
	cout << "���� " << s1.name << "  ����: " << s1.age << "  ����: " << s1.score << endl;

	struct Student s2 = { "SYH",22,100 };
	cout << "���� " << s2.name << "  ����: " << s2.age << "  ����: " << s2.score << endl;

	s3.name = "SYH";
	s3.age = 22;
	s3.score = 100;
	cout << "���� " << s3.name << "  ����: " << s3.age << "  ����: " << s3.score << endl;

	Student arr[3] = { {"SYH",22,100},{"SYH",22,90},{"SYH",22,80} };
	for (auto s : arr)
	{
		cout << "���� " << s.name << "  ����: " << s.age << "  ����: " << s.score << endl;
	}

	Student *s4 = &s3;
	s4->name = "SYH";
	s4->age = 22;
	s4->score = 70;
	cout << "���� " << s4->name << "  ����: " << s4->age << "  ����: " << s4->score << endl;

	Teacher T;
	T.id = 10000;
	T.name = "SYH";
	T.age = 50;
	T.stu.name = "YYF";
	T.stu.age = 3;
	T.stu.score = 100;
	cout << "��ʦ����: " << T.name << "  ��ʦ���: " << T.id << "  ��ʦ����: " << T.age<<endl;
	cout << "ѧ������: " << T.stu.name << "  ѧ������: " << T.stu.age << "  ѧ������: " << T.stu.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student s = { "SYH",22,100 };
	cout << "ѧ������: " << s.name << "  ѧ������: " << s.age << "  ѧ������: " << s.score << endl;
	print_Stu(s);
	cout << "ѧ������: " << s.name << "  ѧ������: " << s.age << "  ѧ������: " << s.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student S = { "SYH",22,100 };
	cout << "ѧ������: " << S.name << "  ѧ������: " << S.age << "  ѧ������: " << S.score << endl;
	print_Stuptr(&S);
	cout << "ѧ������: " << S.name << "  ѧ������: " << S.age << "  ѧ������: " << S.score << endl;

	cout << "---------------------------------------------------" << endl;

	Student S10 = { "SYH",22,100 };
	display(&S10);
	cout << "ѧ��������" << S10.name << "  ѧ������: " << S10.age << "  ѧ������: " << S10.score << endl;
	return 0;
}*/









