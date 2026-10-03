#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter your name\n");
	scanf_s("%s", name, 50);
	printf("your name is %s\n", name);
	printf("%d\n", 3 + 5);
	printf("%.2lf\n", 3.0 - 5.0);
	printf("%.2lf\n", 2 * 0.5);
	printf("%d\n", 10 / 5);
	printf("%d\n", 10 % 3);
	printf("%d\n", 10 % -7);
	printf("%d\n", -10 % 7);
	int number = 0;
	printf("one number\n");
	scanf_s("%d", &number);
	if
		(number % 2 == 1) {

		printf("%d is odd\n", number);
	}
	else {
	printf("%d is even\n", number);
}
	return 0;
}