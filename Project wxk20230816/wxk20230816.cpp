#define _CRT_SECURE_NO_WARNINGS
#define ��  (
#define  ��  )
#define  ��  ,
#define  ��  ;
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include <math.h> //������ѧ����
#include<windows.h>
//#include <float.h> //����������
//#include <limits.h> //�����������������ֵ����
//#include <locale.h> //���屾�ػ�����

//#include <wctype.h> //���ַ�����
//#include <algorithm> //STL ͨ���㷨
//#include <bitset> //STL λ������
//#include <cctype>
//#include <cerrno>
//#include <cmath>
//#include <complex> //������#include <cstdio>#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <deque> //STL ˫�˶�������
//#include <exception> //�쳣������
//#include <fstream>
//#include <functional> //STL �������㺯���������������
//#include <limits>
//#include <list> //STL �����б�����#include <map> //STL ӳ������
//#include <iomanip>
//#include <ios> //�������룯���֧��#include <iosfwd> //���룯���ϵͳʹ�õ�ǰ������
//#include <iostream>
//#include <istream> //����������
//#include <ostream> //���������
//#include <queue> //STL ��������
//#include <set> //STL ��������#include <sstream> //�����ַ�������
//#include <stack> //STL ��ջ����
//#include <stdexcept> //��׼�쳣��
//#include <streambuf> //�ײ����룯���֧��
//#include <utility> //STL ͨ��ģ����
//#include <vector> //STL ��̬��������
//#include <cwchar>
//#include <cwctype>using namespace std;//////////////////////////////////////////////////////////////////////////C99 ����
//#include <fenv.h> //���㻷��
//#include <inttypes.h> //������ʽת��
//#include <stdbool.h> //��������
//#include <stdint.h> //���ͻ���
//#include <tgmath.h> //ͨ��������ѧ��

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

////20�뵹��ʱ,from GPT3.5
//#include <stdio.h>
//#include <windows.h>
//
//int main() 
//{
//    int seconds = 20;
//
//    while (seconds > 0) {
//        printf("%d seconds remaining...\n", seconds);
//        Sleep(1000);
//        seconds--;
//    }
//
//    printf("Countdown completed!\n");
//
//    return 0;
//}

//int getmax(int a,int b)
//{
//	int max = 0;
//	if (a >= b)
//		max = a;
//	else
//		max = b;
//	return max;
//}
//int main()
//{
//	int x = 0;
//	int	y = 0;
//	scanf("%d %d", &x,&y);
//	int z = getmax(x, y);
//	printf("���ֵ��:%d", z);
//	return 0;
//}

//void swap(int* px,int* py)//����xy�ĵ�ַ
//{
//	int z = *px;
//		*px = *py;
//		*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()//�������100-200����
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0 && i % 13 != 0 && i % 17 != 0)
//			printf("%d\n", i);
//		
//	}
//	return 0;
//}

//ʵ����������Ķ��ֲ���
//#define mian main
//int bs(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{ 
//		int mid = left + (right - left) / 2;
//	if (arr[mid] < k)
//		left = mid + 1;
//	else if (arr[mid] > k)
//		right = mid - 1;
//	else
//		return mid;
//	}
//	return -10086;
//}
//int mian()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bs(arr,k,sz);
//	if (ret == -10086)
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num��������%d��\n", num);
//	add(&num);
//	printf("num��������%d��\n", num);
//	add(&num);
//	printf("num��������%d��\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d", 43)));
//	return 0;
//}

////�����ݹ�ʾ�������һ�����ֵ�ÿһλ
//void draw(unsigned int num)
//{
//	if (num > 9)
//	{
//		draw(num / 10);
//	}
//	printf("%u ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	draw(num);
//	return 0;
//}

//��д��������������ʱ���������ַ������ȣ���ģ��ʵ��strlen
//int mystrlen(char* str)
//{
//	int count = 0;
//	for (; *str != '\0'; count++)
//	{
//		str++;
//	}
//	return count;
//}
//int mystrlen(char* str)//ͨ�������ݹ�ʵ�֣�������ʱ����
//{
//	if (*str != '\0')
//		return 1+mystrlen(str + 1);
//	else
//		return 0;
//}
//int main()//be careful!
//{
//    char arr[10];
//    scanf("%s", arr);
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int jiecheng(int x)
//{
//	if (x > 1)
//	{
//		return x * jiecheng(x - 1);
//	}
//	else if (x == 0 || x == 1)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = jiecheng(a);
//	printf("%d", b);
//	return 0;
//}
//int fib(int x)//�õݹ���fibonacci���еĵ�n�1 2 3 5 8... 
//{
//	if (x == 1)
//		return 1;
//	else if (x > 1)
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fib(a);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//���ﲻ���жϣ����Ǹ�ֵ
//			printf("%d", i);
//	}
//	return 0;
//}

//�������������Ӵ�С���
//void swap(int* px,int* py)//����xy�ĵ�ַ
//{
//	int z = *px;
//		*px = *py;
//		*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 300; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()//��a��b�����Լ�� ��շת���������Ŷ
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a < b) ? (b-a) : (a - b);//��Ŀ������
//	for (;c > 0;c--)
//	{ 
//		if (a % c == 0 && b % c == 0)
//		{
//			printf("a��b�����Լ����%d\n", c);
//			break;
//		}
//	}
//	return 0;
//}

//int main()//������������Ԫ��
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,0,120 };
//	int i = 0;
//	int max = arr[0];
//	while (i <=9)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}

//��ӡ99�˷���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά����
//int main()
//{
//	int arr[3][4] = { 0,1,2,3,1,2,3,4,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j = 0; j < 4;j++ )
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð������
//void bubble_sort(int arr[], int sz)//�βο�����ָ�����ʽ
//{
//	int i = 1;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i ; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{ 
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 8,2,5,4,7,6,9,3,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//������ ����ChatGPT
/*
#include <stdio.h>

char board[3][3]; // ����������

void initialize_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void print_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
}

int is_board_full() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // ����δ��
            }
        }
    }
    return 1; // ��������
}

int is_winner(char player) {
    int i;

    // �����
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; // ��һ����ͬ
        }
    }

    // �����
    for (i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1; // ��һ����ͬ
        }
    }

    // ���Խ���
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1; // ���ϵ����¶Խ�����ͬ
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1; // ���ϵ����¶Խ�����ͬ
    }

    return 0; // û�л�ʤ��
}

int main() {
    int row, col;
    char player = 'X';

    initialize_board();

    printf("��ӭ������������Ϸ��\n");

    while (1) {
        printf("\n");
        print_board();

        printf("��� %c���������������λ�ã��� �У���", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= 3 || col < 0 || col >= 3) {
            printf("��Ч��λ�ã����������롣\n");
            continue;
        }

        if (board[row][col] != ' ') {
            printf("��λ���Ѿ��������ˣ����������롣\n");
            continue;
        }

        board[row][col] = player;

        if (is_winner(player)) {
            printf("\n");
            print_board();
            printf("��� %c ��ʤ��\n", player);
            break;
        }

        if (is_board_full()) {
            printf("\n");
            print_board();
            printf("ƽ�֣�\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X'; // �л����
    }

    return 0;
}*/

//int main()
//{
//    srand((unsigned int)time(NULL));
//    int a = rand();
//    printf("%d", a);
//    return 0;
//}

//�ַ������� ��ͨ����
//int main()
//{
//    char arr[] = "abcdef";
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz-2;
//    while (left < right)
//    {
//        char tmp = arr[right];
//        arr[right] = arr[left];
//        arr[left] = tmp;
//        left++;
//        right--;
//    }
//    printf("%s\n", arr);
//    return 0;
//}

//�ں����ڲ�����ʹ��sizeof�����ַ������ȣ����ǿ�����strlen
 /*void reverse(char* arr)
{
        int left = 0;
        int right = strlen(arr)-1;
        while (left < right)
        {
            char tmp = arr[right];
            arr[right] = arr[left];
            arr[left] = tmp;
            left++;
            right--;
        }
}*/
//�õݹ鷽��ʵ���ַ������� ��Ҫ�ǶԺ���˼������
//void reverse(char* str)
//{
//    char tmp = *str;
//    int len = strlen(str);
//    *(str) = *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if (strlen(str + 1) > 1)
//        reverse(str + 1);
//    *(str + len - 1) = tmp;
//
//}
//int main()
//{
//    char arr[100];
//    scanf("%s", arr);
//    reverse(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//������һ�ַ�����ʵ�� �����ʱ���� �������
//���������bug
//void reverse(char arr[], int left, int right)
//{
//    char tmp = arr[left];
//    arr[left] = arr[right];
//    arr[right] = tmp;
//    if (left<right)//λ�ò���
//        reverse(arr, left + 1, right - 1);
//}
//����Ϊ��ȷ�汾
//void reverse(char* arr, int left, int right)
//{
//    if (left<right)//λ�ö�
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        reverse(arr, left + 1, right - 1); 
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int left = 0;
//    int len = strlen(arr);
//    int right = len - 1;
//    reverse(arr, left, right);
//    printf("%s\n", arr);
//    return 0;
//}
//int DigitSum(int i)
//{
//    if (i >=10)
//    return i % 10 + DigitSum(i / 10);
//    if(i<10)
//    return i;
//}
//int main()
//{
//    int i = 0;
//    
//    scanf("%d", &i);
//    int sum=DigitSum(i);
//    printf("%d\n", sum);
//    return 0;
//}

//int pow(int n, int k)//���õݹ�
//{
//    int i = 1;
//    for (; k > 0; k--)
//    {
//        i*= n;
//    }
//        return i;
//}

//double Pow(int n, int k)
//{
//    if (k > 0)
//    {
//        return n * Pow(n, k - 1);
//    }
//    else if (k == 0 && n != 0)
//    {
//        return 1;
//    }
//    else
//        return 1.0 / Pow(n, -k);
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d %d", &n, &k);
//    double ret = Pow(n, k);
//    printf("%lf", ret);
//    return 0;
//}



//int main()
//{
//    int arr1[3];
//    int arr2[3];
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for(i=0;i<3;i++)
//    {
//        int z=arr2[i];
//        arr2[i] = arr1[i];
//        arr1[i] = z;
//    }
////����ѭ����ӡ
//    printf("%d %d %d\n", arr1[0],arr1[1],arr1[2]);
//    printf("%d %d %d\n", arr2[0],arr2[1],arr2[2]);
//    return 0;
//}

//int main()
//{
//    int a = 3;
//    int b = -5;
//    int c = 0;
//    c = a | b;
//    printf("c=%d", c);
//    return 0;
//}

////��һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        b = 0;
//        b = a & 1;
//        if (b == 1)
//        {
//            count++;
//        }
//        a = a >> 1;
//    }
//    printf("��%d��1", count);
//    return 0;
//}

//int main()
//{
//    int a = (int)3.14;
//    printf("%d\n", a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//    i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}

//int main()
//{
//    int i = 10;
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("%d", i);
//    return 0;
//}

//int func(int i)
//{
//    if (i == 1)
//        return 1;
//    else if (i == 2)
//        return 2;
//    else
//        return func(i - 1) + func(i - 2);
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int b=func(a);
//    printf("%d\n", b);
//    return 0;
//}

////��һ��ʵ�ַ��� �����������
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int arr[50];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    int count = 0;
//    scanf("%d", &del);
//    int arr2[50];
//    i = 0;
//    while (i < n)
//    {
//        if (arr[i]==del)
//        {
//            count+=1;
//        }
//        i++;
//    }
//    int j = 0;
//    for (i = 0; i < n ; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr2[j] = arr[i];
//            j++;
//        }
//    }
//    for (i = 0; i < n-count; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    int min = arr[0];
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] <min)
//        {
//            min = arr[i];
//        }
//    }
//    int a = max - min;
//    printf("%d",a );
//    return 0;
//}

//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//        else if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", ch + 32);
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i =10000; i < 100000; i++)
//    {
//    int a1 = i / 10000;
//    int a2 = i % 10000;
//    int b1 = i / 1000;
//    int b2 = i % 1000;
//    int c1 = i / 100;
//    int c2 = i % 100;
//    int d1 = i / 10;
//    int d2 = i % 10;
//    if (a1 * a2 + b1 * b2 + c1 * c2 + d1 * d2 == i)
//        printf("%d\n", i);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0x11222234;
//    int* pa = &a;
//    char* pc = (char*) & a;
//    printf("%p\n", pa);
//    printf("%p\n", pc);
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <=10; i++)//Խ����ʣ����Ұָ��
//    {
//        *(p++) = i;
//        printf("%p\n", p);
//    }
//    return 0;
//}

//int* test()
//{
//    int i = 0;
//    return &i;
//}
//int main()
//{
//    int* p = test();
//    printf("haha\n");
//    if (p != NULL)
//    {
//        printf("%d\n", *p);
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        *p++ = 3;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int* pa = &a;
//    int** ppa = &pa;
//    printf("%p %p", pa, ppa);
//    **ppa = 20;
//
//    *pa = 10;
//    printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//    int arr1[4] = { 0,1,2,3 };
//    int arr2[4] = { 5,7,8,4 };
//    int arr3[4] = { 7,7,9,9 };
//    int* parr[3] = { arr1,arr2,arr3 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j< 4; j++)
//        {
//            printf("%d ", parr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//struct Peo
//{
//    char name[10];
//    char telenum[12];
//    char sex[5];
//    int height;
//}p1,p2;
//void print(struct Peo *sp)
//{
//    printf("%s %s %s %d\n", sp->name, sp->telenum, sp->sex, sp->height);
//}
//int main()
//{
//    struct Peo p1 = { "zhangsan","12203211156","male",176 };
//    printf("%s %s %s %d\n", p1.name, p1.telenum, p1.sex, p1.height);
//    print(&p1);
//    //printf("%s %s %s %d\n", p1->name, p1->telenum, p1->sex, p1->height);//����ʾ��
//    return 0;
//}

//int main()//���׵Ĵ���
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a=%d b=%d c=%d", a, b, c);
//    return 0;
//}

//int count_num_of_1(int n)//version 1
//{
//    int count = 0;
//    while (n!=0)
//    {
//        int a=n % 2;
//        if (a == 1)
//        {
//            count++;
//        }
//        n /= 2;
//    }
//    return count;
//}
//int count_num_of_1(int n)//version unbelievable
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);//ȥ�����������������һ��1
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int i = count_num_of_1(num);
//    printf("%d\n", i);
//    return 0;
//}

//int count_dif(int x, int y)
//{
//    int count = 0;
//    int i = 0;
//    for(i=0;i<32;i++)
//    { 
//        if ((x & 1) != (y & 1))
//        {
//            count++;
//        }
//        x=x >> 1;
//        y=y >> 1;
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = count_dif(a, b);
//    printf("��ͬ��λ���ǣ�%d\n", c);
//    return 0;
//

//int Add(int x, int y)//����������
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 15;
//    int c = Add(a, b);
//    printf("%d\n", c);
//    return 0;
//}

//int main()//��ϰ 99�˷���
//{
//    int i = 0, j = 0;
//    for (i = 1; i < 10; i++)
//    {
//        for (j = 1; j <=i; j++)
//        {
//            printf("%d*%d=%-3d", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int fib(int i)
//{
//    if (i == 1 || i == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(i - 1) + fib(i - 2);
//    }
//}
//int main()
//{
//    int a = 0;
//    again:
//    printf("������һ����������");
//    scanf("%d", &a);
//    if (a < 1)
//    {
//        printf("����������������룡\n");
//        goto again;
//    }
//    else
//    {
//        int b = fib(a);
//        printf("%d��쳲��������ǣ�%d", a, b);
//    }
//    return 0;
//}

//int aaa(int i)
//{
//    int j = sqrt(i);
//    int k = 0;
//    for (k = 2; k <= j; k++)
//    {
//        if (i % k == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int a = 0;
//    again:
//    printf("������һ����Ȼ����");
//    scanf("%d", &a);
//    if (a < 0)
//    {
//        printf("����Ƿ�������������\n");
//        goto again;
//    }
//    else if (a == 0 || a == 1)
//    {
//        printf("%d����������Ҳ���Ǻ���",a);
//    }
//    else
//    {
//        int b = aaa(a);
//        if (b == 1)
//        {
//            printf("%d������",a);
//        }
//        else if (b == 0)
//        {
//            printf("%d�Ǻ���",a);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int i = 1;
//    int ret = 1;
//    scanf("%d", &a);
//    int j = 0;
//    for (i = 1; i <= a; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j;
//        }
//        i += ret;
//    }
//    //printf("%d\n", ret);
//    printf("%d\n", i);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    //int i = 0;
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehehehehahahaha\n");
//    }
//    return 0;
//}
#include<assert.h>
#include<string.h>
//int my_strlen(const char* str)
//{
//    int count = 0;
//    assert(str);//���� 
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "hello bit";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

//int Add(int i, int j)
//{
//    return i + j;
//}
//int main()
//{
//    int a = 0, b = 10;
//    int c = Add(a, b);
//    printf("%d\n", c);
//    return 0;
//}

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        if (a == b && b == c)
        {
            printf("�ȱ������Σ�");
        }
        else if (a == b || b == c || c == a)
        {
            printf("���������Σ�");
        }
        else
        {
            printf("��ͨ�����Σ�");
        }
    }
    else
    {
        printf("���������Σ�");
    }
    return 0;
}