#include <stdio.h>
int main()
{
	//嵌套的if else判断
	//找出最大数
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	int max = 0;

	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}
	else {
		if (b > c) {
			max = b;
		}
		else {
			max = c;
		}
	}
	printf("The max is %d\n", max);
	return 0;
}
/*不用分号的写法（不推荐）
if (a > b) 
	if (a > c) 
		max = a;
	else 
		max = c;
else 
	if (b > c) 
		max = b;
	else 
		max = c;
*/