#include <stdio.h>
int main()
{
	int price = 0;
	printf("请输入金额（元）：");
	scanf_s("%d", &price);//还是多用scanf_s而不是scanf吧
	int change = 100 - price;
	printf("找您 % d元。\n", change);
	return 0;
}