#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void menu() {
	system("cls");
	printf_s("---------�� �� ��-------\n");
	printf_s("-------- 1. geme  ------\n");
	printf_s("-------- 0. exit  ------\n");
	printf_s("��ѡ��");
}

void game() {
	int num = rand() % 100 + 1;
	int win = 0;
	int count = 6;
	printf("---------�� �� ��--------\n");	
	while (count) {		
		printf_s("��������µ����֣�");
		scanf_s("%d", &win);
		if (win > num) {
			printf_s("��µ����ִ���\n");
			count--;
		}
		else if (win < num) {
			printf_s("��µ�����С��\n");
			count--;
		}
		else {
			printf_s("��ϲ�㣬��¶���\n");			
			break;
		}
	}
	if (count == 0) {
		printf_s("��Ĳ����ִ�������\n");
		system("pause");
	}
}

int main(void) {
	srand((unsigned)time(NULL));
	//������
	
	int input = 0;
	do {
		menu();
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			game();			
			break;
		case 0:
			printf_s("�˳���Ϸ��\n");			
			break;
		default:
			printf_s("����������������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}