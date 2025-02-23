#define _CRT_SECURE_NO_WARNINGS

////特殊排序（华中科技大学复试上机题）
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


////小白鼠排队（北京大学复试上机题）
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
//			//反向迭代器的 ++ 操作符会向容器的头部方向移动，而 -- 会向尾部方向移动。
//			//因此，rbegin() 是逆序遍历的起点，rend() 是终点
//		{
//			cout << it->second << endl;
//		}
//	}
//}		//也可以把其根据体重降序排列，再输出


//奥运排序问题（浙江大学复试上机题）
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
//		输入所有的国家信息
//		for (int i = 0; i < n; i++)
//		{
//			int gold = 0, tot = 0, people = 0;
//			cin >> gold >> tot >> people;
//			it->second[0] = gold;
//			it->second[1] = tot;
//			it->second[2] = people;
//			it++;
//		}
//		输入国家号
//		it = country.begin();
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			cin >> temp;
//			it->first=temp;
//			std::map的键（first）是常量，不允许直接赋值修改，
//			这是因为std::map是基于红黑树等平衡二叉搜索树实现的，键的有序性是其重要特性，
//			 如果允许随意修改键，会破坏树的结构和有序性
//			it++;
//		}
//	}
//}
////王道答案
//#define _CRT_SECURE_NO_WARNINGS  // 禁用MSVC编译器的安全警告
//#include <stdio.h>               // 标准输入输出库
//#include <vector>                // C++动态数组容器
//#include <algorithm>             // 排序算法
//using namespace std;
//
//// 国家数据结构：存储每个国家的编号、金牌数、奖牌数、人口
//struct Country {
//    int num;         // 国家编号（0到N-1）
//    int gold;        // 金牌数
//    int total;       // 奖牌总数
//    int population;  // 人口（百万）
//};
//
//// 排名结构：存储某国家在四种排名方式中的名次
//struct Rank {
//    int gold;        // 金牌总数排名
//    int total;       // 奖牌总数排名
//    int goldRatio;   // 金牌人口比例排名
//    int totalRatio;  // 奖牌人口比例排名
//};
//
//// 比较函数：按金牌数降序排序
//bool goldCompare(Country lhs, Country rhs) {
//    return lhs.gold > rhs.gold;  // 金牌数高的排在前面
//}
//
//// 比较函数：按奖牌数降序排序
//bool totalCompare(Country lhs, Country rhs) {
//    return lhs.total > rhs.total; // 奖牌数高的排在前面
//}
//
//// 比较函数：按金牌/人口比例降序排序（避免浮点运算）
//bool goldRatioCompare(Country lhs, Country rhs) {
//    // 交叉相乘比较：lhs.gold / lhs.pop > rhs.gold / rhs.pop
//    // 等价于 lhs.gold * rhs.pop > rhs.gold * lhs.pop
//    return lhs.gold * rhs.population > rhs.gold * lhs.population;
//}
//
//// 比较函数：按奖牌/人口比例降序排序（避免浮点运算）
//bool totalRatioCompare(Country lhs, Country rhs) {
//    // 交叉相乘比较：lhs.total / lhs.pop > rhs.total / rhs.pop
//    // 等价于 lhs.total * rhs.pop > rhs.total * lhs.pop
//    return lhs.total * rhs.population > rhs.total * lhs.population;
//}
//
//int main() {
//    int N, M;
//    // 循环处理多组输入数据，直到文件结束（EOF）
//    while (scanf("%d%d", &N, &M) != EOF) {
//        vector<Country> vec;      // 存储所有国家数据
//        vector<Rank> rankVec(N);  // 存储每个国家的四种排名
//
//        // 读取N个国家的数据
//        for (int num = 0; num < N; ++num) {
//            Country country;
//            country.num = num;  // 国家编号从0开始
//            // 读取金牌数、奖牌数、人口
//            scanf("%d%d%d", &country.gold, &country.total, &country.population);
//            vec.push_back(country);  // 存入vector
//        }
//
//        // ------------------- 按金牌数排序并计算排名 -------------------
//        sort(vec.begin(), vec.end(), goldCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // 处理并列：如果当前金牌数与上一个不同，更新排名为当前位置i+1
//            if (i >= 1 && vec[i].gold != vec[i - 1].gold) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].gold = rank;  // 记录当前国家的金牌排名
//        }
//
//        // ------------------- 按奖牌数排序并计算排名 -------------------
//        sort(vec.begin(), vec.end(), totalCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // 处理并列：当前奖牌数不同时更新排名
//            if (i >= 1 && vec[i].total != vec[i - 1].total) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].total = rank;  // 记录奖牌排名
//        }
//
//        // ------------------- 按金牌人口比例排序并计算排名 -------------------
//        sort(vec.begin(), vec.end(), goldRatioCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // 处理并列：通过交叉相乘判断比例是否相等
//            if (i >= 1 &&
//                vec[i].gold * vec[i - 1].population != vec[i - 1].gold * vec[i].population) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].goldRatio = rank;  // 记录金牌比例排名
//        }
//
//        // ------------------- 按奖牌人口比例排序并计算排名 -------------------
//        sort(vec.begin(), vec.end(), totalRatioCompare);
//        for (int i = 0, rank = 1; i < vec.size(); ++i) {
//            // 处理并列：通过交叉相乘判断比例是否相等
//            if (i >= 1 &&
//                vec[i].total * vec[i - 1].population != vec[i - 1].total * vec[i].population) {
//                rank = i + 1;
//            }
//            rankVec[vec[i].num].totalRatio = rank;  // 记录奖牌比例排名
//        }
//
//        // ------------------- 处理M个查询 -------------------
//        int countryNum;
//        for (int idx = 0; idx < M; ++idx) {
//            scanf("%d", &countryNum);  // 读取需要查询的国家编号
//            int best = rankVec[countryNum].gold;  // 初始最佳排名为金牌排名
//            int out = 1;  // 初始排名方式为金牌（优先级最高）
//
//            // 比较四种排名，选择最佳名次和对应的方式
//            if (rankVec[countryNum].total < best) {
//                best = rankVec[countryNum].total;
//                out = 2;  // 奖牌总数更优
//            }
//            if (rankVec[countryNum].goldRatio < best) {
//                best = rankVec[countryNum].goldRatio;
//                out = 3;  // 金牌比例更优
//            }
//            if (rankVec[countryNum].totalRatio < best) {
//                best = rankVec[countryNum].totalRatio;
//                out = 4;  // 奖牌比例更优
//            }
//
//            // 输出结果：最佳排名:排名方式
//            printf("%d:%d\n", best, out);
//        }
//        printf("\n");  // 每组数据后输出空行
//    }
//    return 0;
//}