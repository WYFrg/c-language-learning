#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c = 'A';
	printf("%d\n", c);
	printf("%c\n", c);
	int a = 10;
	a++;
	++a;
	--a;
	a--;
	printf("%d\n", a);
	int d = 10;
	int b = ++a;
	int e = a++;
	printf("%d\n", b);
	printf("%d\n", e);
	int f = 10;
	int g = 10;
	int h = f++ + ++g - --f - g--;
	printf("%d\n", h);
	g += f;
	printf("%d\n", g);
	printf("%d\n", f);
	f == g;
	printf("%d\n", f == g);
	f != g;
	printf("%d\n", f != g);
	f > g;
	printf("%d\n", f > g);
	f <= g;
	printf("%d\n", f <= g);
	int i = 0;
	scanf_s("%d", &i);
	printf("%d\n", i % 2 == 0);
	int num = 0;
	scanf_s("%d",&num);
	printf("%d\n",num <= 100);
	printf("%d\n",1 && 1);
	printf("%d\n", 0 && 1);
	printf("%d\n", 1 && 0);
	printf("%d\n", 0 && 0);
	printf("%d\n", 1 || 1);
	printf("%d\n", 0 || 1);
	printf("%d\n", 1 || 0);
	printf("%d\n", 0 || 0);
	printf("%d\n", !1);
	printf("%d\n", !0);
	return 0;
}