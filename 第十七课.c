#include <stdio.h>
int main()
{
	//do-whileѭ���ڽ���ѭ��ʱ������飬������ѭ����һ�κ��������ѭ�������Ƿ����㡣
	int x;
	scanf_s("%d", &x);
	int n = 0;
	do {
		x /= 10;
		n ++;
	} while (x > 0);//do�����Ǵ�����,while������С����
	printf("%d", n);
	return 0;
}