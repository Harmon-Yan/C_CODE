#define _CRT_SECURE_NO_WARNINGS 1

//��֧���

//#include<stdio.h>
//int main()
//{
//	//�ж�����ż��
//	/*int n = 0;
//	scanf("%d", &n);
//	if (n % 2) {
//		printf("%d������\n", n);
//	}
//	else {
//		printf("%d��ż��\n", n);
//	}*/
//
//	//�ж���0���Ǹ�����������
//	/*int n = 0;
//	scanf("%d", &n);
//	if (n > 0) {
//		printf("%d������\n", n);
//	}
//	else if(n<0){
//		printf("%d�Ǹ���\n", n);
//	}
//	else {
//		printf("%d��0\n", n);
//	}*/
//
//	//�ж�����
//	/*int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0) {
//		printf("%d������\n", year);
//	}
//	else if(year%400==0) {
//		printf("%d������\n", year);
//	}
//	else {
//		printf("%d��������\n", year);
//	}*/
//
//	//switch���
//	//�ж�����3������
//	/*int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	switch(n%3){
//	case 0: m = 0; break;
//	case 1: m = 1; break;
//	case 2: m = 2; break;
//     }
//	printf("����Ϊ%d\n", m);*/
//
//	//��������Ϣ���ж�
//	/*int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:printf("�����ǹ�����\n"); break;
//	case 6:
//	case 7:printf("��������Ϣ��\n"); break;
//	default:printf("�������\n"); break;
//	}*/
//	return 0;
//}


//ѭ�����
#include<stdio.h>
int main()
{
	//��ӡ1��100
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

	//�����ӡ
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


	//����1-100֮���ܱ�3����������֮��
	/*int sum = 0;
	int i = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}*/
	////�Ż�
	//int sum = 0;
	//int i = 0;
	//for (i = 3; i <= 100; i+=3) {
	//	sum += i;
	//}
	//printf("%d\n", sum);


	//������λ
	/*int n=0,m=0;
	scanf("%d", &n);
	do {
		m++;
		n/=10;
	} while (n > 0);
	printf("%d\n", m);*/

	//�ҳ�����
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