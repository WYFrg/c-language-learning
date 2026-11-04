#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a, int* b);
int* method();
int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	int* p = method();
	printf("    \n");
	printf("%d\n", *p);
	return 0;
}
void swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int* method()
{
	static int a = 10;
	return &a;
}