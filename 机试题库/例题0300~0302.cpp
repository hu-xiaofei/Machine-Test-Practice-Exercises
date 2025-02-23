#define _CRT_SECURE_NO_WARNINGS


//学习sort
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool compare(int lhs, int rhs)
//{
//	return lhs >= rhs;
//	//lhs和rhs不发生交换时，要返回真
//}
//int main()
//{
//	int arr[6] = { 2,4,6,1,3,5 };
//	//sort 第一个参数填起始地址 
//	//第二个参数填最后一个元素的后一个位置的地址
//	//[ )
//	sort(arr, arr + 6);
//
//	vector<int>vec = { 2,4,6,2,6 };
//	//sort(vec.begin(), vec.end());
//
//	sort(vec.begin(), vec.end(), compare);//函数重载
//}


////整数奇偶排序（北京大学复试上机题）
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//bool compare(int l, int r)
//{
//	return l > r;
//}
//int main()
//{
//	vector<int>arr(10);
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	vector<int>even, odd;//even偶数，odd奇数
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//			even.push_back(arr[i]);
//		else
//			odd.push_back(arr[i]);
//	}
//	sort(even.begin(), even.end());
//	sort(odd.begin(), odd.end(),compare);
//	for (int i = 0; i < odd.size(); i++)
//	{
//		cout << odd[i] << " ";
//	}
//	for (int i = 0; i < even.size(); i++)
//	{
//		cout << even[i] << " ";
//	}
//	
//}
////法二
//#include <stdio.h>
//#include<iostream>
//#include <algorithm>
//using namespace std;
//bool compare(int lhs, int rhs) {
//    if (lhs % 2 == 1 && rhs % 2 == 0)
//        //左奇，右偶，交换
//    {
//        return true;
//    }
//    else if (lhs % 2 == 1 && rhs % 2 == 1 && lhs > rhs) 
//        //左奇，右奇，交换
//    {
//        return true;
//    }
//    else if (lhs % 2 == 0 && rhs % 2 == 0 && lhs < rhs) 
//        //左偶，右偶，交换
//    {
//        return true;
//    }
//    else //其它情况，不交换
//    {
//        return false;
//    }
//}
//int main() {
//
//    int arr[10];
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d", &arr[i]); // arr + i
//    }
//    sort(arr, arr + 10, compare);
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


////成绩排序2 （清华大学复试上机题）
//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//bool compare(pair<int,int>l,pair<int,int>r)
//{
//	if (l.second < r.second)
//		return true;
//	else if (l.second == r.second && l.first < r.first)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	
//	vector<pair<int, int>>students;
//	for (int i = 0; i < n; i++)
//	{
//		int id = 0, grade = 0;
//		cin >> id >> grade;
//		students.push_back({ id,grade });
//	}
//	sort(students.begin(), students.end(), compare);
//	for (int i=0; i<n; ++i)
//	{
//		cout << students[i].first <<" " << students[i].second << endl;
//	}
//}


//成绩排序 （清华大学复试上机题）
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//struct Student {
//    string name;
//    int score;
//    int index; // 记录原始顺序
//};
//
//bool compare0(const Student& l, const Student& r) {
//    if (l.score != r.score) {
//        return l.score > r.score; // 成绩降序
//    }
//    else {
//        return l.index < r.index; // 成绩相同，按原始顺序
//    }
//}
//
//bool compare1(const Student& l, const Student& r) {
//    if (l.score != r.score) {
//        return l.score < r.score; // 成绩升序
//    }
//    else {
//        return l.index < r.index; // 成绩相同，按原始顺序
//    }
//}
//
//int main() {
//    int n, method;
//    cin >> n >> method;
//    vector<Student> students;
//    for (int i = 0; i < n; ++i) {
//        string name;
//        int score;
//        cin >> name >> score;
//        students.push_back({ name, score, i }); // 记录索引i
//    }
//
//    if (method == 0) {
//        sort(students.begin(), students.end(), compare0);
//        //sort是快排，不稳定的
//    }
//    else {
//        sort(students.begin(), students.end(), compare1);
//    }
//
//    for (const auto& s : students) {
//        cout << s.name << " " << s.score << endl;
//    }
//    return 0;
//}