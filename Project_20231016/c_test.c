#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	return 0;
//}

//int get_max(int arr[], int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	int count[26] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		count[arr[i] - 'a']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (count[i] == get_max(count, 26))
//		{
//			printf("%c\n%d\n", i + 'a', count[i]);
//			break;
//		}
//	}
//	return 0;
//}

////半途而废的代码
//int main()
//{
//	int Case=0;
//	scanf("%d", &Case);
//	//初始化数组并输入
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr_total[100009] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int arr_add[100009] = { 0 };
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int is_huiwenshu(int* arr, int k)
//{
//	int left = 0, right = k - 1;
//	int flag = 1; // 初始化为1
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//		{
//			return 0; // 直接返回0，不再继续判断
//		}
//		left++;
//		right--;
//	}
//	return flag;
//}
//
//int main()
//{
//	int n = 0, count = 0, i = 0, k = 0;//k用来记录位数
//	scanf("%d", &n);
//	for (int j = 11; j<=n; j++)
//	{
//		k = 0;
//		int arr[5] = { 0 };
//		int tmp = j;
//		while (tmp)
//		{
//			arr[k] = tmp % 10;
//			tmp /= 10;
//			k++;
//		}
//		if (is_huiwenshu(arr,k) == 1 && is_prime(j) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{

	return 0;
}