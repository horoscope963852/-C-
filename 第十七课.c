#include <stdio.h>
int main()
{
	//do-while循环在进入循环时不做检查，而是在循环完一次后再来检查循环条件是否满足。
	int x;
	scanf_s("%d", &x);
	int n = 0;
	do {
		x /= 10;
		n ++;
	} while (x > 0);//do后面是大括号,while后面是小括号
	printf("%d", n);
	return 0;
}