#define _CRT_SECURE_NO_WARNINGS 1
//扫雷游戏测试代码
#include "game.h"//引用头文件
void menu()
{
	printf("*************************************\n");
	printf("********** 1. play  0. exit *********\n");
	printf("*************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	
	DisplayBoard(show, ROWS, COLS);
	//布置雷
	SetMine(mine, ROWS, COLS);
	DisplayBoard(mine, ROWS, COLS);
	//扫雷
	FindMine(mine, show, ROWS, COLS);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数种子
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}