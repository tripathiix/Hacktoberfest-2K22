#include <stdio.h>
int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	int i, j, k;
	// input
	printf("\nEnter the elements matrix 1 : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nelement [%d : %d] = ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nEnter the elements matrix 2 : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nelement [%d : %d] = ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}
	// output
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mat3[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("\nmultiplication of mat1 and mat2 is ::");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("\t%d", mat3[i][j]);
		}
	}

	return 0;
}
