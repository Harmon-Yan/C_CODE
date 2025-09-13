#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(){
	static int i = 0;
	i++;
	printf("%d ", i);
}
int main() {
	int i = 0;
	for (; i < 8; i++) {
		test();
	}
	return 0;
}
//原本函数内的变量i生命周期只在函数内，
// 用static修饰后存储在静态区，
// 生命周期变为整个项目，出了函数后不会释放内存，
// 从而下一次进入函数不会再次创建变量，
// 只会以原数值继续进行，
// 当我们想保留函数内的变量值可加上static
//函数内static int i=0与全局变量作用相同

