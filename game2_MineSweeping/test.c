#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("*******    1.begin   **********\n");
	printf("*******    0.exit    **********\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//���úõ���
	char show[ROWS][COLS] = { 0 };//��Ų���׵���Ϣ
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(show, ROWS,COLS,'*');

	//DisplayBoard(mine, ROW, COL);//ʵ�ʲ���ʾ
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW,COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case(0):
			printf("�˳���Ϸ\n");
			break;
		case(1):
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("�������������\n");
			break;
		}
	} while (input);

	return 0;
}