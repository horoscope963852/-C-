#include <stdio.h>
int main()
{
//初始化
	int price = 0;
	int bill = 0;
//请输入金额和票面
	printf("请输入金额：");
	scanf_s("%d", &price);
	printf("请输入票面：");
	scanf_s("%d", &bill);
//计算找零
	if (bill >= price) {
		printf("应找您：%d\n", bill - price);
	}
	/*这个if的另一种写法
	if (bill >= price) 这里没有分号
		printf("应找您：%d\n", bill - price); 这里才有分号*/
	else {
		printf("你的钱不够\n");
	}
	/*这个else的另一种写法
	else 这里没有分号
		printf("你的钱不够\n"); 这里才有分号*/
	return 0;
}