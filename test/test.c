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
//	//递归写阶乘
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = Fact(n);
//	printf("%d的阶乘是%d\n", n, r);
//
//
//	return 0;
//}

//输入一个整数M，按照顺序打印整数的每一位。
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

////用递归写斐波拉契数
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

////用循环写斐波拉契数
//int main(void) {
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	scanf_s("%d", &n);
//	if (n == 1 || n == 2) {
//		printf("第%d 个斐波拉契数%d ", n ,1);
//	}
//	else {
//		while (n > 2) {
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		printf("第%d 个斐波拉契数%d ", n, c);
//	}
//	return 0;
//}

//int main(void) {
//	int a = 10;
//	int b = a << 1;
//	//左移就是二进制位整体左移，后边补零
//
//	printf("b = %d\n", b);
//	printf("b = %d\n", a);
//	return 0;
//}
//int main(void) {
//	int a = -10;
//	int b = a >> 1;
//	//逻辑右移左边加0，右边丢掉
//	//算术右移正数左边加0，负数左边加1，右边丢掉
//
//	printf("b = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//编写：求一个整数存储在内存中二进制中1的个数
/*int countBitone(unsigned int n) {
	int count = 0;
	while (n) {
		if ((n % 2) == 1) {
			count++;
		}
		n = n / 2;
	}
	return count;
	//优秀算法	
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

//编写代码将13个二进制序列的第5位修改为1，然后在改回0

int main(void) {
	int a = 13;
	//方法1
	/*int n = 16;
	a = a | n;*/
	//方法2
	int n = 5;
	a = a | (1 << (n - 1));
	
	printf("%d\n", a);
	a &= ~(a << (n - 1));
	printf("%d\n", a);
	return 0;
}