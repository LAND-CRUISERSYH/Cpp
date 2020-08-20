#include<iostream>

int main()
{
	///*当算数表达式中既有无符号数又有int值时，int值就会转换成无符号数*/
	//unsigned u = 10;
	//int i = -42;
	//std::cout << i + i << std::endl;
	//std::cout << u + i << std::endl;

	/*读程序写结果*/
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2<< std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}