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

//ð������
void input(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		scanf("%d", arr + i);
	}
}
void bubble_sort(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - i - 1; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j ];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int main(void) {
	int arr[10] = {0};
	//����һЩֵ
	//����--дһ�������������������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	input(arr, sz);
	//����
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf_s("%d ", arr[i]);
	}
	printf_s("\n");
	return 0;
}