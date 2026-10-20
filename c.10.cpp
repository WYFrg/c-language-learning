#define _CRT_SEURE_NO_WARINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	int count = 0;
	while (1)
	{
		printf("please input a number\n");
		scanf_s("%d", &a);
		if (a > 0)
		{
			sum = sum + a;
			count++;
		}
		else if (a < 0)
		{
			printf("it's wrong,input a number again\n");
		}
		else
		{
			break;
		}
	}
	printf("%d\n%d\n", sum, count);
}