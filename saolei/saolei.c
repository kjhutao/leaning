#include"saolei.h"


int main(void) {
	int input = 0;
	
	do {
		//��ӡ��Ϸ�˵�
		printMenu();
		//ѡ��
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			//��Ϸʵ��
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������0����1\n");
			break;
		}
	} while (input);

	return 0;
}