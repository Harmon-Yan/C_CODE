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
//ԭ�������ڵı���i��������ֻ�ں����ڣ�
// ��static���κ�洢�ھ�̬����
// �������ڱ�Ϊ������Ŀ�����˺����󲻻��ͷ��ڴ棬
// �Ӷ���һ�ν��뺯�������ٴδ���������
// ֻ����ԭ��ֵ�������У�
// �������뱣�������ڵı���ֵ�ɼ���static
//������static int i=0��ȫ�ֱ���������ͬ

