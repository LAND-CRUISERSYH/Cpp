#include<iostream>
#include<string>

using std::cin;                      //using声明，当我们使用名字cin时，从命名空间std中获取它
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
	cout << "请输入两个数: ";
	cin >> v1 >> v2;
	cout << v1 << v2 << endl;*/

	///*使用whlie循环将50到100的整数相加*/
	//int i = 50;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//cout << "50-100的整数之和为: " << sum << endl;

	///*使用while循环打印10-0之间的整数*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	cout << num << " ";
	//	num--;
	//}
	//cout << endl;

	///*提示用户输入两个整数，打印这两个整数所指定的范围内的所有整数*/
	//int v1, v2;
	//cout << "请输入两个整数: ";
	//cin >> v1 >> v2;
	//while (v1 <= v2)
	//{
	//	cout << v1 << " ";
	//	v1++;
	//}
	//cout << endl;

	///*书店程序*/
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
	//	cout << "无销售记录" << endl;
	//	return -1;
	//}

	//string s1;                                //默认初始化，s1是一个空串
	//string s2 = s1;                           //等价于s2(s1),s2是s1的副本
	//string s3 = "hello";                 //等价于s3("hello"),s3是字面值"value"的副本(除最后一个空字符)
	//string s4(10, 'c');                     //把s4初始化为由连续10个字符'c'组成的串

	return 0;
}