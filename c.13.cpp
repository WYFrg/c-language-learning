#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	for (int i = 1;i <= a; i++)
	{
		for (int j = 1;j <= b;j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	for (int i = 1;i <= 100;i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	for (int i = 0;i <= 5;i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("%d\n", i);
	}
	for (int i = 0;i <= 5;i++)
	{
		for (int j = i;j <=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0;i <= 5;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	int count1 = 0;
	for (int i = 2;i <= 100;i++)
	{
		int count = 0;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0 && i > 1)
		{
			printf("%d",i);
			count1++;
		}
		printf("%d\n", count1);
	}
	
	
	/*
	for (;;)
	{
		printf("i love you\n");
	}
	while (1)
	{
		printf("i love you too\n");
	}
	*/
}