#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i, j, f;
	printf("enter the string : ");
	gets(str);
	j = strlen(str) - 1;
	for (i = 0; i <= j; i++, j--)
	{
		if (str[i] == str[j])
		{
			f = 0;
		}
		else
		{
			f = 1;
			break;
		}
	}
	if (f == 0)
	{
		printf("its a Palindrom string");
	}
	else if (f == 1)
	{
		printf("it's Not a Palindrom string");
	}
	return 0;
}
