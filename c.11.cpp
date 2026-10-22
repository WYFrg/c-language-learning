#define _CRT_SEURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int height = 8844430;
	double paper = 0.1;
	int count = 0;
	while (paper <= height)
	{
		paper = paper * 2;
		count++;
	}
	printf("%d\n", count);
	int num = 0;
	int rev = 0;
	int temp = 0;
	scanf_s("%d", &num);
	if (99 < num && num < 1000)
	{
		while (num != 0)
		{
			temp = num % 10;
			num = num / 10;
			rev = rev * 10 + temp;
		}
	}
	else if (num <= 99 || num >= 1000)
	{
		printf("it's wrong\n");
	}
	printf("%d\n", rev);
	int number = 0;
	int a = 0;
	scanf_s("%d", &number);
	scanf_s("%d", &a);
	if (a > 0 && a < number)
	{
		while (a * a <= number)
		{
			a++;
		}
		printf("%d", a - 1);
	}
	else
	{
		printf("it's wrong\n");
	}
}