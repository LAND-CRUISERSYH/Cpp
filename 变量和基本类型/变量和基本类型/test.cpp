#include<iostream>

int reused = 42;
int main()
{
	///*���������ʽ�м����޷���������intֵʱ��intֵ�ͻ�ת�����޷�����*/
	//unsigned u = 10;
	//int i = -42;
	//std::cout << i + i << std::endl;
	//std::cout << u + i << std::endl;

	///*������д���*/
	//unsigned u = 10, u2 = 42;
	//std::cout << u2 - u << std::endl;
	//std::cout << u - u2<< std::endl;
	//int i = 10, i2 = 42;
	//std::cout << i2 - i << std::endl;
	//std::cout << i - i2 << std::endl;
	//std::cout << i - u << std::endl;
	//std::cout << u - i << std::endl;

	///*�����ڲ����˶�����ȫ�ֱ���ͬ�����±���*/
	//int unqiue = 0;                               //ӵ�п�������
	//std::cout << reused << " " << unqiue << std::endl;            //42 0
	//int reused = 0;
	//std::cout << reused << " " << unqiue << std::endl;            //(�ֲ���������ȫ�ֱ���)0 0
	//std::cout << ::reused << " " << unqiue << std::endl;           //(��ʾ����ȫ�ֱ���)42 0

	/*int i = 100, sum = 0;
	for (int i = 0; i != 10; i++)
		sum += i;
	std::cout << i << " " << sum << std::endl;*/

	/*int i, &r1 = i;
	i = 5;
	r1 = 10;
	std::cout << i << " " << r1 << std::endl;*/

	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;
}