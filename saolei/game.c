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
	for (i = 1; i <= row; i++) {
		int j = 0;
		printf("%d ", i + 1);
		for (j = 1; j <= column; j++) {
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
//�Ų���
void findMine(char mine[ROWS][COLUMNS], char showMine[ROWS][COLUMNS], int row, int column) {
	int x = 0;
	int y = 0;
	int win = 0;//�ж��Ƿ�ʤ��
	while (win < row * column - MINENUM) {
		
		printf("���������Ų�����꣺");
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x < ROWS && y > 0 && y < COLUMNS) {
			if (mine[x][y] == '1') {
				printf("��ȵ����ˣ���Ϸ������\n");
				showScene(mine, ROW, COLUMN);
				break;
			}
			else {
				showMine[x][y] = (mineCount(mine, x, y) + '0');
				//��ʾ����
				showScene(showMine, ROW, COLUMN);
			}
		}
		else {
			printf("���������������������룡\n");
		}
	}
	if (win == row * column - MINENUM) {
		printf("��ϲ�㣬���׳ɹ���\n");
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