#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}

//打印从32到127的ASCII码
//int main()
//{
//	int i = 0;
//	for(i=32;i<=127;i++)
//	{
//		printf("%c\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
////实现两个矩阵的相乘
//int main()
//{
//	//输入矩阵的行数，列数
//	int n, m, k, i, j;
//	scanf("%d %d%d", &n, &m, &k);
//    int a[100][100], b[100][100], c[100][100];
//	//输入矩阵
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	//计算矩阵相乘
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			c[i][j] = 0;
//			for(int t=0;t<m;t++)
//			{
//				c[i][j] += a[i][t] * b[t][j];
//			}
//		}
//	}
//	//输出矩阵
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输出顺时针旋转90度的矩阵
//#include <stdio.h>
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	int a[101][101];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(j = 0; j < m; j++)
//	{
//		for(i=n-1;i>=0;i--)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输出逆时针旋转90度的矩阵
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	int a[101][101];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(j = m-1; j >= 0; j--)
//	{
//		for(i=0;i<n;i++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//像素点模糊化处理
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	double a[101][101];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%lf", &a[i][j]);
//		}
//	}
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
//			{
//				printf("%.0lf ", a[i][j]);
//			}
//			else
//			{
//				printf("%.0lf ",(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5*1.0);
//			}
//			
//		}
//		printf("\n");
//	}
//	//printf("%.0lf", 5.6);
//	return 0;
//}

//NKUoj test1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for(int i=2*n;i>0;i-=2)
//	{
//		for(int j=0;j<(2*n-i)/2;j++)
//		{
//			printf(" ");
//		}
//		for(int k=0;k<i;k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdbool.h>
//int main()
//{
//	bool flag = true;
//	if (flag)
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d %d ", a+b, a-b, a*b);
//	if (b == 0)
//		printf("error");
//	else
//	{ 
//		printf("%d", a / b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max=a, min=a;
//	if(b > max)
//		max = b;
//	if(c > max)
//		max = c;
//	if(b<min)
//		min = b;
//	if(c<min)
//		min = c;
//	printf("%d %d %d", max, min,a+b+c);
//	return 0;
//}

//int main()
//{
//	int a[3];
//	int i;
//	for(i=0;i<3;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<3;i++)
//	{
//		if (a[i] >= 90 && a[i] <= 100)
//			printf("A ");
//		else if(a[i] >= 80 && a[i] < 90)
//			printf("B ");
//		else if(a[i] >= 70 && a[i] < 80)
//			printf("C ");
//		else if(a[i] >= 60 && a[i] < 70)
//			printf("D ");
//		else
//			printf("E ");
//	}
//	printf("%d ", (a[0] + a[1] + a[2])/3);
//	return 0;
//}

//十进制数转换为二进制数
//int main()
//{
//	int a, i=0;
//	int arr[100];
//	scanf("%d",&a);
//	while(a)
//	{
//		arr[i]= a % 2;
//		a /= 2;
//		i++;
//	}
//	for(int j=i-1;j>=0;j--)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	scanf("%d %*c %d %*c %d", &x, &y, &z);
//	printf("%d %d %d", x, y, z);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a=0,b=0, c=0;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a>b&&b>c)
//		printf("%d %d %d", a, b, c);
//	else if(a>c&&c>b)
//		printf("%d %d %d", a, c, b);
//	else if(b>a&&a>c)
//		printf("%d %d %d", b, a, c);
//	else if(b>c&&c>a)
//		printf("%d %d %d", b, c, a);
//	else if(c>a&&a>b)
//		printf("%d %d %d", c, a, b);
//	else if(c>b&&b>a)
//		printf("%d %d %d", c, b, a);
//	return 0;
//}

////写出str的p型编码串
//int main()
//{
//	char str[1001] = { 0 };
//	scanf("%s", str);
//	int flag = 0;
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == str[i + 1])
//		{
//			flag++;
//		}
//		else
//		{
//			printf("%d%c", flag + 1, str[i]);
//			flag = 0;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[101] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int right= len - 1;
//	int left = 0;
//	int flag = 0;
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//		{
//			flag = 1;
//			break;
//		}
//		left++;
//		right--;
//	}
//	if(flag== 0)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int j = 2; j <= n; j++)
//	{
//		for (int i = 1; i < j; i++)
//		{
//			if (j % i == 0)
//			{
//				sum += i;
//			}
//		}
//		if (sum == j)
//		{
//			printf("%d\n", j);
//		}
//		sum = 0;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX_ROWS 10
//#define MAX_COLS 10
//
//int main() {
//    int row1, col1, row2, col2;
//
//    printf("输入第一个矩阵的行数和列数: ");
//    scanf("%d %d", &row1, &col1);
//
//    printf("输入第二个矩阵的行数和列数: ");
//    scanf("%d %d", &row2, &col2);
//
//    if (col1 != row2) {
//        printf("矩阵无法相乘。\n");
//        return 1;
//    }
//
//    if (row1 > MAX_ROWS || col1 > MAX_COLS || row2 > MAX_ROWS || col2 > MAX_COLS) {
//        printf("行数和列数必须小于等于 %d。\n", MAX_ROWS);
//        return 1;
//    }
//
//    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
//
//    printf("输入第一个矩阵的元素:\n");
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col1; j++) {
//            scanf("%d", &matrix1[i][j]);
//        }
//    }
//
//    printf("输入第二个矩阵的元素:\n");
//    for (int i = 0; i < row2; i++) {
//        for (int j = 0; j < col2; j++) {
//            scanf("%d", &matrix2[i][j]);
//        }
//    }
//
//    // 执行矩阵乘法
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col2; j++) {
//            result[i][j] = 0;
//            for (int k = 0; k < col1; k++) {
//                result[i][j] += matrix1[i][k] * matrix2[k][j];
//            }
//        }
//    }
//
//    // 输出乘法结果
//    printf("矩阵乘法的结果:\n");
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col2; j++) {
//            printf("%d ", result[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
////矩阵乘法
//#define MAX_ROWS 10
//#define MAX_COLS 10
//int main() {
//    begin:
//    int row1, col1, row2, col2;
//
//    printf("输入第一个矩阵的行数和列数: ");
//    scanf("%d %d", &row1, &col1);
//
//    printf("输入第二个矩阵的行数和列数: ");
//    scanf("%d %d", &row2, &col2);
//
//    if (col1 != row2) {
//        printf("矩阵无法相乘。\n");
//        printf("请重新输入\n");
//        goto begin;
//    }
//
//    if (row1 > MAX_ROWS || col1 > MAX_COLS || row2 > MAX_ROWS || col2 > MAX_COLS) {
//        printf("行数和列数必须小于等于 %d。\n", MAX_ROWS);
//        printf("请重新输入\n");
//        goto begin;
//    }
//
//    float matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
//
//    printf("输入第一个矩阵的元素:\n");
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col1; j++) {
//            scanf("%f", &matrix1[i][j]);
//        }
//    }
//
//    printf("输入第二个矩阵的元素:\n");
//    for (int i = 0; i < row2; i++) {
//        for (int j = 0; j < col2; j++) {
//            scanf("%f", &matrix2[i][j]);
//        }
//    }
//
//    // 执行矩阵乘法
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col2; j++) {
//            result[i][j] = 0.0;
//            for (int k = 0; k < col1; k++) {
//                result[i][j] += matrix1[i][k] * matrix2[k][j];
//            }
//        }
//    }
//
//    // 输出乘法结果
//    printf("矩阵乘法的结果:\n");
//    for (int i = 0; i < row1; i++) {
//        for (int j = 0; j < col2; j++) {
//            printf("%.2f ", result[i][j]);
//        }
//        printf("\n");
//    }
//    printf("继续请输入1，结束请输入0:");
//    int is_end = 0;
//    scanf("%d", &is_end);
//    if (is_end == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        goto begin;
//    }
//}

//#include <stdio.h>
////求矩阵的伴随矩阵
//#define MAX_SIZE 10
//
//// 计算行列式
//float determinant(float matrix[MAX_SIZE][MAX_SIZE], int n) {
//    if (n == 1) {
//        return matrix[0][0];
//    }
//
//    float det = 0;
//    float submatrix[MAX_SIZE][MAX_SIZE];
//
//    for (int c = 0; c < n; c++) {
//        int subi = 0;
//        for (int i = 1; i < n; i++) {
//            int subj = 0;
//            for (int j = 0; j < n; j++) {
//                if (j == c) {
//                    continue;
//                }
//                submatrix[subi][subj] = matrix[i][j];
//                subj++;
//            }
//            subi++;
//        }
//        det += (c % 2 == 0 ? 1 : -1) * matrix[0][c] * determinant(submatrix, n - 1);
//    }
//
//    return det;
//}
//
//int main() {
//    int n;
//
//    printf("输入矩阵的阶数 n: ");
//    scanf("%d", &n);
//
//    if (n > MAX_SIZE) {
//        printf("矩阵的阶数必须小于等于 %d。\n", MAX_SIZE);
//        return 1;
//    }
//
//    float matrix[MAX_SIZE][MAX_SIZE], adjMatrix[MAX_SIZE][MAX_SIZE];
//
//    printf("输入矩阵元素:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%f", &matrix[i][j]);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            float submatrix[MAX_SIZE][MAX_SIZE];
//            int subi = 0;
//
//            for (int si = 0; si < n; si++) {
//                if (si == i) {
//                    continue;
//                }
//
//                int subj = 0;
//                for (int sj = 0; sj < n; sj++) {
//                    if (sj == j) {
//                        continue;
//                    }
//                    submatrix[subi][subj] = matrix[si][sj];
//                    subj++;
//                }
//                subi++;
//            }
//
//            adjMatrix[i][j] = ((i + j) % 2 == 0 ? 1 : -1) * determinant(submatrix, n - 1);
//        }
//    }
//
//    // 转置伴随矩阵
//    float transposedAdjMatrix[MAX_SIZE][MAX_SIZE];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            transposedAdjMatrix[i][j] = adjMatrix[j][i];
//        }
//    }
//
//    printf("伴随矩阵:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%.2f ", transposedAdjMatrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include<string.h>
////输出9*9乘法口诀表
//int main()
//{
//	int i = 1, j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int get_max(int*arr, int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for(int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", get_max(arr, 10));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			ret+= -(1.0) / i;
//		}
//		else
//		{
//			ret += 1.0 / i;
//		}
//	}
//	printf("%lf", ret);
//	return 0;
//}

//int main()
//{
//	for (int i = 1000; i <= 2000; i+=4)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
////数从1到100的所有整数中有多少数字9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//    int number_to_guess, user_guess, attempts = 0;
//    int lower_limit = 1;
//    int upper_limit = 100;
//
//    // 生成随机数
//    srand(time(0));
//    number_to_guess = (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
//
//    printf("欢迎参加猜数字游戏！\n");
//    printf("我已经选择了一个在 %d 到 %d 之间的数字。看看你能否猜对它！\n", lower_limit, upper_limit);
//
//    do {
//        printf("请输入你的猜测: ");
//        scanf("%d", &user_guess);
//        attempts++;
//
//        if (user_guess < number_to_guess) {
//            printf("太小了，请再试一次。\n");
//        }
//        else if (user_guess > number_to_guess) {
//            printf("太大了，请再试一次。\n");
//        }
//    } while (user_guess != number_to_guess);
//
//    printf("恭喜你，猜对了！你用了 %d 次尝试。\n", attempts);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_N 20
//#define MAX_M 20
//
//int main() {
//    int n, m, horseX, horseY;
//    scanf("%d %d %d %d", &n, &m, &horseX, &horseY);
//
//    long long paths[MAX_N + 1][MAX_M + 1] = { 0 };
//    int i, j;
//
//    // 初始位置
//    paths[0][0] = 1;
//
//    // 计算路径
//    for (i = 0; i <= n; i++) {
//        for (j = 0; j <= m; j++) {
//            if (i > 0 && (i - 1 != horseX || j != horseY)) {
//                paths[i][j] += paths[i - 1][j];
//            }
//            if (j > 0 && (i != horseX || j - 1 != horseY)) {
//                paths[i][j] += paths[i][j - 1];
//            }
//        }
//    }
//
//    // 马可能跳跃到的点
//    int horseJumpX[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
//    int horseJumpY[] = { -2, 2, -2, 2, -1, 1, -1, 1 };
//
//    // 阻止路径经过马的位置和马可能跳跃到的位置
//    for (i = 0; i < 8; i++) {
//        int x = horseX + horseJumpX[i];
//        int y = horseY + horseJumpY[i];
//        if (x >= 0 && x <= n && y >= 0 && y <= m) {
//            paths[x][y] = 0;
//        }
//    }
//
//    printf("%lld\n", paths[n][m]);
//    return 0;
//}

//int get_max(int*arr, int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int arr1[3] = { a, b, c };
//	int arr2[3] = { a+b, c, b };
//	int arr3[3] = { b, a, b+c };
//	int len = 3;
//	double m=get_max(arr1, 3)*1.0/(get_max(arr2, 3)*get_max(arr3, 3));
//	printf("%.3lf", m);
//	return 0;
//}

//int main()
//{
//	int n, i, j;//i为我家门牌号，j为总共有多少家
//	scanf("%d", &n);
//	for (j = 1;; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			if((1+j)*j/2-3*i==n)
//			{
//				printf("%d %d",i,j);
//				return 0;
//			}
//		}
//	}
//}

//#include<stdio.h>
////确定进制
//int main()
//{
//	int p, q, r;
//	scanf("%d %d %d", &p, &q, &r);
//	int flag = 0;
//	for (int i = 2; i <= 16; i++)
//	{
//
//	}
//	if (flag == 0)
//	{
//		printf("0");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int decimalToBase(int decimal, int base) {
//    int result = 0;
//    int multiplier = 1;
//
//    while (decimal > 0) {
//        int remainder = decimal % base;
//        result += remainder * multiplier;
//        decimal /= base;
//        multiplier *= 10;
//    }
//
//    return result;
//}
//int baseToDecimal(const char* number, int base) {
//    int result = 0;
//    int length = strlen(number);
//
//    for (int i = 0; i < length; i++) {
//        char digit = number[i];
//        int value = (digit >= '0' && digit <= '9') ? (digit - '0') : (digit - 'A' + 10);
//        if (value >= base) {
//            printf("无效的数字：%c\n", digit);
//            return -1;
//        }
//        result = result * base + value;
//    }
//
//    return result;
//}
//
//int main() {
//    int p, q, r;
//    scanf("%d %d %d", &p, &q, &r);
//
//    //int result = decimalToBase(decimal, base);//转换结果 十进制数 目标进制
//
//    int flag = 0;
//    for (int i = 2; i <= 16; i++)
//    {
//
//        char number[32] = { 0 };
//        scanf("%s %d", number,&i);
//        int pBase = baseToDecimal(p, i);
//       // number[32] = { 0 };
//        scanf("%s %d", number, &i);
//		int qBase = baseToDecimal(q, i);
//       // number[32] = { 0 };
//        scanf("%s %d", number, &i);
//		int rBase = baseToDecimal(r, i);
//
//		if (pBase * qBase == rBase)
//		{
//			printf("%d", i);
//			flag = 1;
//			break;
//		}
//    }
//    if (flag == 0)
//    {
//    	printf("0");
//    }
//    return 0;
//}

//#include <stdio.h>
////#include <math.h>
//int main()
//{
//	int x;
//	char a, b;
//	scanf("%c %c", &a, &b);
//	scanf("%d", &x);
//	int i = 0;
//	for (i = 0; i * i <= x; i++)
//	{
//		;
//	}
//	printf("%d", i - 1);
//
//	return 0;
//}

//int mySqrt(int x);
//
//int main() {
//    int x;
//    scanf("%d", &x);
//
//    int result = mySqrt(x);
//
//    printf("x 的平方根为: %d\n", result);
//
//    return 0;
//}
//
//int mySqrt(int x) {
//    if (x <= 1) {
//        return x;
//    }
//
//    long left = 1;
//    long right = x;
//    while (left <= right) {
//        long mid = left + (right - left) / 2;
//        long square = mid * mid;
//        if (square == x) {
//            return (int)mid;
//        }
//        else if (square < x) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return (int)right;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101] = { 10000000 };
//	int max = arr[0];
//	int i = 0;
//	while(i < n)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int sum1 = 0, sum2 = 0;
//	int count1=0, count2 = 0;
//	for (int i = 1; i <=n; i++)
//	{
//		if (i % k == 0)
//		{
//			sum1 += i;
//			count1++;
//		}
//		else
//		{
//			sum2 += i;
//			count2++;
//		}
//	}
//	printf("%.1lf %.1lf", sum1*1.0/count1, sum2*1.0/count2);
//	return 0;
//}

//int main()
//{
//	int a, count = 0;
//	scanf("%d", &a);
//	while (a >= 1)
//	{
//		a /= 2;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = n;
//	int countplus = n;
//	for(int i=1;i<=(1+n)*n/2;i++)
//	{
//
//			if(i<10)
//			{
//				printf("0%d", i);
//			}
//			else
//			{
//				printf("%d", i);
//			}
//			count--;
//			if(count==0)
//			{
//				printf("\n");
//				countplus--;
//				count = countplus;
//			}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	int count_2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 10 == 2)
//		{
//			count_2++;
//		}
//		if (i / 10 % 10 == 2)
//		{
//			count_2++;
//		}
//		if (i / 100 % 10 == 2)
//		{
//			count_2++;
//		}
//		if (i / 1000 % 10 == 2)
//		{
//			count_2++;
//		}
//	}
//	printf("%d", count_2);
//	return 0;
//}

#include <stdio.h>
int main()
{

	return 0;
}





