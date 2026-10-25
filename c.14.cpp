#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	printf("input a number\n");
	scanf_s("%d", &a);
	int count1 = 0;
	for (int i = 2;i <= a;i++)
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
			printf("%d\n", i);
			count1++;
		}
	}
	printf("%d\n", count1);
	long long res = 0;
	for (int j = 1;j <= 10;j++)
	{
		long long pow = 1;
		for (int i = 1;i <= j;i++)
		{
			pow = pow * j;
		}
		res = res + pow;
	}
	printf("%lld\n", res);
	/*
	int c = 1;
b:
	printf("improve a little every day%d\n",c);
	c++;
	goto b;
	*/
	int x = 0;
	int y = 0;
	int count = 0;
	printf("input two numbers\n");
	scanf_s("%d %d", &x, &y);
	for (int i = x;i <= y;i++)
	{
		int temp = i;
		int z = 0;
		while (temp != 0)
		{
			int unit = temp % 10;
			z = z + unit;
			temp = temp / 10;
		}
		if (z == 15)
		{
			printf("it's right\n");
			count++;
		}
	}
	printf("%d", count);
}