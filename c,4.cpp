#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("%d\n", 3 + 2);
	printf("%d\n", 3 - 2);
	printf("%d\n", 3 * 2);
	printf("%d\n", 3 / 2);
	printf("%d\n", 3 % 2);
	int a1 = 0;
	int a2 = 0;
	printf("two numbers\n");
	scanf_s("%d %d" , &a1 , &a2);
	printf("%d\n", a1 + a2);
	printf("enter your age\n");
	char age[100];
	scanf_s("%s", age, 100);
	printf("your age is %s\n", age);
	printf("%.2lf\n",3.145);
	printf("%.2f\n", 3.5 + 2.5);
	int a = 0;
     scanf_s("%d",&a);
	 int units = a % 10;
	 int tens = a % 100 / 10;
	 int hundreds = a / 100;
	 printf("units: %d\n", units);
	 printf("tens: %d\n", tens);
	 printf("hundreds: %d\n", hundreds);
	 int b = 10;
	 double c = 3.14;
	 double result = b + c;
	 printf("%.2lf\n", result);
	 int d = 65537;
	 short e = (short)d;
	 int result2 = (int)e;
	 printf("%d\n", result2);
	 int b1 = 10;
	 int b2 = 3;
	 int result3 = (int)(b1 + b2);
	 printf("%zu\n", sizeof((int)(b1 + b2)));
	 return 0;
}