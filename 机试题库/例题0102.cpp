#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int count = 0;
	while (cin >> n)  //����while(scanf("%d",&n)!=EOF) Decimal��ʮ����
	{
		count = 0;
		while (n != 1)
		{
			if (n % 2 == 0)
				n = n / 2;
			else
			{
				n = 3 * n + 1;
				n = n / 2;
			}
			count++;
		}
		cout << count << endl;
	}
}