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

#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int j = 2; j <= n; j++)
	{
		for (int i = 1; i < j; i++)
		{
			if (j % i == 0)
			{
				sum += i;
			}
		}
		if (sum == j)
		{
			printf("%d\n", j);
		}
		sum = 0;
	}
	return 0;
}