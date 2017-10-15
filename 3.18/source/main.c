#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float a, b;
	for (i = 0; i < 10; i++)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &a);
		if (a > -1)
		{
			b = a*0.09 + 200;
			printf("Salary is:%.2f\n", b);
		}
		else
		{
			system("pause");
		}
	
	}
}