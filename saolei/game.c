#include"saolei.h"

//打印游戏菜单
void printMenu(){
	printf("******************************\n");
	printf("**********  扫  雷  **********\n");
	printf("**********  1.game  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
	printf(":");
}

//初始化游戏场景
void initScene(char mine[ROWS][COLUMNS], int rows, int columns, char set) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j = 0;
		for (j = 0; j < columns; j++) {
			mine[i][j] = set;
		}
	}

}

//显示场景
void showScene(char mine[ROWS][COLUMNS], int row, int column) {
	int i = 0;
	printf("—————— 扫 雷——————\n");
	for (i = 0; i <= column; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		int j = 0;
		printf("%d ", i + 1);
		for (j = 1; j <= column; j++) {
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}

}
//设置雷
void setMine(char mine[ROW][COLUMNS], int row, int column, char set) {
	int x = 0;
	int y = 0;
	int count = MINENUM;
	while (count) {
		x = rand() % 9;
		y = rand() % 9;
		if (mine[x][y] != '1') {
			mine[x][y] = '1';
			count--;
		}

	}
}

int mineCount(char mine[ROWS][COLUMNS], int x, int y) {
	int count = 0;
	int i = 0;
	for (i = -1; i <= 1; i++) {
		int j = 0;
		for (j = -1; j <= 1; j++) {
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}
//排查雷
void findMine(char mine[ROWS][COLUMNS], char showMine[ROWS][COLUMNS], int row, int column) {
	int x = 0;
	int y = 0;
	int win = 0;//判断是否胜利
	while (win < row * column - MINENUM) {
		
		printf("请输入你排查的坐标：");
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x < ROWS && y > 0 && y < COLUMNS) {
			if (mine[x][y] == '1') {
				printf("你踩到雷了，游戏结束！\n");
				showScene(mine, ROW, COLUMN);
				break;
			}
			else {
				showMine[x][y] = (mineCount(mine, x, y) + '0');
				//显示场景
				showScene(showMine, ROW, COLUMN);
			}
		}
		else {
			printf("输入坐标有误，请重新输入！\n");
		}
	}
	if (win == row * column - MINENUM) {
		printf("恭喜你，排雷成功！\n");
	}

}

//游戏实现
void game(){
	//随机数种子
	srand((unsigned)time(NULL));

	//存放雷的数组
	char mine[ROWS][COLUMNS] = { SETMINE };
	//显示排雷的数组
	char showMine[ROWS][COLUMNS] = { SHOWMINE };

	//初始化游戏场景	
	//初始化雷的数组
	initScene(mine, ROWS, COLUMNS, '0');
	//初始化显示雷的数组
	initScene(showMine, ROWS, COLUMNS, '*');
	//显示场景
	showScene(showMine, ROW, COLUMN);
	//设置雷
	setMine(mine, ROW, COLUMN, '1');
	//showScene(mine, ROW, COLUMN);
	//排查雷
	findMine(mine, showMine, ROW, COLUMN);

}