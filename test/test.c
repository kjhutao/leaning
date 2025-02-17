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
//		printf("%d ", *(p + i));//*p + i相当于先解引用后在+i.这中写法是错误的。
//		//printf("%d ", *(arr + i)); *(arr + i) <==> arr[i]
//      //arr[i] <==> i[arr]
//		//[] 仅仅是个操作符 在编译器底层就是转换成指针来用的
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
//	test(arr);//arr是数组名，数组名表示首元素的地址
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

////求最大值
//int main(void) {
//	int num[10] = { 0 };
//	printf_s("请输入10个数：");
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
//	printf("你输入的数字中，最大的数是%d\n", max);
//
//	return 0;
//}

////分数求和
////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
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
//	printf_s("计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值是%d\n", sum);
//	return 0;
//}

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main(void) {
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//	}
//	printf_s("1-100的数中一共出现了%d个数字9\n", count);
//	return 0;
//}

////打印1000年到2000年之间的闰年
//int main(void) {
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//			printf_s("%d ", y);
//		}
//	}
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
//int main(void) {
//	int x = 0; 
//	int y = 0;
//	printf_s("请输入2个数：");
//	scanf_s("%d %d", &x, &y);
//	x = x < y ? x : y;
//	int i = 0;
//	for (i = x; i > 0; i++) {
//		if (x % i == 0 && y % i == 0) {
//			printf_s("最大公约数是%d\n",i);
//		}
//	}
//
//	return 0;
//}
////冒泡排序
//void input(int* arr, int sz) {
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        if (scanf_s("%d", arr + i) != 1) {
//            printf("输入错误，请输入一个整数。\n");
//            i--; // 重新输入当前元素
//            while (getchar() != '\n'); // 清空输入缓冲区
//        }
//    }
//}
//void bubble_sort(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int flag = 1;//假设有序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++) {
//			int temp = 0;
//			if (arr[j] > arr[j + 1]) {
//				flag = 0;//有交换，无序
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
//	//输入一些值
//	//排序--写一个函数完成数组的排序，排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	//排序
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf_s("%d ", arr[i]);
//	}
//	printf_s("\n");
//	return 0;
//}

////二级指针
//int main(void) {
//	int a = 10;
//	int* pa = &a;//pa是一个指针，指向一个整型变量
//	int** ppa = &pa; //ppa是一个指针，指向一个指针
//
//	return 0;
//}

////三子棋
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
//	printf_s("请输入坐标：");
//	scanf_s("%d %d", &x, &y);
//	if (x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == ' ') {
//		board[x][y] = 'X';
//	}
//	else {
//		printf_s("输入错误，请重新输入。\n");
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

////指针数组
//int main(void) {
//	//指针数组就是存放指针的数组，每个元素就是指针类型
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

////指针数组模拟二维数组
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
////指针数组
//int main(void) {
//	//指针数组就是存放指针的数组，每个元素就是指针类型
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

////指针数组模拟二维数组
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
//	//*p指向的是常量字符串，不能通过*p修改字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);//使用%s打印字符串，只需要传入字符串的首地址
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
//	int (*p)[10] = &arr;//p就是数组指针，指向一个含有10个元素的数组
//
//	return 0;
//}

//int main(void) {
//
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int (*p)[10] = &arr;//取出的是数组的地址
//
//	//想使用p这个数组指针访问arr数组的元素
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
//	print(arr, 3, 5);//将arr数组的内容打印出来
//
//	return 0;
//}

////函数指针变量
//int add(int x, int y) {
//	return x + y;
//}
//
//int main(void) {
//	//int a = 10;
//	//int* pa = &a;
//
//	//int arr[5] = { 0 };
//	//int(*parr)[5] = &arr;//parr是一个指针，指向一个含有5个元素的数组
//
//	printf("%p\n", &add);
//	printf("%p\n", add);//函数名就是函数的地址
//	int (*pf)(int, int) = &add;//pf是一个函数指针变量，指向一个函数
//	//int (*)(int, int) 函数指针类型
//	//pf是一个函数指针变量，指向一个返回值为int，参数为int，int的函数
//	//pf = add;//错误写法
//	int ret = (*pf)(2, 3);//int ret = pf (2, 3);这样写也可以
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main(void) {
//	//(*(void(*)())0)();//函数指针
//	//调用地址为0的函数
//	//调用0地址处放的那个函数，函数是没有参数的，返回值是void
//	void(*signal(int, void(*)(int)))(int);//signal是一个函数，返回值是一个函数指针
//	//signal函数的参数是一个整型和一个函数指针，返回值是一个函数指针
//	//上面只是一次函数声明，没有函数定义
//	//void(*)(int)
//	//函数指针类型，参数是int，返回值是void
//	return 0;	
//}

//typedef unsigned int uint;
////类型重定义
//
//int main(void) {
//	unsigned int a = 10;
//	uint b = 20;
//
//	return 0;
//}

//int main(void) {
//	int ch;
//	FILE* fp;//文件指针
//	char fname[50];//文件名
//	printf("请输入文件名：");
//	scanf_s("%s", fname, 50);
//	fp = fopen(fname, "r");//打开文件
//	if (fp == NULL) {
//		printf("打开文件失败\n");
//		exit(1);
//	}
//	while ((ch = fgetc(fp)) != EOF) {//读取文件
//		putchar(ch);//输出文件内容
//	}
//	fclose(fp);//关闭文件
//	return 0;
//}
 
//函数指针数组
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
//	//函数指针数组，数组中存放的是函数指针
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
////移除表
////完成整数的加法/减法/乘法/除法
//int main(void) {
//
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	menu();
//	printf("请选择：");
//	scanf_s("%d", &choice);
//	if (choice >= 0 && choice <= 4) {
//		printf("请输入两个操作数：");
//		scanf_s("%d %d", &a, &b);
//		ret = pfArr[choice](a, b);
//		printf("%d\n", ret);		
//	}
//	else if (choice == 0) {
//		printf("退出\n");
//	}
//	else
//	{
//		printf("选择错误，请重新选择\n");
//		return 0;
//	}
//	
//	
//
//	/*do {
//		menu();
//		printf("请选择：");		
//		scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");	
//			break;
//		}
//	} while (choice);*/
//
//	return 0;
//}

//


//void qsort(void* base, //指向待排序数组的指针//base是数组首元素的地址
//	size_t num,		   //数组中元素的个数
//	size_t width,	   //每个元素的大小
//	int (*cmp)(const void* e1, const void* e2)//函数指针，比较函数
//);
//测试qsort来排序整型数组

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

//测试qsort函数排序结构体数组
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
//	qsort(arr, sz, sizeof(arr[0]), cmp_str);//cmp_str是自定义的比较函数
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
//	qsort(arr, sz, sizeof(arr[0]), cmp_str);//cmp_str是自定义的比较函数
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
//	printf("%zd\n", sizeof(arr[0]));//sizeof是一个操作符，不是函数
//	//strlen是一个函数，不是操作符，用来求字符串的长度
//	//strlen只能求字符串的长度，不能求数组的长度
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%zd\n", strlen(arr1));//这里strlen返回的是一个随机值
//	printf("%zd\n", strlen(arr2));//strlen必须遇到'\0'才会停止计数
//
//	return 0;
//}
//数组名是数组首元素的地址
//但是有2个列外：
//1.sizeof(数组名)
//2.&数组名

//int main(void) {
//	int a[] = { 1, 2, 3, 4 };//16
//	//a是数组名，数组名表示首元素的地址
//	printf("%zd\n", sizeof(a));//16
//	printf("%zd\n", sizeof(a + 0));//4/8
//	printf("%zd\n", sizeof(*a));//4
//	//*a--*(a+0)--a[0]
//	printf("%zd\n", sizeof(a + 1));//4/8
//	printf("%zd\n", sizeof(a[1]));//4
//	printf("%zd\n", sizeof(&a));//4/8
//	printf("%zd\n", sizeof(*&a));//16
//	//1.*&a--*(&a)--a
//	//2.&a--a的地址,类型是int(*)[4] *&a是一个指针，指向一个含有4个元素的数组
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
//	printf("%zd\n", sizeof(&arr));//&arr是数组的地址，是地址大小就是4/8
//	printf("%zd\n", sizeof(&arr + 1));//&arr + 1跳过了整个数组，指向数组后面的那个位置
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	return 0;
//}

int main(void) {
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//崩溃
	//printf("%d\n", strlen(arr[1]));//崩溃
	printf("%d\n", strlen(&arr));//6--&arr是数组的地址.
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	

	return 0;
}