#define _CRT_SECURE_NO_WARNINGS 1

//分支语句

//#include<stdio.h>
//int main()
//{
//	//判断奇数偶数
//	/*int n = 0;
//	scanf("%d", &n);
//	if (n % 2) {
//		printf("%d是奇数\n", n);
//	}
//	else {
//		printf("%d是偶数\n", n);
//	}*/
//
//	//判断是0还是负数或者正数
//	/*int n = 0;
//	scanf("%d", &n);
//	if (n > 0) {
//		printf("%d是正数\n", n);
//	}
//	else if(n<0){
//		printf("%d是负数\n", n);
//	}
//	else {
//		printf("%d是0\n", n);
//	}*/
//
//	//判断闰年
//	/*int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0) {
//		printf("%d是闰年\n", year);
//	}
//	else if(year%400==0) {
//		printf("%d是闰年\n", year);
//	}
//	else {
//		printf("%d不是闰年\n", year);
//	}*/
//
//	//switch语句
//	//判断整除3的余数
//	/*int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	switch(n%3){
//	case 0: m = 0; break;
//	case 1: m = 1; break;
//	case 2: m = 2; break;
//     }
//	printf("余数为%d\n", m);*/
//
//	//工作日休息日判断
//	/*int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:printf("今天是工作日\n"); break;
//	case 6:
//	case 7:printf("今天是休息日\n"); break;
//	default:printf("输入错误\n"); break;
//	}*/
//	return 0;
//}


//循环语句
#include<stdio.h>
int main()
{
	//打印1到100
	/*int i = 0;
	for (i = 1; i <= 100; i++) {
		if (i <= 10) {
			printf("%d  ", i);
		}
		else {
			printf("%d ", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
	}*/

	//逆序打印
	/*int n=0;
	scanf("%d", &n);*/
	/*for (; n > 0; n /= 10) {
		printf("%d ", n % 10);
	}
	printf("\n");*/
	/*while (n > 0) {
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("\n");*/


	//计算1-100之间能被3整除的数字之和
	/*int sum = 0;
	int i = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}*/
	////优化
	//int sum = 0;
	//int i = 0;
	//for (i = 3; i <= 100; i+=3) {
	//	sum += i;
	//}
	//printf("%d\n", sum);


	//计算数位
	/*int n=0,m=0;
	scanf("%d", &n);
	do {
		m++;
		n/=10;
	} while (n > 0);
	printf("%d\n", m);*/

	//找出素数
	/*int a, b = 0;
	scanf("%d %d", &a, &b);
	for (int n=a; n <=b; n++) {
		if (n < 2)continue;
		else if (n == 2) {
			printf("%d ", n);
		}
		else {
			int j = 2;
			for (; j < n; j++) {
				if (n % j == 0) {
					break;
				}
			}
			if (j == n) {
				printf("%d ", n);
			}
		}
	}
	printf("\n");*/

	return 0;
}