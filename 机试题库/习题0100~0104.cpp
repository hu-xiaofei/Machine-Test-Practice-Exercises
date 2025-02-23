#define _CRT_SECURE_NO_WARNINGS

//对称平方数1 （清华大学复试上机题）
//#include<iostream>
//
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
//	int sq = 0, re = 0;
//	for (int i = 0; i < 257; i++)
//	{
//		sq = i * i;
//		re = Reverse(sq);
//		if (sq==re)
//			std::cout << i << std::endl;
//	}
//}


//与7无关的数（北京大学复试上机题）
//#include<iostream>
//
//int main() {
//    int n = 0;
//    while (true)
//    {
//        int tot = 0;
//        std::cin >> n;     //这种方法不好跳出循环
//        for (int i = 1; i < n + 1; i++) {
//            if ((i % 7 != 0) && (i % 10 != 7))
//                tot = tot + i * i;
//        }
//        std::cout << tot << std::endl;
//    }
//}

// deepseek法
//#include <iostream>
//using namespace std;
//bool isRelatedToSeven(int num) {
//    if (num % 7 == 0) return true;  // 能被7整除
//    while (num > 0) {
//        if (num % 10 == 7) return true;  // 某一位是7
//        num /= 10;
//    }
//    return false;
//}
//
//int main() {
//    int n;
//    while (cin >> n) {  // 读取输入的n***而且方便跳出循环
//        int tot = 0;
//        for (int i = 1; i <= n; i++) {
//            if (!isRelatedToSeven(i)) {  // 如果与7无关
//                tot += i * i;  // 累加平方和
//            }
//        }
//        cout << tot << endl;  // 输出结果
//    }
//    return 0;
//}


//约数的个数（清华大学复试上机题）
//#include<iostream>
//#include <vector>
//#include <cmath>
//
//int howmuch(int a)
//{
//	//原方法通过遍历从1到a的所有整数来统计约数的个数，低效，遍历到根号a就够了
//	//int count = 0;
//	//for (int i = 1; i < a + 1; i++)
//	//{
//	//	if ((a % i) == 0)
//	//		count++;
//	//}
//	//return count;
//	if (a == 1) return 1;
//	int count = 0;
//	for (int i = 1; i <= sqrt(a); i++) {  //遍历到根号a就够了
//		if (a % i == 0) {
//			if (a / i == i) {
//				count++;
//			}
//			else {
//				count += 2;
//			}
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 1;
//	std::cin >> n;  // 读取整数 n
//	std::vector<int> nums(n);
//	//用原生数组，数组大小必须为常数除非使用 C99 的变长数组（VLA）
//	//如： int nums[n];  变长数组（VLA），仅在支持 VLA 的编译器中有效
//	//可以用vector或者使用动态内存分配（new 和 delete）
//	//如：int* nums = new int[n]; delete[] nums;
//	for (int i = 0; i < n; i++) {
//		std::cin >> nums[i];  // 读取 n 个整数
//	}
//	for (int i=0; i<n; i++)
//	{
//		std::cout << howmuch(nums[i]) << std::endl;
//	}
//}


//水仙花数（中南大学复试上机题）
//#include<iostream>
//using namespace std;
//
//bool IsLiNum(int n)
//{
//	int ori = n;
//	int sum = 0;
//	while (n != 0)
//	{
//		sum = sum + (n % 10) * (n % 10) * (n % 10);
//		n = n / 10;
//	}
//	if (ori == sum)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int m, n;
//	while (true) 
//	{
//		cin >> m;
//		cin >> n;
//		if (m == 0 && n == 0)
//			break;
//		int count = 0;
//		for (m; m < n + 1; m++)
//		{
//			if (IsLiNum(m) == true)
//			{
//				cout << m << " ";
//				count = 1;
//			}
//		}
//		if (count == 0)
//			cout << "no" << endl;
//		else
//			cout<<endl;
//	}
//}


//old bill（上海交通大学复试上机题）

//自己的解，丑陋不堪(ಥ_ಥ)
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int N = 0, X = 0, Y = 0, Z = 0;
//	int first = 0, last = 0, tot = 0, count=0;
//	cin >> N;
//	cin >> X >> Y >> Z;
//	//std::cin 会自动跳过空格和换行符，因此输入时可以用空格分隔数据
//	for (int i = 1; i <= 99999 / N; i++)//范围
//	{
//		tot = N * i;
//
//		//if (tot > 99999)
//		//	break;
//		if (tot < 10000 || tot > 99999) 
//			continue;
//
//		tot = tot / 10;
//
//		if (tot % 10 != Z)
//			continue; // 跳到下一次循环,不是break,会直接跳出循环(°ロ°) !
//		tot = tot / 10;
//
//		if (tot % 10 != Y)
//			continue;
//		tot = tot / 10;
//
//		if (tot % 10 != X)
//			continue;
//		tot = tot / 10;
//
//		count =  i;//暂定的最高单价
//		last = (N*i) % 10;
//		first = tot % 10;
//	}
//	if (first == 0 && last == 0 && count == 0)
//		cout << 0 << endl;
//	else
//		cout << first << " " << last << " " << count << endl;
//}

//AI解，十分甚至九分的优雅(❤ω❤)
#include <iostream>
using namespace std;

void findTurkeyPrice(int N, int X, int Y, int Z) {
	int firstDigit = 0, lastDigit = 0, maxPricePerTurkey = 0;
	bool found = false;

	for (int i = 1; i <= 99999 / N; i++) {
		int totalPrice = N * i;

		if (totalPrice < 10000 || totalPrice > 99999) {
			continue;
		}

		int zDigit = (totalPrice / 10) % 10;
		int yDigit = (totalPrice / 100) % 10;
		int xDigit = (totalPrice / 1000) % 10;

		if (xDigit == X && yDigit == Y && zDigit == Z) {
			maxPricePerTurkey = i;
			firstDigit = totalPrice / 10000;
			lastDigit = totalPrice % 10;
			found = true;
		}
	}

	if (found) {
		cout << firstDigit << " " << lastDigit << " " << maxPricePerTurkey << endl;
	}
	else {
		cout << 0 << endl;
	}
}

int main() {
	int N, X, Y, Z;
	cin >> N;
	cin >> X >> Y >> Z;

	findTurkeyPrice(N, X, Y, Z);

	return 0;
}
