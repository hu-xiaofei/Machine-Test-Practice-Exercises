#define _CRT_SECURE_NO_WARNINGS

////�������򣨻��пƼ���ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while(cin >> n)
//	{
//		vector<int>arr;
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			cin >> temp;
//			arr.push_back(temp);
//		}
//		sort(arr.begin(), arr.end());
//		cout << arr[n - 1] << endl;
//		if (n == 1)
//		{
//			cout << "-1" << endl;
//			break;
//		}
//		for (int i = 0; i < n - 1; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//}


////С�����Ŷӣ�������ѧ�����ϻ��⣩
//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		map<int, string>rat;
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			string hat;
//			cin >> temp >> hat;
//			rat.insert({ temp,hat });
//		}
//		//map<int, string>::iterator it;
//		map<int, string>::reverse_iterator it;
//		for (it = rat.rbegin(); it != rat.rend(); ++it)
//			//����������� ++ ����������������ͷ�������ƶ����� -- ����β�������ƶ���
//			//��ˣ�rbegin() �������������㣬rend() ���յ�
//		{
//			cout << it->second << endl;
//		}
//	}
//}		//Ҳ���԰���������ؽ������У������


//�����������⣨�㽭��ѧ�����ϻ��⣩
//#include<iostream>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0, m = 0;
//	while(cin >> n >> m)
//	{
//		map<int, vector<int>>country;
//		map<int, vector<int>>::iterator it = country.begin();
//		�������еĹ�����Ϣ
//		for (int i = 0; i < n; i++)
//		{
//			int gold = 0, tot = 0, people = 0;
//			cin >> gold >> tot >> people;
//			it->second[0] = gold;
//			it->second[1] = tot;
//			it->second[2] = people;
//			it++;
//		}
//		������Һ�
//		it = country.begin();
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			cin >> temp;
//			it->first=temp;
//			std::map�ļ���first���ǳ�����������ֱ�Ӹ�ֵ�޸ģ�
//			������Ϊstd::map�ǻ��ں������ƽ�����������ʵ�ֵģ�����������������Ҫ���ԣ�
//			 ������������޸ļ������ƻ����Ľṹ��������
//			it++;
//		}
//	}
//}
////������
//#define _CRT_SECURE_NO_WARNINGS  // ����MSVC�������İ�ȫ����
//#include <stdio.h>               // ��׼���������
//#include <vector>                // C++��̬��������
//#include <algorithm>             // �����㷨
//using namespace std;
//
//// �������ݽṹ���洢ÿ�����ҵı�š������������������˿�
//struct Country {
//    int num;         // ���ұ�ţ�0��N-1��
//    int gold;        // ������
//    int total;       // ��������
//    int population;  // �˿ڣ�����
//};
//
//// �����ṹ���洢ĳ����������������ʽ�е�����
//struct Rank {
//    int gold;        // ������������
//    int total;       // ������������
//    int goldRatio;   // �����˿ڱ�������
//    int totalRatio;  // �����˿ڱ�������
//};
//
//// �ȽϺ���������������������
//bool goldCompare(Country lhs, Country rhs) {
//    return lhs.gold > rhs.gold;  // �������ߵ�����ǰ��
//}
//
//// �ȽϺ���������������������
//bool totalCompare(Country lhs, Country rhs) {
//    return lhs.total > rhs.total; // �������ߵ�����ǰ��
//}
//
//// �ȽϺ�����������/�˿ڱ����������򣨱��⸡�����㣩
//bool goldRatioCompare(Country lhs, Country rhs) {
//    // ������˱Ƚϣ�lhs.gold / lhs.pop > rhs.gold / rhs.pop
//    // �ȼ��� lhs.gold * rhs.pop > rhs.gold * lhs.pop
//    return lhs.gold * rhs.population > rhs.gold * lhs.population;
//}
//
//// �ȽϺ�����������/�˿ڱ����������򣨱��⸡�����㣩
//bool totalRatioCompare(Country lhs, Country rhs) {
//    // ������˱Ƚϣ�lhs.total / lhs.pop > rhs.total / rhs.pop
//    // �ȼ��� lhs.total * rhs.pop > rhs.total * lhs.pop
//    return lhs.total * rhs.population > rhs.total * lhs.population;
//}
//
//int main() {
//    int N, M;
//    // ѭ����������������ݣ�ֱ���ļ�������EOF��
//    while (scanf("%d%d", &N, &M) != EOF) {
//        vector<Country> vec;      // �洢���й�������
//        vector<Rank> rankVec(N);  // �洢ÿ�����ҵ���������
//
//        // ��ȡN�����ҵ�����
//        for (int num = 0; num < N; ++num) {
//            Country country;
//            country.num = num;  // ���ұ�Ŵ�0��ʼ
//            // ��ȡ�����������������˿�
//            scanf("%d%d%d", &country.gold, &country.total, &country.population);
//            vec.push_back(country);  // ����vector
//        }
//
//        // ------------------- �����������򲢼������� -------------------
//        sort(vec.begin(), vec.end(), goldCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // �����У������ǰ����������һ����ͬ����������Ϊ��ǰλ��i+1
//            if (i >= 1 && vec[i].gold != vec[i - 1].gold) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].gold = rank;  // ��¼��ǰ���ҵĽ�������
//        }
//
//        // ------------------- �����������򲢼������� -------------------
//        sort(vec.begin(), vec.end(), totalCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // �����У���ǰ��������ͬʱ��������
//            if (i >= 1 && vec[i].total != vec[i - 1].total) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].total = rank;  // ��¼��������
//        }
//
//        // ------------------- �������˿ڱ������򲢼������� -------------------
//        sort(vec.begin(), vec.end(), goldRatioCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // �����У�ͨ����������жϱ����Ƿ����
//            if (i >= 1 &&
//                vec[i].gold * vec[i - 1].population != vec[i - 1].gold * vec[i].population) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].goldRatio = rank;  // ��¼���Ʊ�������
//        }
//
//        // ------------------- �������˿ڱ������򲢼������� -------------------
//        sort(vec.begin(), vec.end(), totalRatioCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // �����У�ͨ����������жϱ����Ƿ����
//            if (i >= 1 &&
//                vec[i].total * vec[i - 1].population != vec[i - 1].total * vec[i].population) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].totalRatio = rank;  // ��¼���Ʊ�������
//        }
//
//        // ------------------- ����M����ѯ -------------------
//        int countryNum;
//        for (int idx = 0; idx < M; ++idx) {
//            scanf("%d", &countryNum);  // ��ȡ��Ҫ��ѯ�Ĺ��ұ��
//            int best = rankVec[countryNum].gold;  // ��ʼ�������Ϊ��������
//            int out = 1;  // ��ʼ������ʽΪ���ƣ����ȼ���ߣ�
//
//            // �Ƚ�����������ѡ��������κͶ�Ӧ�ķ�ʽ
//            if (rankVec[countryNum].total < best) {
//                best = rankVec[countryNum].total;
//                out = 2;  // ������������
//            }
//            if (rankVec[countryNum].goldRatio < best) {
//                best = rankVec[countryNum].goldRatio;
//                out = 3;  // ���Ʊ�������
//            }
//            if (rankVec[countryNum].totalRatio < best) {
//                best = rankVec[countryNum].totalRatio;
//                out = 4;  // ���Ʊ�������
//            }
//
//            // ���������������:������ʽ
//            printf("%d:%d\n", best, out);
//        }
//        printf("\n");  // ÿ�����ݺ��������
//    }
//    return 0;
//}