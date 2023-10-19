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
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 5; i <=n; i+=2)
//	{
//		if (is_prime(i) == 1 && is_prime(i - 2) == 1)
//		{
//			printf("%d %d\n", i - 2, i);
//			count++;
//		}
//	}
//	if(count == 0)
//	{
//		printf("empty\n");
//	}
//	return 0;
//}

//先缓一缓
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[210] = { 0 };
//	//输入字符串
//	scanf("%[^\n]", arr);
//	//获取字符串长度
//	int len = strlen(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void replaceSubstring(char* original, const char* find, const char* replace) {
//    char newString[1000]; // 适当分配足够大的缓冲区
//    char* start = original;
//    while ((start = strstr(start, find))) {
//        strncpy(newString, original, start - original); // 复制前半部分
//        newString[start - original] = '\0'; // 在新字符串末尾添加 null 终止符
//        strcat(newString, replace); // 添加替换字符串
//        strcat(newString, start + strlen(find)); // 添加剩余部分
//        strcpy(original, newString); // 将新字符串复制回原始字符串
//        start += strlen(replace); // 移动到下一个匹配位置
//    }
//}
//
//int main() {
//    char str[] = "This is a test. This is only a test.";
//    const char* find = "is";
//    const char* replace = "was";
//    replaceSubstring(str, find, replace);
//    printf("%s\n", str);
//    return 0;
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
//int reverse_num(int n)
//{
//	int tmp = 0;
//	while (n)
//	{
//		tmp = tmp * 10 + n % 10;
//		n /= 10;
//	}
//	return tmp;
//}
//int main()
//{
//	int m = 0, n = 0, count = 0, count_num[100000] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (is_prime(i) == 1&&is_prime(reverse_num(i))==1)
//		{
//			count_num[count] = i;
//			count++;
//		}
//	}
//	for (int i = 0; i <count-1; i++)
//	{
//		printf("%d,", count_num[i]);
//	}
//	if (count != 0)
//	{
//		printf("%d", count_num[count - 1]);
//	}
//	if(count==0)
//	{
//		printf("No");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1, t = 0;
//	scanf("%d", &t);
//	int A = 0, B = 0;
//	while (n <= t)
//	{
//		int arr[100] = { 0 };
//		int count = 0;
//		int i = 0;
//		int count_1 = 0,count_0 = 0;
//		int m = n;
//		while (m)
//		{
//			arr[count] = m % 2;
//			m /= 2;
//			count++;
//		}
//		for (i = 0; i < count; i++)
//		{
//			if (arr[i] == 1)
//			{
//				count_1++;
//			}
//			else
//			{
//				count_0++;
//			}
//		}
//		//printf("%d:%d %d\n", n, count_1, count_0);
//		if (count_1 > count_0)
//		{
//			A++;
//		}
//		else
//		{
//			B++;
//		}
//		n++;
//	}
//	printf("%d %d", A, B);
//	return 0;
//}

//#include<stdio.h>
////用递归算法将一个十进制数转换为任意进制数M(M<=16)
////Thanks GItHub copilot!!!I love you!!!
//void convert(int n, int m)
//{
//	if (n>0&&m<=10)
//	{
//		convert(n / m, m);
//		printf("%d", n % m);
//	}
//	else if (n>0&&m>10)
//	{
//		convert(n / m, m);
//		if (n % m >= 10)
//		{
//			printf("%c", n % m - 10 + 'A');
//		}
//		else
//		{
//			printf("%d", n % m);
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	convert(n, m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	int i = 0, j = 0;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int ret1 = 1, ret2 = 1;
//	for (i = 0; i < len1; i++)
//	{
//		ret1*=arr1[i]-'A'+1;
//	}
//	for (j = 0; j < len2; j++)
//	{
//		ret2 *= arr2[j] - 'A' + 1;
//	}
//	if (ret1 % 47 == ret2 % 47)
//	{
//		printf("GO");
//	}
//	else
//	{
//		printf("STAY");
//	}
//	return 0;
//}

////冒泡排序
//void bubblesort(int arr[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = 10;
//	bubblesort(arr, len);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char s[100];
//	scanf("%[^\n]", s);
//	printf("%s", s);
//	return 0;
//}

#include<stdio.h>
int main()
{

	return 0;
}