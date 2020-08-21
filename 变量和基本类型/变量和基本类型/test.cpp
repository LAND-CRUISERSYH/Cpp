#include<iostream>
#include<string>
#include"Sales_data.h"

//int reused = 42;
//struct Book
//{
//	std::string s;           //书名
//	double price = 0;            //价格
//	unsigned sales_volume = 0;     //销量
// double revenue = 0;           //销售额
//};
//struct Book
//{
//	std::string name;        //书名
//	double price = 0;       //价格
//	unsigned sales_volume = 0;   //销量
//	double revenue = 0;          //销售额
//};
int main()
{
	///*当算数表达式中既有无符号数又有int值时，int值就会转换成无符号数*/
	//unsigned u = 10;
	//int i = -42;
	//std::cout << i + i << std::endl;
	//std::cout << u + i << std::endl;

	///*读程序写结果*/
	//unsigned u = 10, u2 = 42;
	//std::cout << u2 - u << std::endl;
	//std::cout << u - u2<< std::endl;
	//int i = 10, i2 = 42;
	//std::cout << i2 - i << std::endl;
	//std::cout << i - i2 << std::endl;
	//std::cout << i - u << std::endl;
	//std::cout << u - i << std::endl;

	///*函数内部不宜定义与全局变量同名的新变量*/
	//int unqiue = 0;                               //拥有块作用域
	//std::cout << reused << " " << unqiue << std::endl;            //42 0
	//int reused = 0;
	//std::cout << reused << " " << unqiue << std::endl;            //(局部变量覆盖全局变量)0 0
	//std::cout << ::reused << " " << unqiue << std::endl;           //(显示访问全局变量)42 0

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

	///*更改指针的值以及指针所指对象的值*/
	//int a = 5, *p = &a;
	//int b = 6, *p1 = &b;
	//p = p1;                                              //更改指针的值
	//std::cout << *p << std::endl;
	//*p1 = 10;
	//std::cout << b << std::endl;              //更改指针所指向对象的值

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
	
	//int i = 0, &r = i;                           //r为变量i的引用
	//auto a = r;                                 //a的类型为int，值为0
	//const int ci = i, &cr = ci;          //ci的类型为const int(顶层const),值为0；cr为ci的引用，类型为const int
	//auto b = ci;                             //b的类型为int(顶层const被忽略)，值为0
	//auto c = cr;                             //c的类型为int(顶层const被忽略)，值为0
	//auto d = &i;                           //d的类型为int *，值为i的地址
	//auto e = &ci;                         //e是一个指向整型常量的指针,值为ci的地址
	//const auto f = ci;                   //f的类型为const int
	//auto &g = ci;                      //g是一个整型常量引用，绑定到ci上
	//std::cout << a << std::endl;        //0
	//a = 42;
	//std::cout << a << std::endl;           //42
	//std::cout << b << std::endl;          //0
	//b = 42;
	//std::cout << b << std::endl;          //42
	//std::cout << c << std::endl;          //0
	//c = 42;
	//std::cout << c << std::endl;          //42
	//std::cout << d << std::endl;          //i的地址
	//d = 42;
	//std::cout << d << std::endl;          //不能将int类型赋值给int *类型的实体
	//std::cout << e << std::endl;          //ci的地址
	//e = 42;
	//std::cout << e << std::endl;          //不能将int类型赋值给const int*类型
	//std::cout << g << std::endl;          //ci的地址
	//g = 42;
	//std::cout << g << std::endl;          //g是一个整型常量引用，绑定到ci，不能改变

	//const int i = 42;                            //const int类型
	//auto j = i;                                   //int 类型
	//const auto &k = i;                     //const int 类型
	//auto *p = &i;                            //底层const
	//const auto j2 = i,&k2 = i;                      //const int类型   

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
	//std::cout << "请输入书名、价格、销量: " << std::endl;
	//std::cin >> book1.name >> book1.price >> book1.sales_volume;       //输入book1数据成员的值
	//book1.revenue = book1.price*book1.sales_volume;                            //计算销售额
	////std::cout << "书名: " << book1.name << "价格: " << book1.price << "销量: " << book1.sales_volume << "销售额: " << book1.revenue << std::endl;
	//std::cout << "请输入书名、价格、销量: " << std::endl;
	//std::cin >> book2.name >> book2.price >> book2.sales_volume;       //输入book2数据成员的值
	//book2.revenue = book2.price*book2.sales_volume;                            //计算销售额
	//if (book1.name == book2.name)                 //书名相同
	//{
	//	unsigned total_cnt = book1.sales_volume + book2.sales_volume;      //计算总销量
	//	if (total_cnt != 0)                               //如果销量不为0
	//	{
	//		double total_revenue = book1.revenue + book2.revenue;          //销售额相加
	//		std::cout << "书名: " << book1.name << " 销量: " << total_cnt << " 总销售额: " << total_revenue << " 平均价格: " << total_revenue / total_cnt << std::endl;
	//	}
	//	else              //销量为0
	//		std::cout << "销量为0" << std::endl;
	//	return 0;
	//}
	//else
	//{
	//	std::cerr << "书名不同" << std::endl;
	//	return -1;
	//}
	
	Book book1;                //第一条销售记录
	Book book2;               //临时保存的销售记录
	unsigned sum_sales = 0;            //总销量
	double sum_revenue = 0;            //总销售额
	if (std::cin >> book1.name >> book1.sales_volume >> book1.price)      //如果有输入
	{
		book1.revenue = book1.price*book1.sales_volume;                //第一条销售记录的销售额
		sum_sales = book1.sales_volume;                                          //第一条销售记录的销量为总销量
		sum_revenue = book1.revenue;                                             //第一条记录的的销售额为总销售额
		while (std::cin >> book2.name >> book2.sales_volume >> book2.price)
		{
			book2.revenue = book2.price*book2.sales_volume;              //临时销售记录的销售额
			if (book1.name == book2.name)                                       //如果书名相同
			{
				sum_revenue += book2.revenue;                                     //销售额相加
				sum_sales += book2.sales_volume;                                //销量相加
			}
			else
			{
				std::cout << book1.name <<" "<< sum_sales <<" "<< sum_revenue <<" "<< sum_revenue / sum_sales << std::endl;  //书名 销量 销售额 平均价格
				sum_revenue = book2.revenue;                             //销售额开始统计下一条
				sum_sales = book2.sales_volume;                                  //销量开始统计下一条
				book1 = book2;                                //进行下一次统计
			}
		}
		std::cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << std::endl;   //最后的书名 销量 销售额 平均价格
	}
	else
	{
		std::cerr << "无销售记录" << std::endl;
		return -1;
	}
	return 0;
}