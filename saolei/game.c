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
//������
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

int mineCount(char mine) {
	int count = 0;
	int i = 0;
	for (i = -1; i <= 1; i++) {
		int j = 0;
		for (j = -1; j <= 1; j++) {
			
		}
	}
}
//�Ų���
void findMine(char mine[ROWS][COLUMNS], char showMine[ROWS][COLUMNS], int row, int column) {
	
	while (1) {
		int x = 0;
		int y = 0;
		printf("���������Ų�����꣺");
		scanf_s("%d%d", &x, &y);
		if (mine[x][y] == '1') {
			printf("��ȵ����ˣ���Ϸ������\n");
			break;
		}
		else {
			showMine[x][y] = mineCount(mine);
		}
	}
	

}

//��Ϸʵ��
void game(){
	//���������
	srand((unsigned)time(NULL));

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
	//������
	setMine(mine, ROW, COLUMN, '1');
	//showScene(mine, ROW, COLUMN);
	//�Ų���
	findMine(mine, showMine, ROW, COLUMN);
}