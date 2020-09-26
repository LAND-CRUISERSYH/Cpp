#include<iostream>

using namespace std;

/*
	1.利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
	2.排序规则从大到小，排序算法为选择排序
	3.分别利用char数组和int数组进行测试
*/

//template<typename T>
//void sortSelect(T *arr,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int indexMax = i;              //认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[indexMax] < arr[j])
//				indexMax = j;           //更新最大值下标
//		}
//		if (indexMax != i)
//		{
//			T temp = arr[indexMax];
//			arr[indexMax] = arr[i];
//			arr[i] = temp;
//		}
//	}
//}
//
//template<typename T>
//void print(T *arr, int len)
//{
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << "  ";
//	cout << endl;
//}
//void test1()
//{
//	/*int arr[10] = { 8,9,6,2,5,7,4,3,1,0 };
//	print(arr, 10);
//	sortSelect(arr, 10);
//	print(arr, 10);*/
//
//	char arr[10] = "arksdjenc";
//	print(arr, 10);
//	sortSelect(arr, 10);
//	print(arr, 10);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}