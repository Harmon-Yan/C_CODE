#define _CRT_SECURE_NO_WARNINGS 1
//����

#include<stdio.h>
double Count(double x, char arr, double y) {
	if (arr == '+'){
		return (x+y);
	}
	else if(arr=='-') {
		return (x - y);
	}
	else if (arr == '*') {
		return (x * y);
	}
	else {
		return (x / y);
	}
}
int main() {
	double a = 0.0;
	double b = 0.0;
	char arr;
	scanf("%lf%c%lf", &a, &arr, &b);
	if (arr == '+' || arr == '-' || arr == '*' || arr == '/') {
		printf("%lf%c%lf=%lf\n", a, arr, b, Count(a, arr, b));
	}
	else {
		printf("�����������������\n");
	}
	return 0;
}
