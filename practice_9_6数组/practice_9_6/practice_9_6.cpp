#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
int main()
{
	//特殊形式输出
	/*char arr1[] = "####################################";
	char arr2[] = "No one is coming ,forging my empire.";
		int left = 0;
		int right = strlen(arr2) - 1;
			while (left < right) {
				Sleep(100);
				printf("%s\n", arr1);
				arr1[left] = arr2[left];
				arr1[right] = arr2[right];
				left++;
				right--;
			}*/


			//二分查找
	int arr[] = { 1,23,45,56,78,79,89,120,456,908,1001,1077,1088,1123,1456 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	int mid = 0;

	scanf("%d", &key);
	int is_find = 0;
	while (left <= right) {
		mid = (right + left) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else {
			is_find = 1;
			break;
		}
	}
	if (is_find) {
		printf("%d在该数组,下标为%d\n", key, mid);
	}
	else {
		printf("%d不在该数组\n", key);
	}
	return 0;
}