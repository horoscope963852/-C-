#include <stdio.h>
int main()
{
	//���ϸ�ֵ����
	int a;
	a = 10;
	printf("a++=%d\n", a++);
	printf("a=%d\n", a);

	printf("++a=%d\n", ++a);
	printf("a=%d\n", a);
	//"a++"��ֵ�Ǽ�1��ǰ��a��ֵ��"++a"��ֵ�Ǽ�1�Ժ�a��ֵ
	return 0;
}