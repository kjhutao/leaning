#pragma once
#include<stdio.h>
#include<stdlib.h>

//����
#define ROW 9
#define COLUMN 9

#define ROWS ROW + 2
#define COLUMNS COLUMN + 2

//�����׵���ʾ
#define SETMINE  '0'
//�����������ʾ
#define SHOWMINE  '*'


//��ӡ��Ϸ�˵�
void printMenu();
//��Ϸʵ��
void game();
//��ʼ����Ϸ����
void initScene(char mine[ROWS][COLUMNS], int rows, int column, char set);
//��ʾ����
void showScene(char mine[ROWS][COLUMNS], int row, int column);
