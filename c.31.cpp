#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
void method1();
int method2(int num1, int num2);
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int arr[10][10] = { 0 };
	int  (*p)[10] = arr;
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < a;j++)
		{
			scanf_s("%d", *p + j);
		}
		p++;
	}
	char str[] = "i love C";
	printf("%zu\n", sizeof(str));
	for (int i = 0;str[i] != '\0';i++)
	{
		printf("%d %c\n", i, str[i]);
	}
	void (*p1)() = method1;
	int (*p2)(int,int) = method2;
	p1();
	int num = p2(20,30);
	printf("%d\n", num);
	return 0;
}
void method1()
{
	printf("method1\n");
}
int method2(int num1,int num2)
{
	printf("method2\n");
	return num1 + num2;
}
