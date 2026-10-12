#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	printf("Please enter a number\n");
	scanf_s("%d", &a);
	int units = a % 10;
	int tens = a / 10 % 10;
	printf("%d\n", units != 7 && tens != 7 && a % 7 != 0);
	int b = 10;
	int c = 20;
	b > c && ++a;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	int d = 10;
	int e = 20;
	d < e && ++a;
	printf("a = %d, d = %d, e = %d\n", a, d, e);
	a > b + c ? d : e;
	printf("%d\n", a > b + c ? d : e);
	int f = 6;
	int g = 7;
	int h = 8;
	int max = (f > g ? (f > h ? f : h) : (g > h ? g : h));
	printf("%d\n", max);
	int i;
	i = 10, i++, ++i;
	printf("%d\n", i);
	int num = 0;
	printf("Please enter a number too\n");
	scanf_s("%d", &num);
	num >= 0 ? num : -num;
	num %= 3;
	num *= 10;
	printf("%d\n", num >= 0 ? num : -num);
	int x = (num >= 0 ? num : -num, num %= 3, num *= 10);
	int money = 0;
	printf("Please enter total amount :\n");
	scanf_s("%d", &money);
	printf("%lf\n", money > 200 ? money * 0.8 : (money > 100 ? money * 0.9 : money));
	return 0;
}