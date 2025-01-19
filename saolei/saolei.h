#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����
#define ROW 9
#define COLUMN 9

#define ROWS ROW + 2
#define COLUMNS COLUMN + 2

//�����׵���ʾ
#define SETMINE  '0'
//�����������ʾ
#define SHOWMINE  '*'
//�׵ĸ���
#define MINENUM 10



//��ӡ��Ϸ�˵�
void printMenu();
//��Ϸʵ��
void game();
//��ʼ����Ϸ����
void initScene(char mine[ROWS][COLUMNS], int rows, int column, char set);
//��ʾ����
void showScene(char mine[ROWS][COLUMNS], int row, int column);
//������
void setMine(char mine[ROW][COLUMNS], int row, int column, char set);
//�Ų���
void findMine(char mine[ROWS][COLUMNS], char showMine[ROWS][COLUMNS], int row, int column);
