#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		printf("*");
		printf("\n");
	}
	printf("\n(B)\n");
	for (i = 10; i >= 0; i--)
	{
		for (j =1 ; j <= i; j++)
		printf("*");
		printf("\n");
	}
	printf("\n(C)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
		printf(" ");
		for (k=10;k>=i;k--)
		printf("*");
		printf("\n");
	}
	printf("\n(D)\n");
	for (i = 0; i <= 10; i++)
	{
		for (j = 9; j>= i; j--)
		printf(" ");
		for (k = 1; k <= i; k++)
		printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}