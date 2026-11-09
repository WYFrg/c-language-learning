#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(void* p, void* p3, int length);
int main()
{
	int a = 0;
	short b = 0;
	scanf_s("%d %hd", &a, &b);
	int* p = &a;
	int* p1 = (int*)&b;
	short* p3 = &b;
	printf("%d %d %d\n", *p, *p1, *p3);
	printf("%p %p %p\n", p, p1, p3);
	printf("%d\n", a - b);
	printf("%p\n", p + 1);
	void* p2 = p;
	void* p4 = p3;
	printf("%p %p\n", p2, p4);
	printf("%p\n", p2);
	int c = 100;
	int d = 200;
	swap(&c, &d, sizeof(int));
	printf("%d %d\n", c, d);
	return 0;
}
void swap(void* p, void* p3,int length)
{
	unsigned char* pc1 = (unsigned char*)p;
	unsigned char* pc2 = (unsigned char*)p3;
	unsigned char temp = 0;
	for (int i = 0; i < length; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;
		pc1++;
		pc2++;
	}
}