#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int identity,i;
	float a, b, c;
	printf("請輸入身分(1:經理人員 2:時薪工 3:抽傭金工 4:零工):");
	scanf_s("%d",&identity);
	
		switch (identity)
		{
		case 1:
			puts("您的周薪:12000\n");
			break;
		case 2:
			printf("請輸入您的工作時數:");
			scanf_s("%f\n", &a);
			if (a <= 40)
			{
				printf("您的周薪:%.0f", a * 133);
			}
			else
			{
				printf("您的周薪:&.03f\n", a * 133 + (a - 40)*1.5 * 133);
			}
			break;
		case 3:
			printf("請輸入當周銷售金額:");
			scanf_s("%f", &b);
			printf("您的周薪:%.0f\n", 250 + b*0.057);
			break;
		case 4:
			printf("請輸入當週生產件數:");
			scanf_s("%f", &c);
			printf("您的周薪:%.0f", c * 5);
			break;
		}
		
	system("pause");
	return 0;
}