#include <stdio.h>
int main()
{
	int out1, out2;
	int a, b;
	
	out1 = printf("Hello World!!\n");
	printf("%d", out1);
	
	printf("�ΰ��� ���� �Է�: ");
	out2 = scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	
	printf("scanf �Լ��� �Է¹��� �������� ������ %d�Դϴ�.", out2);
	return 0;
}
