#include"saolei.h"

//��ӡ��Ϸ�˵�
void printMenu(){
	printf("******************************\n");
	printf("**********  ɨ  ��  **********\n");
	printf("**********  1.game  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

void initScene(){
	//����׵�����
	char mine[ROWS][COLUMN] = { SETMINE };
	//��ʾ���׵�����
	char mine[ROWS][COLUMN] = { SHOWMINE };

}
//��Ϸʵ��
void game(){
	//��ʼ����Ϸ����
	initScene();
}