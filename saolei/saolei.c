#include"saolei.h"


int main(void) {
	int input = 0;
	
	do {
		//打印游戏菜单
		printMenu();
		//选择
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			//游戏实现
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("你的输入有误，请输入0或者1\n");
			break;
		}
	} while (input);

	return 0;
}