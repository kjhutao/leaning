#pragma once
#include<stdio.h>
#include<stdlib.h>

//行列
#define ROW 9
#define COLUMN 9

#define ROWS ROW + 2
#define COLUMNS COLUMN + 2

//设置雷的显示
#define SETMINE  '0'
//排雷数组的显示
#define SHOWMINE  '*'


//打印游戏菜单
void printMenu();
//游戏实现
void game();
//初始化游戏场景
void initScene(char mine[ROWS][COLUMNS], int rows, int column, char set);
//显示场景
void showScene(char mine[ROWS][COLUMNS], int row, int column);
