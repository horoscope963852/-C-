#include <stdio.h>
int main()
{
	//������if else�����һ�����ηֶκ���
	int x = 0, f = 0;
	printf("������x��ֵ��");
	scanf_s("%d", &x);
	if (x < 0) {
		f = -1;
	}
	else if (x == 0) {
		f = 0;
	}
	else {
		f = 2 * x;
	}
	printf("����ֵΪ��%d", f);
	return 0;
}
/*Ҳ����д��Ƕ��ʽif else
if (x < 0) {
		f = -1;
	}
else {
	if (x == 0) {
		f = 0;
	}
	else {
		f = 2 * x;
	}
}*/