#include <stdio.h>
int main()
{
	//多路分支switch case
	int time;//控制表达式只能是整数
	printf("现在是几点？");
	scanf_s("%d", &time);

	switch ( time ) {
	case 1://case后是常量或常量表达式,case表示从这一行开始执行
		printf("1");
		break;//程序遇到第一个break即跳出switch语句，否则将一次执行后面的所有case直到遇到第一个break
	case 2:
		printf("2");
		break;
	default:
		printf("现在不是1点或2点。");
		break;
	}
	return 0;
}