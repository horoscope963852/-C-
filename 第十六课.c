#include <stdio.h>
int main()
{
	//�����������λ��
	int x = 0;
	int n = 0;
	scanf_s("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
		printf("x=%d,n=%d\n", x, n);
	}
	printf("�������%dλ��", n);
	return 0;
}