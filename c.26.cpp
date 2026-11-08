#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* method();
int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	printf("%p\n", p);
	printf("%p\n", p + 1);
	printf("%p\n", p - 2);
	int b = 20;
	int* q = &b;
	*q = *p;
	printf("%d\n", *q);
	printf("%d\n", b);
	int c = 30;
	*q = c;
	c = *p;
	printf("%d\n", *q);
	printf("%d\n", c);
	int arr[5] = { 0 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < length; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int* r = &arr[0];
	for (int i = 0;i <= length - 1;i++)
	{
		printf("%d\n", *(r + i));
	}
	int* r1 = &arr[3];
	printf("%lld\n", r1 - r);
	printf("%p\n", r);
	printf("%d\n", *r1);
	int* p2 = p + 10;
	printf("%lld\n", p2);
	int* p3 = method();
	printf("----------\n");
	printf("%d\n", *p3);
	printf("%p\n", p3);
}
int* method()
{
	int num = 40;
	int* p = &num;
	return p;
}