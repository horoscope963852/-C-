#include <stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	printf("%x\n", x);
	//这个程序可以把输入的数以十进制形式赋值给x再以十六进制形式输出，且输出时不带前缀0x
	return 0;
}