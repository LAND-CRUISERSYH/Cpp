#include<iostream>
#include<string>
#include"Sales_data.h"

//int reused = 42;
//struct Book
//{
//	std::string s;           //����
//	double price = 0;            //�۸�
//	unsigned sales_volume = 0;     //����
// double revenue = 0;           //���۶�
//};
//struct Book
//{
//	std::string name;        //����
//	double price = 0;       //�۸�
//	unsigned sales_volume = 0;   //����
//	double revenue = 0;          //���۶�
//};
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

	/*int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;
	std::cout << *p1 << std::endl;*/

	///*����ָ���ֵ�Լ�ָ����ָ�����ֵ*/
	//int a = 5, *p = &a;
	//int b = 6, *p1 = &b;
	//p = p1;                                              //����ָ���ֵ
	//std::cout << *p << std::endl;
	//*p1 = 10;
	//std::cout << b << std::endl;              //����ָ����ָ������ֵ

	/*int i = 2;
	int *p1 = &i;
	*p1 = *p1**p1;
	std::cout << i << std::endl;*/

	/*int i = 42;
	const int &r1 = i;
	const int *p = &i;*/


	/*int i = -1, &r = 0;
	int *const p2 = &i2;
	const int i = -1, &r1 = 0;
	const int *const p3 = &i2;
	const int *p1 = &i2;
	const int &const r2;
	const int i2 = i, &r = i;*/

	/*const int a = 6;
	const int *const p3 = &a;
	const int ic = *p3;*/
	
	//int i = 0, &r = i;                           //rΪ����i������
	//auto a = r;                                 //a������Ϊint��ֵΪ0
	//const int ci = i, &cr = ci;          //ci������Ϊconst int(����const),ֵΪ0��crΪci�����ã�����Ϊconst int
	//auto b = ci;                             //b������Ϊint(����const������)��ֵΪ0
	//auto c = cr;                             //c������Ϊint(����const������)��ֵΪ0
	//auto d = &i;                           //d������Ϊint *��ֵΪi�ĵ�ַ
	//auto e = &ci;                         //e��һ��ָ�����ͳ�����ָ��,ֵΪci�ĵ�ַ
	//const auto f = ci;                   //f������Ϊconst int
	//auto &g = ci;                      //g��һ�����ͳ������ã��󶨵�ci��
	//std::cout << a << std::endl;        //0
	//a = 42;
	//std::cout << a << std::endl;           //42
	//std::cout << b << std::endl;          //0
	//b = 42;
	//std::cout << b << std::endl;          //42
	//std::cout << c << std::endl;          //0
	//c = 42;
	//std::cout << c << std::endl;          //42
	//std::cout << d << std::endl;          //i�ĵ�ַ
	//d = 42;
	//std::cout << d << std::endl;          //���ܽ�int���͸�ֵ��int *���͵�ʵ��
	//std::cout << e << std::endl;          //ci�ĵ�ַ
	//e = 42;
	//std::cout << e << std::endl;          //���ܽ�int���͸�ֵ��const int*����
	//std::cout << g << std::endl;          //ci�ĵ�ַ
	//g = 42;
	//std::cout << g << std::endl;          //g��һ�����ͳ������ã��󶨵�ci�����ܸı�

	//const int i = 42;                            //const int����
	//auto j = i;                                   //int ����
	//const auto &k = i;                     //const int ����
	//auto *p = &i;                            //�ײ�const
	//const auto j2 = i,&k2 = i;                      //const int����   

	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;
	//std::cout << a << std::endl;		//3
	//std::cout << b << std::endl;		//4
	//std::cout << c << std::endl;		//3
	//std::cout << d << std::endl;		//3
	//d++;
	//c++;
	//std::cout << c << std::endl;		//4
	//std::cout << d << std::endl;		//4
	//std::cout << a << std::endl;		//4
	
	//Book book1, book2;
	//std::cout << "�������������۸�����: " << std::endl;
	//std::cin >> book1.name >> book1.price >> book1.sales_volume;       //����book1���ݳ�Ա��ֵ
	//book1.revenue = book1.price*book1.sales_volume;                            //�������۶�
	////std::cout << "����: " << book1.name << "�۸�: " << book1.price << "����: " << book1.sales_volume << "���۶�: " << book1.revenue << std::endl;
	//std::cout << "�������������۸�����: " << std::endl;
	//std::cin >> book2.name >> book2.price >> book2.sales_volume;       //����book2���ݳ�Ա��ֵ
	//book2.revenue = book2.price*book2.sales_volume;                            //�������۶�
	//if (book1.name == book2.name)                 //������ͬ
	//{
	//	unsigned total_cnt = book1.sales_volume + book2.sales_volume;      //����������
	//	if (total_cnt != 0)                               //���������Ϊ0
	//	{
	//		double total_revenue = book1.revenue + book2.revenue;          //���۶����
	//		std::cout << "����: " << book1.name << " ����: " << total_cnt << " �����۶�: " << total_revenue << " ƽ���۸�: " << total_revenue / total_cnt << std::endl;
	//	}
	//	else              //����Ϊ0
	//		std::cout << "����Ϊ0" << std::endl;
	//	return 0;
	//}
	//else
	//{
	//	std::cerr << "������ͬ" << std::endl;
	//	return -1;
	//}
	
	Book book1;                //��һ�����ۼ�¼
	Book book2;               //��ʱ��������ۼ�¼
	unsigned sum_sales = 0;            //������
	double sum_revenue = 0;            //�����۶�
	if (std::cin >> book1.name >> book1.sales_volume >> book1.price)      //���������
	{
		book1.revenue = book1.price*book1.sales_volume;                //��һ�����ۼ�¼�����۶�
		sum_sales = book1.sales_volume;                                          //��һ�����ۼ�¼������Ϊ������
		sum_revenue = book1.revenue;                                             //��һ����¼�ĵ����۶�Ϊ�����۶�
		while (std::cin >> book2.name >> book2.sales_volume >> book2.price)
		{
			book2.revenue = book2.price*book2.sales_volume;              //��ʱ���ۼ�¼�����۶�
			if (book1.name == book2.name)                                       //���������ͬ
			{
				sum_revenue += book2.revenue;                                     //���۶����
				sum_sales += book2.sales_volume;                                //�������
			}
			else
			{
				std::cout << book1.name <<" "<< sum_sales <<" "<< sum_revenue <<" "<< sum_revenue / sum_sales << std::endl;  //���� ���� ���۶� ƽ���۸�
				sum_revenue = book2.revenue;                             //���۶ʼͳ����һ��
				sum_sales = book2.sales_volume;                                  //������ʼͳ����һ��
				book1 = book2;                                //������һ��ͳ��
			}
		}
		std::cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << std::endl;   //�������� ���� ���۶� ƽ���۸�
	}
	else
	{
		std::cerr << "�����ۼ�¼" << std::endl;
		return -1;
	}
	return 0;
}