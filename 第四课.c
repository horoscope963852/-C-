#include <stdio.h>
int main()
{
	//const int AMOUNT = 100;const表示定义的变量改为常量，不能再次修改
	int amount = 100;
	int price = 0;

	printf("请输入金额（元）：");
	scanf_s("%d", &price);

	printf("请输入票面");
	scanf_s("%d", &amount);

	int change = amount - price;

	printf("找您%d元。\n", change);

	return 0;
}