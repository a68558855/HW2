#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, a;
	float b, c, d, e, f;
	for (i = 0; i < 1000; i++)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &a);
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%ff", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &d);
		printf("Enter credit limit: ");
		scanf_s("%f", &e);
		f = b + c - d;
		if (f < e)
		{
			printf("Accound:\t%d", a);
			printf("Credict limit:%.2f", e);
			printf("Balance:\t:%.2f", b + c - d);
			printf("Credit Limit Exceeded.");
		}
		else
		{
			system("pause");
		}
	}
	
}