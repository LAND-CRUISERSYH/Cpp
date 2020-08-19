#include<iostream>
#include"Sales_item.h"

int main()
{
	/*两个整数相加*/
	/*std::cout << "请输入两个数: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << v1 << "和" << v2 << "的和为: " << v1 + v2 << std::endl;*/

	/*两个整数相乘*/
	/*std::cout << "Hello world" << std::endl;
	std::cout << "请输入两个值: " << std::endl;
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

	///*求1-10整数之和--while*/
	//int sum = 0;
	//int val = 1;
	//while (val <= 10)                  //val>10，循环终止
	//{
	//	sum += val;                      //将sum+val赋予sum
	//	val++;                               //将val++
	//}
	//std::cout << "1-10之和为: " << sum << std::endl;

	///*求50-100整数之和--while*/
	//int sum = 0;
	//int val = 50;
	//while (val <= 100)
	//{
	//	sum += val;
	//	val++;
	//}
	//std::cout << "50-100整数之和为: " << sum << std::endl;

	///*打印10到0之间的整数--while*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	std::cout << num<<" " ;
	//	num--;                                  //使用递减运算符
	//}
	//std::cout << std::endl;

	///*输入两个整数，打印两个整数之间的所有整数--while*/
	//std::cout << "请输入两个整数: "<<std::endl;
	//int v1, v2;
	//std::cin >> v1>>v2;
	//while (v1 <= v2)
	//{
	//	std::cout << v1 << " ";
	//	v1++;
	//}
	//std::cout << std::endl;

	///*求1-10整数之和--for*/
	//int sum = 0;
	//for (int val = 1; val <= 10; val++)
	//{
	//	sum = sum + val;
	//}
	//std::cout << "1-10整数之和为: " << sum << std::endl;
	
	///*求50-100的整数之和--for*/
	//int sum = 0;
	//for (int val = 50; val <= 100; val++)
	//{
	//	sum += val;
	//}
	//std::cout << "50-100的整数之和为: " << sum << std::endl;

	///*打印10-0之间的整数--for*/
	//for (int num = 10; num >= 0; num--)
	//{
	//	std::cout << num << " ";
	//}
	//std::cout << std::endl;

	///*输入两个整数，打印两个整数之间的所有整数*/
	//int v1, v2;
	//std::cout << "请输入两个整数: " << std::endl;
	//std::cin >> v1 >> v2;
	//for (; v1 <= v2; v1++)
	//{
	//	std::cout << v1 << " ";
	//}
	//std::cout << std::endl;

	///*对用户输入数求和*/
	//int sum = 0;
	//int value = 0;
	//while (std::cin >> value)
	//	sum += value;
	//std::cout << sum << std::endl;

	///*统计输入数值的出现次数*/
	//int currVal, val = 0;                    //currVal是正在统计的数，将读入的新值存入val
	//if (std::cin >> currVal)                //读取第一个数，并确保确实有数据可以处理
	//{
	//	int count = 1;                      //保存正在处理的当前值的个数
	//	while (std::cin >> val)           //读取剩余的数
	//	{
	//		if (val == currVal)                //如果值相同将count++
	//			count++;
	//		else                                    //否则打印前一个值的出现次数
	//		{
	//			std::cout << currVal << "出现了" << count << "次" << std::endl;
	//			currVal = val;                 //将新值设为正在统计的数
	//			count = 1;                      //重置计数器
	//		}
	//	}
	//	std::cout << currVal << "出现了" << count << "次" << std::endl;    //打印最后一个值的出现次数
	//}

	///*打印一个范围内的数，第一个数比第二个数小*/
	//int v1, v2;
	//std::cout << "请输入两个数: " << std::endl;
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

	///*读取一组书籍销售记录并输出*/
	//Sales_item book;
	//std::cin >> book;
	//std::cout << book << std::endl;

	///*读取两个序列号相同的Sales_item对象，输出它们的和*/
	//Sales_item book1, book2;
	//std::cin >> book1 >> book2;
	//std::cout << book1 + book2 << std::endl;

	///*读取多个序列号相同的Sales_item对象，输出记录和*/
	//Sales_item book1, book2, book3;
	//std::cin >> book1 >> book2 >> book3;
	//std::cout << book1 + book2 + book3 << std::endl;

	///*读取多条销售记录，并统计每个序列有几条销售记录*/
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
	//			std::cout << temp.isbn() << "有" << count << "条记录" << std::endl;
	//			count = 1;
	//			temp = book;
	//		}
	//	}
	//	std::cout << temp.isbn() << "有" << count << "条记录" << std::endl;
	//}

	/*书店程序*/
	Sales_item total;               //保存和的变量
	Sales_item trans;              //保存下一条记录的变量
	if (std::cin >> total)          //读入第一条记录，确保有数据处理
	{
		while (std::cin >> trans)        //读入并处理剩余交易记录
		{
			if (total.isbn() == trans.isbn())      //如果序列相同则相加更新销售总额
				total += trans;
			else                                      
			{
				std::cout << total << std::endl;           //打印前一条序列的结果
				total = trans;                                        //现在表示下一条序列的销售额
			}
		}
		std::cout << total << std::endl;                 //打印最后一条序列的结果
	}
	else                                      //没有销售记录
	{
		std::cout << "无销售记录" << std::endl;
		return -1;                     //返回-1
	}
	return 0;
}