#define _CRT_SECURE_NO_WARNINGS 1
//ɨ����Ϸ���Դ���
#include "game.h"//����ͷ�ļ�
void menu()
{
	printf("*************************************\n");
	printf("********** 1. play  0. exit *********\n");
	printf("*************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	
	DisplayBoard(show, ROWS, COLS);
	//������
	SetMine(mine, ROWS, COLS);
	DisplayBoard(mine, ROWS, COLS);
	//ɨ��
	FindMine(mine, show, ROWS, COLS);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}