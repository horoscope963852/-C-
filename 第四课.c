#include <stdio.h>
int main()
{
	//const int AMOUNT = 100;const��ʾ����ı�����Ϊ�����������ٴ��޸�
	int amount = 100;
	int price = 0;

	printf("�������Ԫ����");
	scanf_s("%d", &price);

	printf("������Ʊ��");
	scanf_s("%d", &amount);

	int change = amount - price;

	printf("����%dԪ��\n", change);

	return 0;
}