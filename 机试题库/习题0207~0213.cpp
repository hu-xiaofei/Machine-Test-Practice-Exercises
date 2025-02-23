#define _CRT_SECURE_NO_WARNINGS

//子串计算（北京大学复试上机题）
//#include <iostream>
//#include <string>
//#include <map>
//
//int main()
//{
//	char strArr[100];
//	while (std::cin >> strArr)
//	{
//		std::string str = strArr;
//		std::map<std::string, int> subCount;
//
//		// 生成所有子串并统计出现次数
//		for (int i = 1; i <= str.size(); ++i)
//		{
//			for (int j = 0; j <= str.size() - i; ++j)
//			{
//				// j是子串的起始下标，i是子串长度
//				std::string sub = str.substr(j, i);
//				//从字符串 str 中提取子字符串,从位置 j 开始，提取长度为 i 的子字符串
//				++subCount[sub];
//				//当使用 sub 作为键来访问 subCount 时，如果 sub 已经存在于 subCount 中，它会返回与该键关联的值；
//				// 如果 sub 不存在，std::map 会自动插入一个新的键值对，其中键为 sub，值为 int 类型的默认值 0
//			}
//		}
//
//		// 遍历 map 输出出现次数大于 1 的子串
//		std::map<std::string, int>::iterator it;
//		for (it = subCount.begin(); it != subCount.end(); ++it)
//		{
//			if (it->second > 1)
//			{
//				std::cout << it->first << " " << it->second << std::endl;
//			}
//		}
//	}
//	return 0;
//}


////WERTYU（上海交通大学复试上机题）
//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//    map<char, char>toCorrect =
//    {
//        {' ',' '},
//        {'2','1'},{'3','2'},{'4','3'},{'5','4'},{'6','5'},{'7','6'},{'8','7'},{'9','8'},{'0','9'},{'-','0'},{'=','-'},
//        {'W','Q'},{'E','W'},{'R','E'},{'T','R'},{'Y','T'},{'U','Y'},{'I','U'},{'O','I'},{'P','O'},{'[','P'},{']','['},
//        {'S','A'},{'D','S'},{'F','D'},{'G','F'},{'H','G'},{'J','H'},{'K','J'},{'L','K'},{';','L'},{'\'',';'},
//        {'X','Z'},{'C','X'},{'V','C'},{'B','V'},{'N','B'},{'M','N'},{',','M'},{'.',','},{'/','.'}
//    };
//    char strArr[200] = { 0 };//由题意，容量只要大于100就可以了
//    while (fgets(strArr,200,stdin)!=NULL)//存在空格的情况，用cin就不方便了
//        //fgets（file get string）用于从文件或标准输入读取一行字符串,原型：char* fgets(char* str, int num, FILE* stream)
//        //str: 用于存储读取到的字符串的缓冲区
//        //num: 最多读取的字符数（包括结尾的空字符 \0）
//        //stream : 输入流，例如 stdin 表示从标准输入读取
//        //如果成功读取了字符，返回 str；如果遇到文件结束符（EOF）且未读取任何字符，返回 NULL
//        //遇到换行符\n结束这次读取（换行符也会被读取）
//    {
//        for (int i = 0; strArr[i] != '\0'; i++)
//        {
//            if (strArr[i] == '\n')
//            {
//                strArr[i] = '\0';
//            }
//            strArr[i] = toCorrect[strArr[i]];
//        }
//        cout << strArr << endl;
//    }
//
//}


////罗马数字（华东师范大学复试上机题）
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
//int main()
//{
//    map<int, string> unit = 
//    {
//        {1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},
//        {6,"VI"},{7,"VII"},{8,"VIII"},{9,"IX"}
//    };
//    map<int, string> ten = 
//    {
//        {10,"X"},{20,"XX"},{30,"XXX"},{40,"XL"},{50,"L"},
//        {60,"LX"},{70,"LXX"},{80,"LXXX"},{90,"XC"}
//    };
//    map<int, string> hundred = 
//    {
//        {100,"C"},{200,"CC"},{300,"CCC"},{400,"CD"},{500,"D"},
//        {600,"DC"},{700,"DCC"},{800,"DCCC"},{900,"CM"}
//    };
//
//    //左减时不可跨越一个位值。
//    // 例如，99应表示为XCIX(即[100 -10] +[10-1])，而不是IC(即[100-1])。
//    // 等同于阿拉伯数字每位数字分别表示。
//
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++)
//    {
//        int n = 0;
//        cin >> n;
//        string res;//最终结果
//        if (n == 1000)
//        {
//            res = "M";
//        }
//        else if (n >= 100)
//        {
//            int u = n % 10;//个位
//            int t = (n / 10) % 10*10;//十位
//            int h = (n / 100) % 10*100;//百位
//            res = hundred[h] + ten[t] + unit[u];
//        }
//        else if (n >= 10)
//        {
//            int u = n % 10;
//            int t = (n / 10) % 10*10;
//            res = ten[t] + unit[u];
//        }
//        else
//        {
//            res = unit[n];
//        }
//        cout << res << endl;
//    }
//}


//三元组（北京邮电大学复试上机题）
//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int m = 0;
//		cin >> m;
//		vector<int>arr;
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			cin >> temp;
//			arr.push_back(temp);
//		}
//		int num = 0;
//		for (int k1 = 0; k1 < m; k1++)
//		{
//			for (int k2 = 0; k2 < m; k2++)
//			{
//				for (int k3 = 0; k3 < m; k3++)
//				{
//					if (arr[k1] + arr[k2] == arr[k3])
//						num++;
//				}
//			}
//		}
//		cout << num << endl;
//	}
//}

////法二：时间复杂度为O^2
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int countTriples(vector<int>& nums) {
//    int n = nums.size();
//    int count = 0;
//
//    // 使用哈希表统计每个数字出现的次数
//    unordered_map<int, int> freq;
//    for (int num : nums)
//        //在每次循环迭代时，num 会依次绑定到 nums 数组中的每个元素，然后在循环体中输出该元素的值
//    {
//        freq[num]++;
//    }
//
//    // 只需要两重循环
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            int sum = nums[i] + nums[j];
//            // 检查sum是否在数组中，如果在，加上其出现次数
//            if (freq.count(sum)) {
//                count += freq[sum];//AMAZING^O^
//            }
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    while (n--) {
//        int m;
//        cin >> m;
//        vector<int> nums(m);
//        for (int i = 0; i < m; i++) {
//            cin >> nums[i];
//        }
//        cout << countTriples(nums) << endl;
//    }
//
//    return 0;
//}


//谁是你的潜在朋友（北京大学复试上机题）
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//int main()
//{
//	int n = 0;	//n个读者
//	int m = 0;	//m本书
//	cin >> n >> m;
//	map<int, int>map1;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		map1.insert({ i,temp });
//	}
//	vector<int>freq(201);
//	freq[0] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		freq[map1[i]]++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (freq[map1[i]] == 1)
//			cout << "BeiJu" << endl;
//		else
//			cout << freq[map1[i]] - 1 << endl;
//	}
//}