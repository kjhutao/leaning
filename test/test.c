#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>

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

//int main(void) {
//	char a = 20;
//	char b = 130;
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main(void) {
//	int n = 10;
//	int m = 100;
//	//const ����ָ�����
//	//����*���ұߣ����Ƶ���ָ���������ָ�벻�ܸı�����ָ��
//	//����*����ߣ����Ƶ��ǲ����޸�ָ����ָ��ı�����Ӧ�õ�ֵ
//	//int* const p = &n;
//	int const* p = &n;
//
//	*p = 20;
//	p = &m;
//
//	return 0;
//

//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int* p = &arr[0];
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main(void) {
//	//ָ���ȥָ�룬�õ���������ָ��֮���Ԫ�ظ���
//	//����ָ������������ǰ������ͬһ���ڴ�ռ�
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[1]);
//
//	return 0;
//}

//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	int* p = arr;
//	while (p < arr + sz) {
//		printf("%d ", *p);
//		p++;
//	}	
//	return 0;
//}

//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	int* p = &arr[0];//����д��
//	while (p < arr + sz) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//#include<assert.h>
//int main(void) {
//	int a = 10;
//	int* p = &a;
//	int* p2 = &a;
//	assert(p2 != NULL);
//
//	//��ָ��
//
//	return 0;
//}

//#include<assert.h>
////�����ַ�������
//size_t my_strlen( const char* str) {
//	//const ������������İ�ȫ��,�û�����ͨ��str�޸��ַ���
//	
//	size_t count = 0;
//	assert(str != NULL);
//	//assert ���ԣ���������ڵı��ʽΪ�٣��������ֹ
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}
//int main(void) {
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// void Swap1(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int main(void) {
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	//����������
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	Swap1(a, b);
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}
//int main(void) {
//	int n = 10;
//	int m = 100;
//	//const ����ָ�����
//	//����*���ұߣ����Ƶ���ָ���������ָ�벻�ܸı�����ָ��
//	//����*����ߣ����Ƶ��ǲ����޸�ָ����ָ��ı�����Ӧ�õ�ֵ
//	//int* const p = &n;
//	int const* p = &n;
//
//	*p = 20;
//	p = &m;
//
//	return 0;
//}

//int main(void) {
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = &arr[0];
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0] = %p\n", &arr[0] + 1);
//	printf("arr = %p\n", arr);
//	printf("arr = %p\n", arr + 1);
//	//����������������Ԫ�صĵ�ַ
//	//�����ж�������
//	//1.sizeof(��������
//	//�����ʾ���Ǽ�����������Ĵ�С����λ���ֽ�
//	//2.&������
//	//�����������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//	//����֮�⣬���е�����������������Ԫ�صĵ�ַ
//	//ָ�����;�����ָ��Ĳ���
//	printf("&arr = %p\n", &arr);
//	printf("&arr = %p\n", &arr + 1);
//
//	return 0;
//}

//int main(void) {
//
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++) {
//		scanf_s("%d", p + i);
//		//scanf_s("%d", arr + i);
//	}
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));//*p + i�൱���Ƚ����ú���+i.����д���Ǵ���ġ�
//		//printf("%d ", *(arr + i)); *(arr + i) <==> arr[i]
//      //arr[i] <==> i[arr]
//		//[] �����Ǹ������� �ڱ������ײ����ת����ָ�����õ�
//	}
//	return 0;
//}
//void test(int arr[10]) {
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//
//int main(void) {
//		
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	test(arr);//arr������������������ʾ��Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

////�����ֵ
//int main(void) {
//	int num[10] = { 0 };
//	printf_s("������10������");
//	int i = 0;
//	int len = (sizeof(num) / sizeof(num[0]));
//	for (i = 0; i < len; i++) {
//		scanf_s("%d", &num[i]);
//	}
//	int max = 0;
//	for (i = 0; i < len; i++) {
//		if (num[i] > max) {
//			max = num[i];
//		}
//	}
//	printf("������������У���������%d\n", max);
//
//	return 0;
//}

////�������
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main(void) {
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			sum = sum - 1 / i;
//		}
//		else {
//			sum = sum + 1 / i;
//		}
//	}
//	printf_s("����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��%d\n", sum);
//	return 0;
//}

////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main(void) {
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//	}
//	printf_s("1-100������һ��������%d������9\n", count);
//	return 0;
//}

////��ӡ1000�굽2000��֮�������
//int main(void) {
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//			printf_s("%d ", y);
//		}
//	}
//	return 0;
//}

////���������������������������Լ��
//int main(void) {
//	int x = 0; 
//	int y = 0;
//	printf_s("������2������");
//	scanf_s("%d %d", &x, &y);
//	x = x < y ? x : y;
//	int i = 0;
//	for (i = x; i > 0; i++) {
//		if (x % i == 0 && y % i == 0) {
//			printf_s("���Լ����%d\n",i);
//		}
//	}
//
//	return 0;
//}
////ð������
//void input(int* arr, int sz) {
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        if (scanf_s("%d", arr + i) != 1) {
//            printf("�������������һ��������\n");
//            i--; // �������뵱ǰԪ��
//            while (getchar() != '\n'); // ������뻺����
//        }
//    }
//}
//void bubble_sort(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int flag = 1;//��������
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++) {
//			int temp = 0;
//			if (arr[j] > arr[j + 1]) {
//				flag = 0;//�н���������
//				temp = arr[j ];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//
//}
//
//int main(void) {
//	int arr[10] = {0};
//	//����һЩֵ
//	//����--дһ�������������������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	//����
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf_s("%d ", arr[i]);
//	}
//	printf_s("\n");
//	return 0;
//}

////����ָ��
//int main(void) {
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ�룬ָ��һ�����ͱ���
//	int** ppa = &pa; //ppa��һ��ָ�룬ָ��һ��ָ��
//
//	return 0;
//}

////������
//#include<stdbool.h>
//
//#define SIZE 3
//
//char board[SIZE][SIZE] = { 0 };
//bool gameOver = false;
//
//void initializeBoard() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < SIZE; i++) {
//		for (j = 0; j < SIZE; j++) {
//			board[i][j] = ' ';
//		}
//	}
//}
//void printBoard() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < SIZE; i++) {
//		for (j = 0; j < SIZE; j++) {
//			printf_s(" %c ", board[i][j]);
//			if (j < SIZE - 1) {
//				printf_s("|");
//			}
//		}
//		printf_s("\n");
//		if (i < SIZE - 1) {
//			printf_s("---|---|---\n");
//		}
//	}
//}
//void playerMove() {
//	int x = 0;
//	int y = 0;
//	printf_s("���������꣺");
//	scanf_s("%d %d", &x, &y);
//	if (x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == ' ') {
//		board[x][y] = 'X';
//	}
//	else {
//		printf_s("����������������롣\n");
//		playerMove();
//	}
//}
//void computerMove() {
//	int x = 0;
//	int y = 0;
//	do {
//		x = rand() % SIZE;
//		y = rand() % SIZE;
//	} while (board[x][y] != ' ');
//	board[x][y] = 'O';
//}
//bool isFull() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < SIZE; i++) {
//		for (j = 0; j < SIZE; j++) {
//			if (board[i][j] == ' ') {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//char checkWin() {
//	int i = 0;
//	for (i = 0; i < SIZE; i++) {
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
//			return board[i][0];
//		}
//	}
//	for (i = 0; i < SIZE; i++) {
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
//			return board[0][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
//		return board[0][2];
//	}
//	if (isFull()) {
//		return 'Q';
//	}
//	return ' ';
//}
//int main(void) {
//
//	return 0;
//}

////ָ������
//int main(void) {
//	//ָ��������Ǵ��ָ������飬ÿ��Ԫ�ؾ���ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

////ָ������ģ���ά����
//int main(void) {
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10 };
//	int arr3[5] = { 11, 12, 13, 14, 15 };
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//int main(void) {
//	char ch = 'w';
//	char ch1 = 'c';
//	char const* pc = &ch;
//	//char * const pc = &ch;
//	//*pc = 'b';
//	pc = &ch1;
//
//	printf("%c\n", *pc);
//
//	return 0;
//}

//int main(void) {
//	//char* p = "abcdef";
//	char arr[] = "abcdef";
//	char* p = arr;
//
//	return 0;
//}
////ָ������
//int main(void) {
//	//ָ��������Ǵ��ָ������飬ÿ��Ԫ�ؾ���ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

////ָ������ģ���ά����
//int main(void) {
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10 };
//	int arr3[5] = { 11, 12, 13, 14, 15 };
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//int main(void) {
//	char* p = "abcdef";
//	//*pָ����ǳ����ַ���������ͨ��*p�޸��ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);//ʹ��%s��ӡ�ַ�����ֻ��Ҫ�����ַ������׵�ַ
//
//	//char ch = 'w';
//	//	char ch1 = 'c';
//	//	//char const* pc = &ch;
//	//	char * const pc = &ch;
//	//	*pc = 'b';
//	//	pc = &ch1;
//	//
//	//	printf("%c\n", *pc);
//
//	return 0;
//}

//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//p��������ָ�룬ָ��һ������10��Ԫ�ص�����
//
//	return 0;
//}

//int main(void) {
//
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int (*p)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//��ʹ��p�������ָ�����arr�����Ԫ��
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//void print(int arr[3][5], int a, int b) {
//	int i = 0;
//	for (i = 0; i < a; i++) {
//		int j = 0;
//		for (j = 0; j < b; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//
//	int arr[3][5] = { {1, 2, 3, 4, 5}, {2, 5, 6, 7, 8}, {6, 9, 10, 11, 12} };
//	print(arr, 3, 5);//��arr��������ݴ�ӡ����
//
//	return 0;
//}

////����ָ�����
//int add(int x, int y) {
//	return x + y;
//}
//
//int main(void) {
//	//int a = 10;
//	//int* pa = &a;
//
//	//int arr[5] = { 0 };
//	//int(*parr)[5] = &arr;//parr��һ��ָ�룬ָ��һ������5��Ԫ�ص�����
//
//	printf("%p\n", &add);
//	printf("%p\n", add);//���������Ǻ����ĵ�ַ
//	int (*pf)(int, int) = &add;//pf��һ������ָ�������ָ��һ������
//	//int (*)(int, int) ����ָ������
//	//pf��һ������ָ�������ָ��һ������ֵΪint������Ϊint��int�ĺ���
//	//pf = add;//����д��
//	int ret = (*pf)(2, 3);//int ret = pf (2, 3);����дҲ����
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main(void) {
//	//(*(void(*)())0)();//����ָ��
//	//���õ�ַΪ0�ĺ���
//	//����0��ַ���ŵ��Ǹ�������������û�в����ģ�����ֵ��void
//	void(*signal(int, void(*)(int)))(int);//signal��һ������������ֵ��һ������ָ��
//	//signal�����Ĳ�����һ�����ͺ�һ������ָ�룬����ֵ��һ������ָ��
//	//����ֻ��һ�κ���������û�к�������
//	//void(*)(int)
//	//����ָ�����ͣ�������int������ֵ��void
//	return 0;	
//}

//typedef unsigned int uint;
////�����ض���
//
//int main(void) {
//	unsigned int a = 10;
//	uint b = 20;
//
//	return 0;
//}

//int main(void) {
//	int ch;
//	FILE* fp;//�ļ�ָ��
//	char fname[50];//�ļ���
//	printf("�������ļ�����");
//	scanf_s("%s", fname, 50);
//	fp = fopen(fname, "r");//���ļ�
//	if (fp == NULL) {
//		printf("���ļ�ʧ��\n");
//		exit(1);
//	}
//	while ((ch = fgetc(fp)) != EOF) {//��ȡ�ļ�
//		putchar(ch);//����ļ�����
//	}
//	fclose(fp);//�ر��ļ�
//	return 0;
//}
 
//����ָ������
//int Add(int x, int y) {
//	return x + y;
//}
//
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//int main(void) {
//	/*int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;*/
//	//����ָ�����飬�����д�ŵ��Ǻ���ָ��
//	int (*pf[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		int ret =  pf[i](6, 3);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}
//int Add(int x, int y) {
//	return x + y;
//}
//	
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//void menu() {
//	printf("********************************\n");
//	printf("******** 1. add  2. sub ********\n");
//	printf("******** 3. mul  4. div ********\n");
//	printf("******** 0. exit        ********\n");
//	printf("********************************\n");
//}
//
////�Ƴ���
////��������ļӷ�/����/�˷�/����
//int main(void) {
//
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	menu();
//	printf("��ѡ��");
//	scanf_s("%d", &choice);
//	if (choice >= 0 && choice <= 4) {
//		printf("������������������");
//		scanf_s("%d %d", &a, &b);
//		ret = pfArr[choice](a, b);
//		printf("%d\n", ret);		
//	}
//	else if (choice == 0) {
//		printf("�˳�\n");
//	}
//	else
//	{
//		printf("ѡ�����������ѡ��\n");
//		return 0;
//	}
//	
//	
//
//	/*do {
//		menu();
//		printf("��ѡ��");		
//		scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d %d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d %d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d %d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");	
//			break;
//		}
//	} while (choice);*/
//
//	return 0;
//}

//


//void qsort(void* base, //ָ������������ָ��//base��������Ԫ�صĵ�ַ
//	size_t num,		   //������Ԫ�صĸ���
//	size_t width,	   //ÿ��Ԫ�صĴ�С
//	int (*cmp)(const void* e1, const void* e2)//����ָ�룬�ȽϺ���
//);
//����qsort��������������

//int cmp_int(const void* p1, const void* p2) {
//	return (*(int*)p1 - *(int*)p2);
//}

//void test1() {
//	int arr[] = { 9, 5, 2, 7, 6, 8, 1, 3, 4, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//����qsort��������ṹ������
//int cmp_str(const void* p1, const void* p2) {
//	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name );
//}
//
//struct Stu {
//	char name[20];
//	int age;
//};
//
//void test2() {
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str);//cmp_str���Զ���ıȽϺ���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s ", arr[i].name);
//	}
//	printf("\n");
//}
//
//int main(void) {
//
//	test1();
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//struct Stu {
//	char name[20];
//	int age;
//};
//
//int  cmp_stu_name(const void* p1, const void* p2) {
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int main(void) {
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wanwu", 10} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_name);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s ", arr[i].name);
//	}
//	return 0;
//}
//struct Stu {
//	char name[20];
//	int age;
//};
//
//int cmp_str(const void* p1, const void* p2) {
//	return strcmp(((const struct Stu*)p1)->name, ((const struct Stu*)p2)->name);
//}
//void test2() {
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_str);//cmp_str���Զ���ıȽϺ���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s ", arr[i].name);
//	}
//	printf("\n");
//}
//
//int main(void) {
//	test2();
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct Stu {
//	char name[20];
//	int age;
//};
//
//static void Swap(char* buf1, char* buf2, size_t width) {
//	size_t i = 0;
//	char tmp = 0;
//	for (i = 0; i < width; i++) {
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//
//		buf1++;
//		buf2++;
//	}
//}
//
//static int cmp_int(const void* p1, const void* p2) {
//	return (int)(*(int*)p1 - *(int*)p2);
//}
//
//static int cmp_str(const void* p1, const void* p2) {
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//static void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void*  p1, const void* p2)) {
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		size_t j = 0;
//		for (j = 0; j < sz - i - 1; j++) {
//			if (cmp((char*)base + j * width , (char*)base + (j + 1) * width) > 0) {
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//static void print(int arr[], size_t sz) {
//	size_t i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//static void test4() {
//	int arr[] = { 9, 5, 2, 7, 6, 8, 1, 3, 4, 0 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
//static void test5() {
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_str);
//	size_t i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s ", arr[i].name);
//	}
//	printf("\n");
//}
//
//int main(void) {
//	test4();
//	test5();
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>

//int main(void) {
//
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr[0]));//sizeof��һ�������������Ǻ���
//	//strlen��һ�����������ǲ��������������ַ����ĳ���
//	//strlenֻ�����ַ����ĳ��ȣ�����������ĳ���
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%zd\n", strlen(arr1));//����strlen���ص���һ�����ֵ
//	printf("%zd\n", strlen(arr2));//strlen��������'\0'�Ż�ֹͣ����
//
//	return 0;
//}
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1.sizeof(������)
//2.&������

//int main(void) {
//	int a[] = { 1, 2, 3, 4 };//16
//	//a������������������ʾ��Ԫ�صĵ�ַ
//	printf("%zd\n", sizeof(a));//16
//	printf("%zd\n", sizeof(a + 0));//4/8
//	printf("%zd\n", sizeof(*a));//4
//	//*a--*(a+0)--a[0]
//	printf("%zd\n", sizeof(a + 1));//4/8
//	printf("%zd\n", sizeof(a[1]));//4
//	printf("%zd\n", sizeof(&a));//4/8
//	printf("%zd\n", sizeof(*&a));//16
//	//1.*&a--*(&a)--a
//	//2.&a--a�ĵ�ַ,������int(*)[4] *&a��һ��ָ�룬ָ��һ������4��Ԫ�ص�����
//	printf("%zd\n", sizeof(&a + 1));//4/8
//	printf("%zd\n", sizeof(&a[0])); //4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//4/8
//	//*a == a[0]
//	
//	return 0;
//}

//int main(void) {
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//    printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//int main(void) {
//	char arr[] = "abcdef";
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr + 0));
//	printf("%zd\n", sizeof(*arr));
//	printf("%zd\n", sizeof(arr[1]));
//	printf("%zd\n", sizeof(&arr));//&arr������ĵ�ַ���ǵ�ַ��С����4/8
//	printf("%zd\n", sizeof(&arr + 1));//&arr + 1�������������飬ָ�����������Ǹ�λ��
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	return 0;
//}

int main(void) {
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//����
	//printf("%d\n", strlen(arr[1]));//����
	printf("%d\n", strlen(&arr));//6--&arr������ĵ�ַ.
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5
	

	return 0;
}