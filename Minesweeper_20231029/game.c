#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//����ͷ�ļ�

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)//��
	{
		for (j = 0; j < cols; j++)//��
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 1; i <= col - 2; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row - 2; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col - 2; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % (row - 2) + 1;//1-9
		int y = rand() % (col - 2) + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//����x��y������Χ�м�����
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < (row-2) * (col-2) - EASY_COUNT)
	{
		printf("�������Ų��׵����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROWS, COLS);
				break;
			}
			else//2.������
			{
				//����x��y������Χ�м�����
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == (row-2) * (col-2) - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}
