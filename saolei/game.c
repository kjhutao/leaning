#include"saolei.h"

//打印游戏菜单
void printMenu(){
	printf("******************************\n");
	printf("**********  扫  雷  **********\n");
	printf("**********  1.game  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

void initScene(){
	//存放雷的数组
	char mine[ROWS][COLUMN] = { SETMINE };
	//显示排雷的数组
	char mine[ROWS][COLUMN] = { SHOWMINE };

}
//游戏实现
void game(){
	//初始化游戏场景
	initScene();
}