#include <stdio.h>
int main()
{
//��ʼ��
	int price = 0;
	int bill = 0;
//���������Ʊ��
	printf("�������");
	scanf_s("%d", &price);
	printf("������Ʊ�棺");
	scanf_s("%d", &bill);
//��������
	if (bill >= price) {
		printf("Ӧ������%d\n", bill - price);
	}
	/*���if����һ��д��
	if (bill >= price) ����û�зֺ�
		printf("Ӧ������%d\n", bill - price); ������зֺ�*/
	else {
		printf("���Ǯ����\n");
	}
	/*���else����һ��д��
	else ����û�зֺ�
		printf("���Ǯ����\n"); ������зֺ�*/
	return 0;
}