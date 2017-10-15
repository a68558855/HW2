#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	
		int i;
		int a, b,c;
		for (i = 0; i < 100; i++)
		{
			printf("Enter # of hours worked (-1 to end):");
			scanf_s("%d", &a);
			printf("Enter hourly rate of the work($00.00):");
			scanf_s("%d", &b);
			if (a  <= 40)
			{
				c = a*b;
				printf("Salary is $%d\n\n",c );
			}
			else
			{
				c =(a-40)*1.5*b+40*b;
				printf("Salary is $%d\n\n", c);
			}

		}
}
