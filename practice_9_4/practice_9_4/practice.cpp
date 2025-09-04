#define _CRT_SECURE_NO_WARNINGS 1
//输出可打印字符

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++) 
//	{
//		printf("%c ",i);
//		if (i % 16 == 15) {
//			printf("\n");
//		}
//	}
//	return 0;
//}

//检阅\0的作用:标志字符串的结束，在使用库函数方面会有作用

//#include<stdio.h>
//int main()
//{
//	char str1[] = { "abc" };
//	char str2[] = { 'a','b','c' };
//	char str3[] = { "abc\0def" };
//	char str4[] = { 'a','b','c' ,'\0' };
//	printf("%s\n%s\n%s\n%s\n",str1,str2,str3,str4 );
//	return 0;
//}

//布尔类型数据

//#include<stdio.h>
//#include<stdbool.h>
//int main() {
//	bool str=true;
//	if (str) {
//		printf("OMG!\n");
//	}
//	return 0;
//}

//sizeof计算数据类型长度

//#include <stdio.h>
//int main() {
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long int));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	
//	//sizeof括号里的表达式不计算
//	short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));
//	printf("s = %d\n", s);
//
//	return 0;
//}

//算数操作符
//#include <stdio.h>
//int main() {
//	int a = 10;
//	printf("%d\n", a / 3);
//	int b = 10;
//	printf("%f\n", a / 3.0);
//	printf("%d\n", 11 % -5);
//	printf("%d\n", -11 % -5);
//	printf("%d\n", -11 % 5);
//	printf("%d\n", -11 % -5);
//	int c = 98;
//	int d = c++;
//	printf("c=%d d=%d\n", c, d);
//	int e = 98;
//	int f = ++e;
//	printf("e=%d f=%d\n",e, f);
//	return 0;
//}

//printf使用的占位符

//#include <stdio.h>
//int main() {
//	int a = 89;
//	float b = 45.6;
//	double c = 34.9;
//	printf("%-+4d\n", a);
//	printf("%-7.3f\n", b);
//	printf("%+9.2lf\n", c);
//	printf("%+*.*lf\n", 9, 2,c);
//	return 0;
//}


//scanf的使用
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	char b = 'a';
//	double c = 0.0;
//	int r=scanf("%d%c%lf", &a, &b, &c);
//	printf("a=%d\nb=%c\nc=%4.2lf\n", a, b, c);
//	printf("%d\n", r);
//
//
//	return 0;
//
//}