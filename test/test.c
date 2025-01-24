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

//int main(void) {
//	int a = 13;
//	//方法1
//	/*int n = 16;
//	a = a | n;*/
//	//方法2
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
//	if (a = b + 1, c = a / 2, d > 0) {//if有逗号表达式的时候，看最后一个表达式满足条件（d > 0)
//
//	}
//
//	return 0;
//}

//int main(void) {
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0) {
//	//	//业务处理
//	//	//......
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	//上面伪代码太臃肿，改为以下逻辑
//	while (a = aet_val(), count_val(a), a > 0) {
//		//业务处理
//		//........
//	}
//	return 0;
//}
//int main(void) {
//	int arr[10] = { 1, 2, 3, 4, 5 };//这里这个[]不是操作符，只作为定义
//	int m = arr[4];//数组中下标是4的元素
//	//[] 下标引用操作符， 操作数是；arr, 4
//	printf("%d\n", m);//（）是函数调用操作符
//
//	return 0;
//}

//结构体用于描述复杂对象,一些值的集合
//学生类型定义
//struct Student {
//	//member-list成员列表
//	char name[20];
//	int age;
//	float score;
//}s1, s2, s3;//s1,s2,s3结构体变量列表
//int main(void) {
//	int a;
//	struct Student lisi = { "李四",20,99.0 };//初始化
//	struct Student xiaoming;//xiaoming就是一个Student结构体类型的对象
//	printf("%s\n", lisi.name);//结构体变量.结构体成员：“.”是成员访问符
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
//	//const 修饰指针变量
//	//放在*的右边，限制的是指针变量本身，指针不能改变它的指向
//	//放在*的左边，限制的是不能修改指针所指向的变量解应用的值
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
//	//指针减去指针，得到的是两个指针之间的元素个数
//	//两个指针相减，计算的前提是在同一块内存空间
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
//	int* p = &arr[0];//错误写法
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
//	//空指针
//
//	return 0;
//}

//#include<assert.h>
////计算字符串长度
//size_t my_strlen( const char* str) {
//	//const 用来提升代码的安全性,用户不能通过str修改字符串
//	
//	size_t count = 0;
//	assert(str != NULL);
//	//assert 断言，如果括号内的表达式为假，程序会终止
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
//void Swap1(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int main(void) {
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	//交换两个数
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}
//int main(void) {
//	int n = 10;
//	int m = 100;
//	//const 修饰指针变量
//	//放在*的右边，限制的是指针变量本身，指针不能改变它的指向
//	//放在*的左边，限制的是不能修改指针所指向的变量解应用的值
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
//	//数组名就是数组首元素的地址
//	//但是有二个例外
//	//1.sizeof(数组名）
//	//这里表示的是计算整个数组的大小，单位是字节
//	//2.&数组名
//	//这里的数组名也表示整个数组，取出的是整个数组的地址
//	//除此之外，所有的数组名都是数组首元素的地址
//	//指针类型决定了指针的差异
//	printf("&arr = %p\n", &arr);
//	printf("&arr = %p\n", &arr + 1);
//
//	return 0;
//}

int main(void) {

	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = &arr[0];
	for (i = 0; i < sz; i++) {
		scanf_s("%d", p + i);
		//scanf_s("%d", arr + i);
	}
	for (i = 0; i < sz; i++) {
		printf("%d ", *(p + i));//*p + i相当于先解引用后在+i.这中写法是错误的。
		//printf("%d ", *(arr + i)); *(arr + i) <==> arr[i]
	}
	return 0;
}