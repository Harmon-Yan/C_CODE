#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������ȫ����Ϊ-1���������������
void Set_arr(int arr[], int sz) {
	int i = 0;
	for (; i < sz; i++) {
		arr[i] = -1;
	}
}
void Print_arr(int arr[], int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[] = {1, 23, 34, 2, 31, 2, 3, 4, 2, 3, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Set_arr(arr, sz);
	Print_arr(arr, sz);
	printf("\n");
	return 0;
}

