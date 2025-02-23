#define _CRT_SECURE_NO_WARNINGS

////学习set
//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_set>
//using namespace std;
//
//int main()
//{
//	//构造
//	set<int>set1 = { 1,2,3,5,7,9 };
//	multiset<int>set2 = { 1,3,5,6,1,3,5,6 };//可重复
//	unordered_set<int>set3 = { 2,4,6 };
//	unordered_multiset<int>set4 = { 2,3,4,2,3,4 };
//	unordered_multiset<int>:: iterator it;
//	for (it = set4.begin(); it != set4.end(); ++it)
//	{
//		printf("%d ", * it);
//	}
//	printf("\n");
//
//	//新增元素
//	set1.insert(2);
//
//	//删除元素
//	set1.erase(1);
//	set2.erase(1);//一次删除全部的1
//
//	//find查找元素的位置，找不到就返回一个尾后迭代器
//	if (set3.find(1) == set3.end()) {
//		printf("1 is not in set!\n");
//	}
//	else {
//		printf("1 is in set !\n");
//	}
//
//	//count获取元素的数量
//	printf("2 occurs %d times\n", set4.count(2));
//
//	//set的元素不允许直接修改，可以先删除再插入
//}

////阶乘的和（上海交通大学复试上机题）
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//
//int main()
//{
//	vector<int>factorialArr;//阶乘之和
//	int curFactorial = 1;
//	factorialArr.push_back(1);
//	for (int i = 1; i <= 9; i++)
//	{
//		curFactorial *= i;
//		factorialArr.push_back(curFactorial);
//	}
//
//	//用空间换时间，预先把所有可能全算出来
//	set<int>allPossible;
//	allPossible.insert(0);
//	for (int i = 0; i <= 9; i++)
//	{
//		set<int> temp;
//		set<int>::iterator it;
//		for (it = allPossible.begin(); it != allPossible.end(); ++it)
//		{
//			temp.insert(*it + factorialArr[i]);
//		}
//		for (it = temp.begin(); it != temp.end(); ++it)
//		{
//			allPossible.insert(*it);
//		}
//	}
//	allPossible.erase(0);
//	
//	int n;
//	while (cin >> n)
//	{
//		if (n < 0)
//			break;
//		if (allPossible.count(n) == 0)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//	}
//
//}

////学习map
//#include<iostream>
//#include<map>
//#include<unordered_map>
//using namespace std;
//
//int main()
//{
//	//构造map
//	map<char, int>map1;//有序，不允许重复
//	//char是键的类型 int是值的类型
//	multimap<char, int>map2;//有序，允许重复
//  //元素按照键（key）的升序排列（默认情况下），或者根据自定义的比较函数排序
//	unordered_map<char, int> map3;
//	// 无序不允许重复经常使用，时间开销小
//	unordered_multimap<char, int> map4;
//
//	//键值对
//	pair<char, int> pair1 = {'w', 0 };
//	// first键second 值
//	printf("key = %c, value= %d\n", pair1.first, pair1.second);
//
//	//在map中新增
//	map1.insert(pair1);
//	map1.insert({ 'w',1 });
//	map2.insert(pair1);
//	map2.insert({ 'w', 1});
//	//map2.insert({ 'o',1 });
//	
//	//在map中删除
//	map1.erase('w');
//	map2.erase('w'); 
//	return 0;
//
//	//遍历map
//	map<char, int>map1= {{ 'w ',0},{'o' ,1},{ 'r',2 }, { '1',3 }, { 'd',4}};
//	map1.insert({ 'o',5 }); 
//	multimap<char, int>:: iterator it;
//	for (it = map1.begin(); it != map1.end(); ++it)
//	{
//	printf("key = %c，value = %d\n", it->first, it->second);
//	return 0;
//	}
//
//	//查找
//	printf("value=%d\n", map1['o']);//[]可以把o所对应的值取出
//	//若键值对不存在，会新增一项，值为0
//
//	//find用法
//	if (map1.find('o') == map1.end()) {
//		printf("key is not in map\n");
//	}
//	else {
//		printf("value = %d \n", map1['o']);
//	}
//
//	//赋值
//	map1['o'] = 6;
//
//	//multimap不支持[]运算符
//	//low_bound(key)返回key对应的第一个值的位置
//	//upper_bound(key)返回key对用的最后一个值的后一个位置
//	multimap<char, int>::iterator it;
//	for (it = map1.lower_bound('o'); it != map1.upper_bound('o'); ++it)
//		printf("key=%c,velue=%d\n", it->first, it->second);
//
//}

//手机键盘 （清华大学复试上机题）
//两个map，一个记录每个字母要按多少下，一个记录每个字母在哪个键上
//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//	//每个字母花费时间
//    map<char, int>input =
//    {
//        {'a',1},{'b',2},{'c',3},
//        {'d',1},{'e',2},{'f',3},
//        {'g',1},{'h',2},{'i',3},
//        {'j',1},{'k',2},{'l',3},
//        {'m',1},{'n',2},{'o',3},
//        {'p',1},{'q',2},{'r',3},{'s',4},
//        {'t',1},{'u',2},{'v',3},
//        {'w',1},{'x',2},{'y',3},{'z',4}
//    };
//    //每个字母属于哪个按键
//    map<char, int>key =
//    {
//        {'a',2},{'b',2},{'c',2},
//        {'d',3},{'e',3},{'f',3},
//        {'g',4},{'h',4},{'i',4},
//        {'j',5},{'k',5},{'l',5},
//        {'m',6},{'n',6},{'o',6},
//        {'p',7},{'q',7},{'r',7},{'s',7},
//        {'t',8},{'u',8},{'v',8},
//        {'w',9},{'x',9},{'y',9},{'z',9}
//    };
//    char str[200];
//    while (cin >> str)
//    {
//        int last = -1;//上次的按键
//        int time = 0;
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            //判断是否要等待
//            if (key[str[i]] == last)
//            {
//                time += 2;
//            }
//            time += input[str[i]];
//            last = key[str[i]];
//        }
//        cout << time << endl;
//    }
//
//}