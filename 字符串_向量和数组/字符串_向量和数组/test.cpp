#include<iostream>
#include<string>

using std::cin;                      //using������������ʹ������cinʱ���������ռ�std�л�ȡ��
using std::cout;
using std::endl;
using std::string;

//struct Book
//{
//	string name;
//	double price = 0;
//	unsigned sales_volume = 0;
//	double revenue = 0;
//};
int main()
{
	/*int i = 0;
	cin >> i;
	std::cout << i << std::endl;
	return 0;*/

	/*int v1, v2;
	cout << "������������: ";
	cin >> v1 >> v2;
	cout << v1 << v2 << endl;*/

	///*ʹ��whlieѭ����50��100���������*/
	//int i = 50;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//cout << "50-100������֮��Ϊ: " << sum << endl;

	///*ʹ��whileѭ����ӡ10-0֮�������*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	cout << num << " ";
	//	num--;
	//}
	//cout << endl;

	///*��ʾ�û�����������������ӡ������������ָ���ķ�Χ�ڵ���������*/
	//int v1, v2;
	//cout << "��������������: ";
	//cin >> v1 >> v2;
	//while (v1 <= v2)
	//{
	//	cout << v1 << " ";
	//	v1++;
	//}
	//cout << endl;

	///*������*/
	//Book book1, book2;
	//unsigned sum_sales;
	//double sum_revenue;
	//if (cin >> book1.name >> book1.sales_volume >> book1.price)
	//{
	//	book1.revenue = book1.price*book1.sales_volume;
	//	sum_sales = book1.sales_volume;
	//	sum_revenue = book1.revenue;
	//	while (cin >> book2.name >> book2.sales_volume >> book2.price)
	//	{
	//		book2.revenue = book2.price*book2.sales_volume;
	//		if (book1.name == book2.name)
	//		{
	//			sum_sales += book2.sales_volume;
	//			sum_revenue += book2.revenue;
	//		}
	//		else
	//		{
	//			cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << endl;
	//			sum_sales = book2.sales_volume;
	//			sum_revenue = book2.revenue;
	//			book1 = book2;
	//		}
	//	}
	//	cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << endl;
	//}
	//else
	//{
	//	cout << "�����ۼ�¼" << endl;
	//	return -1;
	//}

	//string s1;                                //Ĭ�ϳ�ʼ����s1��һ���մ�
	//string s2 = s1;                           //�ȼ���s2(s1),s2��s1�ĸ���
	//string s3 = "hello";                 //�ȼ���s3("hello"),s3������ֵ"value"�ĸ���(�����һ�����ַ�)
	//string s4(10, 'c');                     //��s4��ʼ��Ϊ������10���ַ�'c'��ɵĴ�

	return 0;
}