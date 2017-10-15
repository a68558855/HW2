#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b,i,j;
	char sign = '+';
	scanf_s("%d %d", &a, &b);
	for (i = 1; i <= a; i++)
	{
		printf("\n");
		for (j = 1; j <= b; j++)
		{
			if ((i==a)||(i==1)||(j==1)||(j==b))
			{
				printf("%c", sign);
			}
			else
			{
				printf(" ");
			}
			}
	}
	system("pause");
}