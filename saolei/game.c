#include"saolei.h"

//��ӡ��Ϸ�˵�
void printMenu(){
	printf("******************************\n");
	printf("**********  ɨ  ��  **********\n");
	printf("**********  1.game  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

void initScene(char mine[ROWS][COLUMNS], int rows, int columns, char set) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j = 0;
		for (j = 0; j < columns; j++) {
			mine[i][j] = set;
		}
	}

}
//��Ϸʵ��
void game(){
	
	//����׵�����
	char mine[ROWS][COLUMNS] = { SETMINE };
	//��ʾ���׵�����
	char showMine[ROWS][COLUMNS] = { SHOWMINE };

	//��ʼ����Ϸ����
	//��ʼ���׵�����
	initScene(mine, ROWS, COLUMNS, '0');
	//��ʼ����ʾ�׵�����
	initScene(showMine, ROWS, COLUMNS, '*');
}