#include<iostream>
#include<string>

using namespace std;


/*
	���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬����������Ӣ��
	ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľṹ
*/

struct Hero
{
	string name;
	int age;
	string sex;
};

void print(Hero *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "����: " << arr[i].name << " ����: " << arr[i].age << " �Ա�: " << arr[i].sex << endl;
	}
	cout << "--------------------------------------" << endl;
}

void Bubble_Sort(Hero *arr, int n)
{
	Hero temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	Hero hArray[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	print(hArray, 5);
	Bubble_Sort(hArray, 5);
	print(hArray, 5);


	return 0;
}