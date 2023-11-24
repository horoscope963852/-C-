#include <stdio.h>
int main()
{
	//复合赋值符号
	int a;
	a = 10;
	printf("a++=%d\n", a++);
	printf("a=%d\n", a);

	printf("++a=%d\n", ++a);
	printf("a=%d\n", a);
	//"a++"的值是加1以前的a的值，"++a"的值是加1以后a的值
	return 0;
}