#include <stdio.h>
#include <string.h>
int main()
{
	char str[21];
	int i;
	printf("20글내 내의 문자열 입력: ");
	scanf("%s", str);
	
	//A=65, Z=90, a=97, z=122
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
			//putchar(str[i]+32);
			putchar(tolower(str[i]));
		else if(str[i] >= 97 && str[i] <= 122)
			putchar(str[i]-32);
		else
			putchar(str[i]);
		
		
	}
	return 0;
}
