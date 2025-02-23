#define _CRT_SECURE_NO_WARNINGS
//打印数字菱形
//法一：列表分析，按行分解
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	char str[1000];  
//	//char a = 'A'(盛放一个字符,只能是一个），const char* str = "A"(盛放一个字符串）
//	memset(str, 0, 1000);  
//	// 将 str 数组的所有元素初始化为 0
//	int n = 0;
//	cin >> n;
//	//scanf("%d", &n);
//	//菱形上半部分
//	for (int i = 0; i <= n; i++)
//	{
//		memset(str, 0, 1000);
//		int j = 0;
//		//菱形每行前的空格
//		for (j = 0; j < 2 * n - 2 * i; j++)
//		{
//			str[j] = ' ';  //使用 "" 表示字符串（多个字符），使用 '' 表示单个字符
//		}
//		//菱形每行前半部分递增的数字
//		for (int k = 0; k <= i; k++) 
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		//菱形每行后半部分递减的数字
//		for (int k=i-1;k>=0;k--)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		cout << str << endl;
//		//printf("%s\n", str);
//	};
//	//菱形下半部分
//	for (int i = n+1; i <= 2*n; i++)
//	{
//		memset(str, 0, 1000);
//		int j = 0;
//		//菱形每行前的空格
//		for (j = 0; j < 2 * i - 2*n; j++)
//		{
//			str[j] = ' ';
//		}
//		//菱形每行前半部分递增的数字
//		for (int k = 0; k <= 2*n-i; k++)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		//菱形每行后半部分递减的数字
//		for (int k = 2*n-i - 1; k >= 0; k--)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		cout << str << endl;
//		//printf("%s\n", str);
//	}
//}

//法二：利用字符串数组（二维数组)可以按列分解
#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
	char arr[100][100] = { 0 };
	int n = 0;
	cin >> n;
	//菱形上半部分
	for (int i = 0; i <= n; i++)
	{
		int j = 0;
		//菱形每行前的空格
		for (j = 0; j < 2 * n - 2 * i; j++)
		{
			arr[i][j] = ' ';
		}
		//菱形每行前半部分递增的数字
		for (int k = 0; k <= i; k++)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
		//菱形每行后半部分递减的数字
		for (int k = i - 1; k >= 0; k--)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
	};
	//菱形下半部分
	for (int i = n + 1; i <= 2 * n; i++)
	{
		int j = 0;
		//菱形每行前的空格
		for (j = 0; j < 2 * i - 2 * n; j++)
		{
			arr[i][j] = ' ';
		}
		//菱形每行前半部分递增的数字
		for (int k = 0; k <= 2 * n - i; k++)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
		//菱形每行后半部分递减的数字
		for (int k = 2 * n - i - 1; k >= 0; k--)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
	}
	for (int i = 0; i < 2 * n + 1; i++)
	{
		cout << arr[i] << endl;
	}
}
