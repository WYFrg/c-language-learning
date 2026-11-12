#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(void** p1, void** p2);
int main()
{
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* p2 = &b;
	printf("%p %p\n", p1, p2);
	swap((void**)&p1, (void**)&p2);
	printf("%d %d\n", *p1, *p2);
	printf("%d %d\n", a, b);
	return 0;
}
void swap(void** p1, void** p2)
{
	void* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}