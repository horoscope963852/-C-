#include <stdio.h>
int main()
{
	//交换两个变量的值，则需要第三个空变量
	int a = 5;
	int b = 6;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}