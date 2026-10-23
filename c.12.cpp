#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("input two number\n");
	scanf_s("%d %d", &a, &b);
	for (int i = 1;i <= a;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
	int c = 0;
	int d = 0;
	printf("input two number again\n");
	scanf_s("%d %d", &c, & d);
	for (int i = 1;i <= c;i++)
	{
		for (int j = 1;j <= d;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}