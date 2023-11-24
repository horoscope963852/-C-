#include <stdio.h>
int main()
{
	//级联的if else，表达一个三段分段函数
	int x = 0, f = 0;
	printf("请输入x的值：");
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
	printf("函数值为：%d", f);
	return 0;
}
/*也可以写成嵌套式if else
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