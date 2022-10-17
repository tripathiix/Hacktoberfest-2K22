#include <stdio.h>
int main()
{
//input
start:
	int choice, i, j, k, n;
	printf("\nenter 0 for star pattern \nenter 1 for reverse star pattern \n");
	scanf("%d", &choice);
	//output
	switch (choice)
	{
	case 0:
	{
		printf ("\nEnter the no. of raws : ");
		scanf ("%d",&n);
		//star pattern
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;
	}
	case 1:
	{
		printf ("\nEnter the no. of raws : ");
		scanf ("%d",&n);
		//reverse star pattern
		for (i = n; i >= 0; i--)
		{
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;
	}
	default:
	{
		printf("invalid input");
		goto start;
	}
	}
	return 0;
}
