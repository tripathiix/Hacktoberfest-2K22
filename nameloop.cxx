#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	printf("enter a string : ");
	gets(str);
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = i; j < strlen(str); j++)
		{
			printf("%c", str[j]);
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}

	return 0;
}
