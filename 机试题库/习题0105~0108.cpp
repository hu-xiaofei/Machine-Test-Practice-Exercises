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
////��������A��B��ÿһλ��ȡ�������洢��һ�������У�Ȼ��ʹ��˫��ѭ���������ܺ�
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


//�������У��廪��ѧ�����ϻ��⣩
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
//		//�ڼ���ÿ��anʱ������ֱ�ӶԽ��ȡģ10000���������Է�ֹ��ֵ��������Ҽ������ȡģ�ļ�����
//		temp++;
//	}
//	cout << nums[k] % 10000 << endl;  //ȡģ��%
//	delete[] nums;
//}


//ѧ�ּ��㣨������ѧ�����ϻ��⣩
//#include<iostream>
//#include <iomanip> // ���� setprecision �� fixed
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
////AIд��
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


//���ӣ�������ѧ�����ϻ��⣩
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
            //�����Ƿ��۵ڶ�����ǣ���Ŀ�����е����(��һ_һ)
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
//AI��𣺷��۴ӵڶ��꿪ʼ�����������ѭ������Ҫ�ж� i > 1 ʱ�Ÿ��·���
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, K;
    while (cin >> N >> K) {
        double housePrice = 200; // ��ʼ����
        double savings = 0;      // ��ʼ����
        int year = 0;            // ��ݼ�����
        bool canBuy = false;     // �Ƿ����򷿵ı�־

        for (int i = 1; i <= 21; ++i) {
            if (i > 1) {
                housePrice *= (100 + K) / 100.0; // �ӵڶ��꿪ʼ������ÿ������
            }
            savings += N; // ÿ��������� N ��

            if (savings >= housePrice) {
                year = i;    // ��¼���
                canBuy = true; // ���ñ�־
                break;       // �˳�ѭ��
            }
        }

        if (canBuy) {
            cout << year << endl; // ������
        }
        else {
            cout << "Impossible" << endl; // ��� Impossible
        }
    }
    return 0;
}