#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int g_val;
int main() {
	printf("%d\n", g_val);
	return 0;
}
//static修饰局部变量，局部变量拥有变成与全局变量一样的作用,存储位置改变为静态区
//static修饰全局变量，将使这个全局变量只能在本源文件使用，全局变量是有外部链接属性的
//在外部文件想要使用只要做出适当的声明即可，如使用extern,但使用static后变成内部链接属性，就无法正常使用了
//static修饰函数，与修饰全局变量一样，只能在本源文件使用
