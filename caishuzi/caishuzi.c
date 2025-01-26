#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void menu() {
	system("cls");
	printf_s("---------猜 数 字-------\n");
	printf_s("-------- 1. geme  ------\n");
	printf_s("-------- 0. exit  ------\n");
	printf_s("请选择：");
}

void game() {
	int num = rand() % 100 + 1;
	int win = 0;
	int count = 6;
	printf("---------猜 数 字--------\n");	
	while (count) {		
		printf_s("请输入你猜的数字：");
		scanf_s("%d", &win);
		if (win > num) {
			printf_s("你猜的数字大了\n");
			count--;
		}
		else if (win < num) {
			printf_s("你猜的数字小了\n");
			count--;
		}
		else {
			printf_s("恭喜你，你猜对了\n");			
			break;
		}
	}
	if (count == 0) {
		printf_s("你的猜数字次数用完\n");
		system("pause");
	}
}

int main(void) {
	srand((unsigned)time(NULL));
	//猜数字
	
	int input = 0;
	do {
		menu();
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			game();			
			break;
		case 0:
			printf_s("退出游戏！\n");			
			break;
		default:
			printf_s("你的输入错误，请重新选择。\n");
			break;
		}

	} while (input);

	return 0;
}