#include"saolei.h"

//��ӡ��Ϸ�˵�
void printMenu(){
	printf("******************************\n");
	printf("**********  ɨ  ��  **********\n");
	printf("**********  1.game  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
	printf(":");
}

//��ʼ����Ϸ����
void initScene(char mine[ROWS][COLUMNS], int rows, int columns, char set) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j = 0;
		for (j = 0; j < columns; j++) {
			mine[i][j] = set;
		}
	}

}

//��ʾ����
void showScene(char mine[ROWS][COLUMNS], int row, int column) {
	int i = 0;
	printf("������������ ɨ �ס�����������\n");
	for (i = 0; i <= column; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++) {
		int j = 0;
		printf("%d ", i + 1);
		for (j = 0; j < column; j++) {
			printf("%c ", mine[i][j]);
		}
		printf("\n");
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
	//��ʾ����
	showScene(showMine, ROW, COLUMN);
}