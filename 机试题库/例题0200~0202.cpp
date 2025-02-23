#define _CRT_SECURE_NO_WARNINGS
//日期问题简介
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int &year, int &month, int &day)
////&的一些用法：取地址：&x ，引用声明：int& ref = x ，按引用传递：void func(int& x) 等等
//{
//	//储存月份和天数的关系
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //是否是闰年
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}

////今年的第几天？ （清华大学复试上机题）
//#include<iostream>
//#include<string.h>
//using namespace std;
////从一月一日连续调用NextDay函数，一直到所求日期，看总共调用了几次
//void NextDay(int& year, int& month, int& day, int&count)
////&的一些用法：取地址：&x ，引用声明：int& ref = x ，按引用传递：void func(int& x) 等等
//{
//	//储存月份和天数的关系
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //是否是闰年
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//	count++;
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	while(cin >> year >> month >> day)
//	{	
//		int fmonth = 1, fday = 1,count=1;
//		while (true)
//		{
//			NextDay(year, fmonth, fday, count);
//			if (fmonth == month && fday == day)
//				break;
//		}
//		cout << count << endl;
//	}
//}


//打印日期 （华中科技大学复试上机题）
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int &year, int &month, int &day)
//{
//	//储存月份和天数的关系
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //是否是闰年
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}
//int main()
//{
//	int year = 0, n = 0;
//	while (cin >> year >> n)
//	{
//		int month = 1, day = 1;
//		for (int i = 1; i < n; i++)
//		{
//			NextDay(year, month, day);
//		}
//		//cout << year;
//		//if (month < 10)
//		//	cout << "-" << 0 << month;
//		//else
//		//	cout << "-" << month;
//		//if (day < 10)
//		//	cout << "-" << 0 << day << endl;
//		//else
//		//	cout << "-" << day << endl;
//		//可以使用printf来实现
//		//ex：printf %02d  0代表填充0 2代表最小宽度2
//		printf("%04d-%02d-%02d\n", year, month, day);
//	}
//}


////日期累加 （北京理工大学复试上机题）
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int& year, int& month, int& day)
//{
//	//储存月份和天数的关系
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //是否是闰年
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}
//int main()
//{
//	int m = 0;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int year = 0, month = 0, day = 0, plus = 0;
//		cin >> year >> month >> day >> plus;
//		for (int j = 0; j < plus; j++)
//		{
//			NextDay(year, month, day);
//		}
//		cout << year;
//		if (month < 10)
//			cout << "-" << 0 << month;
//		else
//			cout << "-" << month;
//		if (day < 10)
//			cout << "-" << 0 << day << endl;
//		else
//			cout << "-" << day << endl;
//	}
//}