#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game() {
	int r = rand() % 100 + 1;
	int guess = 0;
	while (1) {
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < r) {
			printf("猜小了\n");
		}
		else if (guess > r) {
			printf("猜大了");
		}
		else {
			printf("恭喜你猜对了\n");
			break;
		}
	}
	
}
void menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}
int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	}while(input);
	return 0;
}