#include<iostream>
#include"Sales_item.h"

int main()
{
	/*�����������*/
	/*std::cout << "������������: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << v1 << "��" << v2 << "�ĺ�Ϊ: " << v1 + v2 << std::endl;*/

	/*�����������*/
	/*std::cout << "Hello world" << std::endl;
	std::cout << "����������ֵ: " << std::endl;
	int a1, a2;
	std::cin >> a1 >> a2;
	std::cout << a1;
	std::cout << "*";
	std::cout << a2;
	std::cout << "=";
	std::cout << a1 * a2;
	std::cout << std::endl;*/


	//std::cout << "/*";
	//std::cout << "*/" << std::endl;
	//std::cout <</*"*/"/*"/*"*/;

	///*��1-10����֮��--while*/
	//int sum = 0;
	//int val = 1;
	//while (val <= 10)                  //val>10��ѭ����ֹ
	//{
	//	sum += val;                      //��sum+val����sum
	//	val++;                               //��val++
	//}
	//std::cout << "1-10֮��Ϊ: " << sum << std::endl;

	///*��50-100����֮��--while*/
	//int sum = 0;
	//int val = 50;
	//while (val <= 100)
	//{
	//	sum += val;
	//	val++;
	//}
	//std::cout << "50-100����֮��Ϊ: " << sum << std::endl;

	///*��ӡ10��0֮�������--while*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	std::cout << num<<" " ;
	//	num--;                                  //ʹ�õݼ������
	//}
	//std::cout << std::endl;

	///*����������������ӡ��������֮�����������--while*/
	//std::cout << "��������������: "<<std::endl;
	//int v1, v2;
	//std::cin >> v1>>v2;
	//while (v1 <= v2)
	//{
	//	std::cout << v1 << " ";
	//	v1++;
	//}
	//std::cout << std::endl;

	///*��1-10����֮��--for*/
	//int sum = 0;
	//for (int val = 1; val <= 10; val++)
	//{
	//	sum = sum + val;
	//}
	//std::cout << "1-10����֮��Ϊ: " << sum << std::endl;
	
	///*��50-100������֮��--for*/
	//int sum = 0;
	//for (int val = 50; val <= 100; val++)
	//{
	//	sum += val;
	//}
	//std::cout << "50-100������֮��Ϊ: " << sum << std::endl;

	///*��ӡ10-0֮�������--for*/
	//for (int num = 10; num >= 0; num--)
	//{
	//	std::cout << num << " ";
	//}
	//std::cout << std::endl;

	///*����������������ӡ��������֮�����������*/
	//int v1, v2;
	//std::cout << "��������������: " << std::endl;
	//std::cin >> v1 >> v2;
	//for (; v1 <= v2; v1++)
	//{
	//	std::cout << v1 << " ";
	//}
	//std::cout << std::endl;

	///*���û����������*/
	//int sum = 0;
	//int value = 0;
	//while (std::cin >> value)
	//	sum += value;
	//std::cout << sum << std::endl;

	///*ͳ��������ֵ�ĳ��ִ���*/
	//int currVal, val = 0;                    //currVal������ͳ�Ƶ��������������ֵ����val
	//if (std::cin >> currVal)                //��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
	//{
	//	int count = 1;                      //�������ڴ���ĵ�ǰֵ�ĸ���
	//	while (std::cin >> val)           //��ȡʣ�����
	//	{
	//		if (val == currVal)                //���ֵ��ͬ��count++
	//			count++;
	//		else                                    //�����ӡǰһ��ֵ�ĳ��ִ���
	//		{
	//			std::cout << currVal << "������" << count << "��" << std::endl;
	//			currVal = val;                 //����ֵ��Ϊ����ͳ�Ƶ���
	//			count = 1;                      //���ü�����
	//		}
	//	}
	//	std::cout << currVal << "������" << count << "��" << std::endl;    //��ӡ���һ��ֵ�ĳ��ִ���
	//}

	///*��ӡһ����Χ�ڵ�������һ�����ȵڶ�����С*/
	//int v1, v2;
	//std::cout << "������������: " << std::endl;
	//std::cin >> v1 >> v2;
	//if (v1 < v2)
	//{
	//	while (v1 <= v2)
	//	{
	//		std::cout << v1 << " ";
	//		v1++;
	//	}
	//	std::cout << std::endl;
	//}

	///*��ȡһ���鼮���ۼ�¼�����*/
	//Sales_item book;
	//std::cin >> book;
	//std::cout << book << std::endl;

	///*��ȡ�������к���ͬ��Sales_item����������ǵĺ�*/
	//Sales_item book1, book2;
	//std::cin >> book1 >> book2;
	//std::cout << book1 + book2 << std::endl;

	///*��ȡ������к���ͬ��Sales_item���������¼��*/
	//Sales_item book1, book2, book3;
	//std::cin >> book1 >> book2 >> book3;
	//std::cout << book1 + book2 + book3 << std::endl;

	///*��ȡ�������ۼ�¼����ͳ��ÿ�������м������ۼ�¼*/
	//Sales_item book;
	//Sales_item temp;
	//if (std::cin >> temp)
	//{
	//	int count = 1;
	//	while (std::cin >> book)
	//	{
	//		if (book.isbn() == temp.isbn())
	//			count++;
	//		else
	//		{
	//			std::cout << temp.isbn() << "��" << count << "����¼" << std::endl;
	//			count = 1;
	//			temp = book;
	//		}
	//	}
	//	std::cout << temp.isbn() << "��" << count << "����¼" << std::endl;
	//}

	/*������*/
	Sales_item total;               //����͵ı���
	Sales_item trans;              //������һ����¼�ı���
	if (std::cin >> total)          //�����һ����¼��ȷ�������ݴ���
	{
		while (std::cin >> trans)        //���벢����ʣ�ཻ�׼�¼
		{
			if (total.isbn() == trans.isbn())      //���������ͬ����Ӹ��������ܶ�
				total += trans;
			else                                      
			{
				std::cout << total << std::endl;           //��ӡǰһ�����еĽ��
				total = trans;                                        //���ڱ�ʾ��һ�����е����۶�
			}
		}
		std::cout << total << std::endl;                 //��ӡ���һ�����еĽ��
	}
	else                                      //û�����ۼ�¼
	{
		std::cout << "�����ۼ�¼" << std::endl;
		return -1;                     //����-1
	}
	return 0;
}