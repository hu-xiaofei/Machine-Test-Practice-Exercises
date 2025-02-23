#define _CRT_SECURE_NO_WARNINGS

//反序数 （清华大学复试上机题）

//#include<iostream>
//int main()
//{
//	int a = 1, b = 0, c = 0, d = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			for (c = 0; c < 10; c++)
//			{
//				for (d = 0; d < 10; d++)
//				{
//					if (9 * (1000 * a + 100 * b + 10 * c + d) == (1000 * d + 100 * c + 10 * b + a))
//					{
//						std::cout << a << b << c << d << std::endl;
//					}
//				}
//			}
//		}
//	}
//}

//int Reverse(int n)
//{
//	int reverse = 0;
//	int remain;
//	while (true)
//	{
//		remain = n % 10;
//		n = n / 10;
//		reverse = reverse * 10 + remain;
//		if (n == 0) {
//			break;
//		}
//	}
//	return reverse;
//}
//
//int main()
//{
//	for (int n = 1000; n < 10000; n++)
//	{
//		if (9 * n == Reverse(n))
//			std::cout << n << std::endl;
//	}
//}