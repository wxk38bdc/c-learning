#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);//��ʼ�� ����

void displayboard(char board[ROW][COL], int row, int col);//��ӡ����

void playermove(char board[ROW][COL], int row, int col);//�������

void computermove(char board[ROW][COL], int row, int col);//�������� ��û��������������

char iswin(char board[ROW][COL], int row, int col);