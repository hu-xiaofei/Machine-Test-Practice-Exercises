#define _CRT_SECURE_NO_WARNINGS

//// World for U（浙江大学复试上机题
//#include<iostream>
//using namespace std;
//#include <string>
//int main() {
//    string str;//视频课没有教
//    while (true)
//    {
//        str = { 0 };
//        getline(cin, str); // 接收一行输入
//        if (str.empty() ) 
//        {  // 检查是否输入了空行
//            break;
//        }
//        int N = str.length();
//        int n1, n2, n3, max_k = 0;
//        //求n1,n2,n3是难点
//        for (int n2 = 3; n2 <= N; ++n2) {
//            // 根据 n1 + n2 + n3 - 2 = N 计算 n1 和 n3
//            int temp_n1_n3 = (N + 2 - n2) / 2;
//            // 检查是否满足 k <= n2 且 k 更大
//            if (temp_n1_n3 <= n2 && temp_n1_n3 > max_k) {
//                //max_k保证temp_n1_n3是在逐渐变大，大到一个最大值，然后停止
//                max_k = temp_n1_n3;
//            }
//        }
//        n1 = n3 = max_k;
//        n2 = N + 2 - n1 - n3;
//
//        for (int i = 0; i < n1-1; i++)
//        {
//            cout << str[i];
//            for (int j = 0; j < (n2 - 2); j++)
//            {
//                cout << ' ';
//            }
//            cout<<str[N - 1 - i] << endl;
//        }
//        for (int i = 0; i < n2; i++)
//        {
//            cout << str[n1 - 1 + i];
//        }
//
//    }
//    return 0;
//}


//旋转矩阵（北京航空航天大学复试上机题）
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	//创建大小为 n * n 的二维数组
//	/*char** a = new char* [n];
//	for (int i = 0; i < n; ++i) {
//		a[i] = new char[n];
//	}
//	char** b = new char* [n];
//	for (int i = 0; i < n; ++i) {
//		b[i] = new char[n];
//	}*/
//	char a[20][20] = { 0 };
//	char b[20][20] = { 0 };
//
//	//接收矩阵里的数据
//	/*for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cin >> b[i][j];
//		}
//	}*/
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//
//
//	//判断是否为旋转矩阵
//	while(true)
//	{
//		int count = -1;
//		//是否为0度
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[i][j])
//					count = 0;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//是否为90度
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[j][n-1-i])
//					count = 90;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//是否为180度
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[n - 1 - i][n - 1 - j])
//					count = 180;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//是否为270度
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[n-1-j][i])
//					count = 270;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		cout << count << endl;
//		break;
//	}
//	//释放两个数组
//	/*for (int i = 0; i < n; ++i) {
//		delete[] a[i];
//	}
//	delete[] a;
//	for (int i = 0; i < n; ++i) {
//		delete[] b[i];
//	}
//	delete[] b;*/
//}
////法二：每次将第一个数组旋转90度，然后与第二个数组比较
//void ClockwiseRotate90(int matrix[10][10], int n) {
//	// 顺时针旋转90度
//	// 旋转其他度数重复执行该函数即可
//
//	// 先备份一下矩阵
//	int temp[10][10];
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			temp[i][j] = matrix[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			matrix[i][j] = temp[n - 1 - j][i];
//		}
//	}
//
//	return;
//}
//bool Compare(int lhs[10][10], int rhs[10][10], int n) {
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (lhs[i][j] != rhs[i][j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	int lhs[10][10];
//	int rhs[10][10];
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			scanf("%d", &lhs[i][j]);
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			scanf("%d", &rhs[i][j]);
//		}
//	}
//	if (Compare(lhs, rhs, n)) {
//		printf("0\n");
//	}
//	else {
//		ClockwiseRotate90(lhs, n);
//		if (Compare(lhs, rhs, n)) {
//			printf("90\n");
//		}
//		else {
//			ClockwiseRotate90(lhs, n);
//			if (Compare(lhs, rhs, n)) {
//				printf("180\n");
//			}
//			else {
//				ClockwiseRotate90(lhs, n);
//				if (Compare(lhs, rhs, n)) {
//					printf("270\n");
//				}
//				else {
//					printf("-1\n");
//				}
//			}
//		}
//	}
//
//	return 0;
//}



//重复者（北京大学复试上机题）
//淦！太难了，写不出来
#include<iostream>
//using namespace std;
//int main()
//{
//	int N = 0, level = 1;
//	cin >> N;
//	//char mold[5][5] = {0};
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << mold[i] << endl;
//	}
//}
#include <stdio.h>
#include <string.h>
using namespace std;
void square(int curSize, int patSize, char pattern[3000][3000], char picture[3000][3000], char last[3000][3000]) {
    if (curSize == 1) {
        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                picture[i][j] = pattern[i][j];
            }
        }
    }
    else {
        // 根据模板的字符是否为空格进行分形处理

        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                if (pattern[i][j] == ' ') {
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = ' ';
                        }
                    }
                }
                else {
                    // 这里需要建立新图案和模板的下标映射关系
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = last[pi - i * curSize][pj - j * curSize];
                        }
                    }

                }
            }
        }
    }

    for (int i = 0; i < curSize * patSize; ++i) {
        for (int j = 0; j < curSize * patSize; ++j) {
            last[i][j] = picture[i][j];
        }
    }
}
// 数组的大小为 3000*3000 约9MB，超过了1MB的限制，所以这里设成全局变量 
char pattern[3000][3000];
char last[3000][3000];
char picture[3000][3000];
int main() {
    int N;
    int Q;

    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }
        getchar(); // fgets会读到'\n' 所以先去掉
        for (int i = 0; i < N; ++i) {

            fgets(pattern[i], 3000, stdin);
            int curLength = strlen(pattern[i]);// _#\n --> 3
            for (int j = curLength - 1; j < N; ++j) {
                pattern[i][j] = ' ';
            }
        }
        scanf("%d", &Q);
        int curSize = 1;
        // 逐渐分形操作
        for (int i = 0; i < Q; ++i) {
            square(curSize, N, pattern, picture, last);
            curSize *= N;
        }

        for (int i = 0; i < curSize; ++i) {
            for (int j = 0; j < curSize; ++j) {
                printf("%c", picture[i][j]);
            }
            printf("\n");
        }

    }
}