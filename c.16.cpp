#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int get_sum2(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
int get_sum1(int c, int d)
{
	int sum1 = 0;
	sum1 = c + d;
	return sum1;
}
int get_multiply(int x, int y)
{
	int multiply = x * y;
	return multiply;
}
int main()
{
	int a = 0 , x = 0;
	int b = 0, y = 0;
	int choice = 0;
	int c = 0;
	int d = 0;
	printf("input your choice\n");
	scanf_s("%d", &choice);
	if (choice > 0 && choice <= 10)
	{
		printf("input two numbers\n");
		scanf_s("%d %d", &a, &b);
		int result = get_sum2(a, b);
		printf("%d\n", result);
	}
	else if(choice <= 0)
	{
		printf("input two numbers again\n");
		scanf_s("%d %d", &c, &d);
		int result1 = get_sum1(c, d);
		printf("%d\n", result1);
	}
	else
	{
		printf("please input two numbers again and again\n");
		scanf_s("%d %d", &x, &y);
		int result2 = 1;
		for (int i = x;i <= y;i++)
		{
			result2 = get_multiply(result2 , i);
		}
		printf("%d\n", result2);
	}
	double res1 = pow(2, 3);
	printf("%.1lf\n", res1);
	printf("input a number\n");
	int e = 0;
	scanf_s("%d", &e);
	double res2 = sqrt(e);
	printf("%.1lf\n", res2);
	long long res3 = time(NULL);
	printf("%lld\n", res3);
	srand(2);
	for (int i = 1;i <= 10;i++)
	{
		int num = rand();
		printf("%d\n", num);
	}
	return 0;
}