#define _CRT_SECURE_NO_WARNINGS

////叠筐 （HDU 2074）有小难度
//#include<iostream>
//using namespace std;
//int main()
//{
//	char arr[100][100] = { 0 };
//	int n = 0, count = 0;
//	char first = { 0 }, last = { 0 }, character = { 0 };
//
//	//%d %lf ..忽略空白, %c不忽略空白, 空格%c忽略空白
//	//scanf("%d %c %c ", &n, &in, &out)
//
//	while (cin >> n >> first >> last)
//	{
//		memset(arr, 0, 10000);
//		int i = 0;
//		for (int i = 0; i <= (n - 1) / 2; i++)   //注意边界，是不是<=
//		{
//			int j = 0;
//			if (count % 2 == 0)
//				character = first;
//			else
//				character = last;
//			for (j = i; j <= n - i - 1; j++)   //注意边界，是不是<=
//			{
//				arr[i][j] = character;
//				arr[j][i] = character;
//				arr[n - i - 1][j] = character;
//				arr[j][n - i - 1] = character;
//			}
//			count++;
//		}
//		arr[0][0] = ' ';
//		arr[0][n-1] = ' ';
//		arr[n-1][0] = ' ';
//		arr[n-1][n-1] = ' ';
//		for (int k = 0; k < n; k++)
//		{
//			cout << arr[k] << endl;
//		}
//	}
//}