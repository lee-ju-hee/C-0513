#include <stdio.h>
int main()
{
	char a, b;
	
	printf("�빮�� �Է�: ");
	//a = getchar();
	//fflush(stdin);   ���� 
	scanf("%c", &a);
	getchar();
	
	printf("�ҹ��� �Է�: ");
	b = getchar();
	
	//A = 65, a = 97, '0' = 48
	printf("����� �Է��� %c�� �ҹ��ڴ� %c�Դϴ�.\n", a, a+32);
	printf("����� �Է��� %c�� �빮�ڴ� %c�Դϴ�.\n", b, b-32);
	
	return 0;
}
