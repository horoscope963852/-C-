#include <stdio.h>
int main()
{
	//��������������ֵ������Ҫ�������ձ���
	int a = 5;
	int b = 6;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}