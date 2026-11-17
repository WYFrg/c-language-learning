#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
void method1();
int method2(int num1, int num2);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int main()
{
	void (*p1)() = method1;
	int (*p2)(int, int) = method2;
	p1();
	int num = p2(10, 20);
	printf("%d", num);
	int(*p[4])(int, int) = { add,subtract,multiply,divide };
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	int choose = 0;
	scanf_s("%d", &choose);
	if (choose <= 4 && choose > 0)
	{
		int res = (p[choose - 1])(a, b);
		printf("%d\n", res);
	}
	else
	{
		printf("it's wrong\n");
	}
}
void method1()
{
	printf("method1\n");
}
int method2(int num1, int num2)
{
	printf("method2\n");
	return num1 + num2;
}
int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return a / b;
}