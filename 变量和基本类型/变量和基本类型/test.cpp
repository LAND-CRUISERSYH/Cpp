#include<iostream>

int reused = 42;
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

	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;
}