#include <stdio.h>
int main()
{
	//输出正整数的位数
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
	printf("这个数有%d位。", n);
	return 0;
}