#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int A = 0, B = 0, sum = 0, tempA = 0, tempB = 0;
//	cin >> A >> B;
//
//	while (A != 0)
//	{
//		tempB = B;
//		tempA = A % 10;
//		while (tempB != 0)
//		{
//			sum = sum + tempA * (tempB % 10);
//			tempB = tempB / 10;
//		}
//		A = A / 10;
//	}
//	cout << sum << endl;
//}
////法二：将A和B的每一位提取出来并存储在一个数组中，然后使用双重循环来计算总和
//#include<vector>
//int main() {
//    int A, B;
//    cin >> A >> B;
//    long long totalSum = 0;
//
//    vector<int> digitsA, digitsB;
//
//    while (A != 0) {
//        digitsA.push_back(A % 10);
//        A /= 10;
//    }
//
//    while (B != 0) {
//        digitsB.push_back(B % 10);
//        B /= 10;
//    }
//
//    for (int digitA : digitsA) {
//        for (int digitB : digitsB) {
//            totalSum += digitA * digitB;
//        }
//    }
//
//    cout << totalSum << endl;
//    return 0;
//}


//递推数列（清华大学复试上机题）
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a0 = 0, a1 = 1, p = 0, q = 0, k = 0;
//	cin >> a0 >> a1 >> p >> q >> k;
//	int* nums = new int[k+1];
//	nums[0] = a0;
//	nums[1] = a1;
//	int temp = 2;
//	while (temp < k + 1)
//	{
//		nums[temp] = (p * nums[temp - 1] + q * nums[temp - 2])% 10000;
//		//在计算每个an时，可以直接对结果取模10000，这样可以防止数值溢出，并且减少最后取模的计算量
//		temp++;
//	}
//	cout << nums[k] % 10000 << endl;  //取模是%
//	delete[] nums;
//}


//学分绩点（北京大学复试上机题）
//#include<iostream>
//#include <iomanip> // 包含 setprecision 和 fixed
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	//float* XueFen = new float[n];
//	//int* FenShu = new int[n];
//	//float* JiDian = new float[n];
//	vector<float> XueFen(n);
//	vector<int> FenShu(n);
//	vector<float> JiDian(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> XueFen[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> FenShu[i];
//		if (FenShu[i] > 89)
//			JiDian[i] = 4.0 * XueFen[i];
//		else if (FenShu[i] > 84)
//			JiDian[i] = 3.7 * XueFen[i];
//		else if (FenShu[i] > 81)
//			JiDian[i] = 3.3 * XueFen[i];
//		else if (FenShu[i] > 77)
//			JiDian[i] = 3.0 * XueFen[i];
//		else if (FenShu[i] > 74)
//			JiDian[i] = 2.7 * XueFen[i];
//		else if (FenShu[i] > 71)
//			JiDian[i] = 2.3 * XueFen[i];
//		else if (FenShu[i] > 67)
//			JiDian[i] = 2.0 * XueFen[i];
//		else if (FenShu[i] > 63)
//			JiDian[i] = 1.5 * XueFen[i];
//		else if (FenShu[i] > 59)
//			JiDian[i] = 1.0 * XueFen[i];
//		else
//			JiDian[i] = 0;
//	}
//	float sumJiDian = 0, sumXueFen = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sumJiDian += JiDian[i];
//		sumXueFen += XueFen[i];
//	}
//	cout << fixed << setprecision(2) << sumJiDian / sumXueFen << endl;
//	//delete[]XueFen, FenShu, JiDian;
//}
//
////AI写法
//#include <iostream>
//#include <iomanip>
//#include <vector>
//
//using namespace std;
//
//float calculateGPA(int score) {
//	if (score >= 90) return 4.0;
//	if (score >= 85) return 3.7;
//	if (score >= 82) return 3.3;
//	if (score >= 78) return 3.0;
//	if (score >= 75) return 2.7;
//	if (score >= 72) return 2.3;
//	if (score >= 68) return 2.0;
//	if (score >= 64) return 1.5;
//	if (score >= 60) return 1.0;
//	return 0.0;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector<float> XueFen(n);
//	vector<int> FenShu(n);
//	vector<float> JiDian(n);
//
//	for (int i = 0; i < n; ++i) {
//		cin >> XueFen[i];
//	}
//
//	for (int i = 0; i < n; ++i) {
//		cin >> FenShu[i];
//		JiDian[i] = calculateGPA(FenShu[i]) * XueFen[i];
//	}
//
//	float sumJiDian = 0, sumXueFen = 0;
//	for (int i = 0; i < n; ++i) {
//		sumJiDian += JiDian[i];
//		sumXueFen += XueFen[i];
//	}
//
//	cout << fixed << setprecision(2) << sumJiDian / sumXueFen << endl;
//
//	return 0;
//}


//买房子（北京大学复试上机题）
#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	int K = 0;
	while (cin >> N >> K)
	{
		int count = 0;
		double fangjia = 200;
		double jixu = 0;
		for (int i = 1; i < 22; i++)
		{
            //题意是房价第二年才涨（题目出得有点蠢）(；一_一)
			fangjia = ((100 + K) * fangjia) / 100.0;
			jixu += N;
			if (jixu >= fangjia)
			{
				count = 1;
				cout << i << endl;
				break;
			}
		}
		if (count == 0)
			cout << "Impossible" << endl;
	}

}
//AI解答：房价从第二年开始增长，因此在循环中需要判断 i > 1 时才更新房价
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, K;
    while (cin >> N >> K) {
        double housePrice = 200; // 初始房价
        double savings = 0;      // 初始积蓄
        int year = 0;            // 年份计数器
        bool canBuy = false;     // 是否能买房的标志

        for (int i = 1; i <= 21; ++i) {
            if (i > 1) {
                housePrice *= (100 + K) / 100.0; // 从第二年开始，房价每年增长
            }
            savings += N; // 每年积蓄增加 N 万

            if (savings >= housePrice) {
                year = i;    // 记录年份
                canBuy = true; // 设置标志
                break;       // 退出循环
            }
        }

        if (canBuy) {
            cout << year << endl; // 输出年份
        }
        else {
            cout << "Impossible" << endl; // 输出 Impossible
        }
    }
    return 0;
}