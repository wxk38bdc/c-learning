#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>

//int main()
//{
//	unsigned int i = 020462340677;
//		printf("%d\n", i);
//	return 0;
//}

//������ֽ���/С���ֽ���
//int main()
//{
//	int a = 1;
//	int b = *(char*)&a;
//	printf("%d\n", b);//b=1������int����ΪС���ֽ���洢
//	return 0;
//}

////exercise_1
//int main()
//{
//	char a = -1;//-1
//	signed char b = -1;//-1
//	unsigned char c = -1;//255
//	printf("a=%d,b=%d,c=%d ", a, b, c);//%d��Ӧ�з������ͣ�ʹ��char����Ҫ������������
//	return 0;
//}

//exercise_2
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//exercise_3
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//i=0 -> i=4294967295
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//255
////strlen�����ַ����ĳ��ȣ���ע�����ַ�����'\0'������0��֮ǰ���ֶ����ַ�
//	return 0;
//}

//�����������飬ʵ��һ����������������λ��ż��֮ǰ
//˼·���ں����д���3�����飬1����������1����ż����1�����
// д����shit mountains�����վ���д������
//
//int main()
//{
//	int arr[9] = { 1,3,5,7,9,11,13,15,17};
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//		else if (arr[i] % 2 == 0)
//		{
//			arr2[k] = arr[i];
//			k++;
//		}
//	}
//	int j1 = j;
//	for (i = 0,j=0; i < j1; i++,j++)
//	{
//		arr[i] = arr1[j];
//	}
//	for (i = j,k=0; i < 9; i++,k++)
//	{
//		arr[i] = arr2[k];
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//������������
//��ô�Ż���
//int main() 
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	//����
//	for (i = 0; i < j; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	while (((arr[0]<=arr[1])&& (arr[1] <= arr[2])&& (arr[2] <= arr[3])&& (arr[3] <= arr[4])&& (arr[4] <= arr[5])&& (arr[5] <= arr[6])&& (arr[6] <= arr[7])&& (arr[7] <= arr[8])&& (arr[8] <= arr[9]))!=1)
//	{
//		for (i = 0; i < j-1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i <j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ָ�������ѧϰ
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", parr[i][j]);//ע�⣺ *(p+i)<=>p[i],����*(p[i]+j)<=>p[i][j]
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[10] = &arr;
//	int* q = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(*p + i));//ʹ�������ܱ�Ť
//		printf("%d ", *(q + i));//�����ַ�ָ����÷�
//	}
//	return 0;
//}

//��ӡ��ά����
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////����ָ����ȷ�÷�
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//��һ��д��
//			printf("%d ", p[i][j]);//��2��д��
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,5,6,9,8,7,5,4,1,0,2,3,6 };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);//arrָ��Ԫ�أ���һ�У��ĵ�ַ����Ϊ�Ƕ�ά����
//	return 0;
//}

//����ָ��
//int test(const char* str)
//{
//	printf("ok\n");
//	return 0;
//}
//int main()
//{
//	//int (*pf)(const char*) = test;//����д������
//	int (*pf)(const char*) = &test;
//	(*pf)("abc");
//	pf("abc");
//	test("abc");
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();//�޷�����
//	return 0;
//}

//ʵ�ּ��������ܣ��Ӽ��˳�
//void menu()
//{
//	printf("1.Add 2.Minus 3.Multiply 4.Division 0.exit\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////���㺯��
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������\n");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("����ǣ�%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("1.Add 2.Minus 3.Multiply 4.Division 0.exit\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("���˳�\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������");
//			scanf("%d %d", &x, &y);
//			ret = parr[input](x, y);
//			printf("����ǣ�%d\n",ret);
//		}
//		else
//		{
//			printf("�������������\n");
//		}
//	} while (input);
//
//	return 0;
//}

////ð������_�Ľ�_����qsort
//void Swap(char*buf1,char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char* tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//���������ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//				flag = 0;
//			}
//			/*if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				
//			}*/
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//�������鲢����
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//ð���������
//	bubble_sort(arr, sz,sizeof arr[0]);
//	//��ӡ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(int argc, char* argv[])
//{
//	printf("hello");
//	return 0;
//}

//ð������_��ϰ
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//�������鲢����
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//ð���������
//	bubble_sort(arr, sz);
//	//��ӡ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}