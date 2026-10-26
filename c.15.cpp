#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void get_sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	printf("%d\n", sum);
}
double get_sum1(double c, double d)
{
	double sum1 = 0;
	sum1 = c + d;
	return sum1;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("input two int numbers\n");
	scanf_s("%d %d", &a, &b);
	get_sum(a , b);
	double c = 0;
	double d = 0;
	printf("input two double numbers\n");
	scanf_s("%lf %lf", &c, &d);
	double result = get_sum1(c, d);
	printf("%.2lf", result);
	return 0;
}