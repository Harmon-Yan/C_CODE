#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "Add.h"
int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", Add(a, b));
	return 0;
}
