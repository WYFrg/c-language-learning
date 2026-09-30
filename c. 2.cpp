#include<stdio.h>
int main()
{
	printf("%d\n", 5);
	printf("%.2f\n", 3.14);
	printf("%c\n", 'S');
	printf("%s\n", "happy everyday");
	int a = 10;
	printf("%d\n", a);
	int b = 20;
	int c = a + b;
	printf("%d\n ", c);
	short d = 100;
	printf("%d\n", d);
	printf("%zu\n", sizeof(short));
	unsigned short e = 200;
	printf("%u\n", e);
	signed int f = -520;
	printf("%d\n", f);
	float x = 3.14;
	printf ("%.3f\n", x);
	printf ("%zu\n", sizeof(float));
	double y = 3.14159;
	printf ("%.5f\n", y);
	printf ("%zu\n", sizeof(double));
	char z = 'B';
	char name[50];
	printf("%c\n", z);
	printf("%zu\n",sizeof(char));
	scanf_s("%d", &a);
	printf("%d\n", a);
	printf("how old are you\n");
	scanf_s("%d", &a);
	printf("what is your name?\n");
	scanf_s("%s", name ,50);
	while (getchar() != '\n');
	printf("put two numbers\n");
	scanf_s("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a);
	printf("%d\n", b);
}