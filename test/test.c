#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Fact(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else if (n > 0) {
//		return n * Fact(n - 1);
//	}
//}
//int main(void) {
//	//�ݹ�д�׳�
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = Fact(n);
//	printf("%d�Ľ׳���%d\n", n, r);
//
//
//	return 0;
//}

//����һ������M������˳���ӡ������ÿһλ��
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//		printf("%d ", n % 10);
//	} 
//}
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//
//	return 0;
//}

////�õݹ�д쳲�������
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main(void) {
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//
//	return 0;
//}

////��ѭ��д쳲�������
//int main(void) {
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	scanf_s("%d", &n);
//	if (n == 1 || n == 2) {
//		printf("��%d ��쳲�������%d ", n ,1);
//	}
//	else {
//		while (n > 2) {
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		printf("��%d ��쳲�������%d ", n, c);
//	}
//	return 0;
//}

//int main(void) {
//	int a = 10;
//	int b = a << 1;
//	//���ƾ��Ƕ�����λ�������ƣ���߲���
//
//	printf("b = %d\n", b);
//	printf("b = %d\n", a);
//	return 0;
//}
//int main(void) {
//	int a = -10;
//	int b = a >> 1;
//	//�߼�������߼�0���ұ߶���
//	//��������������߼�0��������߼�1���ұ߶���
//
//	printf("b = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//��д����һ�������洢���ڴ��ж�������1�ĸ���
/*int countBitone(unsigned int n) {
	int count = 0;
	while (n) {
		if ((n % 2) == 1) {
			count++;
		}
		n = n / 2;
	}
	return count;
	//�����㷨	
}*/
//int countBitone(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main(void) {
//	int num = 0;
//	scanf_s("%d", &num);
//	int ret = countBitone(num);
//	printf("%d\n", ret);
//
//	return 0;
//}

//��д���뽫13�����������еĵ�5λ�޸�Ϊ1��Ȼ���ڸĻ�0

//int main(void) {
//	int a = 13;
//	//����1
//	/*int n = 16;
//	a = a | n;*/
//	//����2
//	int n = 5;
//	a = a | (1 << (n - 1));
//	
//	printf("%d\n", a);
//	a &= ~(a << (n - 1));
//	printf("%d\n", a);
//	return 0;
//}

//int main(void) {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0) {//if�ж��ű��ʽ��ʱ�򣬿����һ�����ʽ����������d > 0)
//
//	}
//
//	return 0;
//}

//int main(void) {
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0) {
//	//	//ҵ����
//	//	//......
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	//����α����̫ӷ�ף���Ϊ�����߼�
//	while (a = aet_val(), count_val(a), a > 0) {
//		//ҵ����
//		//........
//	}
//	return 0;
//}
//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5 };//�������[]���ǲ�������ֻ��Ϊ����
//	int m = arr[4];//�������±���4��Ԫ��
//	//[] �±����ò������� �������ǣ�arr, 4
//	printf("%d\n", m);//�����Ǻ������ò�����
//
//	return 0;
//}

//�ṹ�������������Ӷ���,һЩֵ�ļ���
//ѧ�����Ͷ���
//struct Student {
//	//member-list��Ա�б�
//	char name[20];
//	int age;
//	float score;
//}s1, s2, s3;//s1,s2,s3�ṹ������б�
//int main(void) {
//	int a;
//	struct Student lisi = { "����",20,99.0 };//��ʼ��
//	struct Student xiaoming;//xiaoming����һ��Student�ṹ�����͵Ķ���
//	printf("%s\n", lisi.name);//�ṹ�����.�ṹ���Ա����.���ǳ�Ա���ʷ�
//	return 0;
//}
//int main(void) {
//	int a = 5;
//	int b = 5;
//	printf("%d\n", ++a);
//	printf("%d\n", b++);
//
//	return 0;
//	}

int main(void) {
	char a = 20;
	char b = 130;
	char c = a + b;
	printf("%d\n", c);

	return 0;
}