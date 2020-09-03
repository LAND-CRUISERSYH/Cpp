#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	//cout << 5 + 10 * 20 / 2 << endl;

	/*vector<int> ivec = { 0,2,4,6,8 };
	cout << *ivec.begin() << endl;
	cout << *ivec.begin() + 1 << endl;
	cout << *(ivec.begin()) << endl;
	cout << (*ivec.begin()) + 1 << endl;*/

	/*int i = 0;
	cout << i << " " << ++i << endl;*/

	/*short value = 32767;
	value += 1;
	cout << value << endl;*/

	/*int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << a << endl;*/

	//cout << -30 * 3 + 21 / 5 << endl;                //-86
	//cout << -30 + 3 * 21 / 5 << endl;               //-18
	//cout << 30 / 3 * 21 % 5 << endl;                 //0
	//cout << -30 / 3 * 21 % 4 << endl;                //-2

	/*vector<int> ivec = { 1,2,3 };
	cout << ivec.empty() << endl;*/

	/*string s = "hello";
	string s2 = "hello" + s;*/

	//vector<string> svec = { "hello","world" };
	//vector<string>::iterator iter = svec.begin();
	//cout << *iter++ << endl;            //hello
	////cout << (*iter)++ << endl;                //错误
	////cout << *iter.empty() << endl;                //没有成员empty();
	//cout << iter->empty() << endl;             //0
	////cout << ++*iter << endl;                        //错误
	//cout << iter++->empty() << endl;

	///*使用条件运算符从vector<int>中找到奇数并翻倍*/
	//vector<int> ivec = { 1,5,9,3,4,5,6,2,7,8,6,4,70,42,66 };
	//for (auto i = ivec.begin(); i != ivec.end(); i++)
	//{
	//	if ((*i % 2 == 0) ? 1 : 0)
	//	{
	//		*i *= 2;
	//		cout << *i << " ";
	//	}
	//}
	
	/*string s = "word";
	cout << s.size();*/

	///*输出每一种内置类型所占空间的大小*/
	//cout << sizeof(int) << endl;                      //4
	//cout << sizeof(char) << endl;                   //1
	//cout << sizeof(float) << endl;                   //4
	//cout << sizeof(double) << endl;                //8
	//cout << sizeof(int *) << endl;                         //4
	//cout << sizeof(short) << endl;                   //2
	//cout << sizeof(bool) << endl;                    //1
	//cout << sizeof(long) << endl;                   //4
	//cout << sizeof(long long) << endl;                //8

	//int x[10];
	//int *p = x;
	//cout << sizeof(x) / sizeof(*x) << endl;               //10
	//cout << sizeof(p) / sizeof(*p) << endl;               //1

	vector<int> ivec = { 1,2,3,4,5,6,7,8,9 };
	vector<int>::size_type cnt = ivec.size()
}