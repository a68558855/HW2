#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int identity,i;
	float a, b, c;
	printf("�п�J����(1:�g�z�H�� 2:���~�u 3:��Ī��u 4:�s�u):");
	scanf_s("%d",&identity);
	
		switch (identity)
		{
		case 1:
			puts("�z���P�~:12000\n");
			break;
		case 2:
			printf("�п�J�z���u�@�ɼ�:");
			scanf_s("%f\n", &a);
			if (a <= 40)
			{
				printf("�z���P�~:%.0f", a * 133);
			}
			else
			{
				printf("�z���P�~:&.03f\n", a * 133 + (a - 40)*1.5 * 133);
			}
			break;
		case 3:
			printf("�п�J��P�P����B:");
			scanf_s("%f", &b);
			printf("�z���P�~:%.0f\n", 250 + b*0.057);
			break;
		case 4:
			printf("�п�J��g�Ͳ����:");
			scanf_s("%f", &c);
			printf("�z���P�~:%.0f", c * 5);
			break;
		}
		
	system("pause");
	return 0;
}