#include <stdio.h>
int main()
{
	//��·��֧switch case
	int time;//���Ʊ��ʽֻ��������
	printf("�����Ǽ��㣿");
	scanf_s("%d", &time);

	switch ( time ) {
	case 1://case���ǳ����������ʽ,case��ʾ����һ�п�ʼִ��
		printf("1");
		break;//����������һ��break������switch��䣬����һ��ִ�к��������caseֱ��������һ��break
	case 2:
		printf("2");
		break;
	default:
		printf("���ڲ���1���2�㡣");
		break;
	}
	return 0;
}