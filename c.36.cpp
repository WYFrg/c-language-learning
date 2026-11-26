#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[100];
	int age;
}A;
void method(A* st);
int main()
{
	A stu;
	strcpy(stu.name, "abc");
	stu.age = 0;
	printf("%s %d\n", stu.name, stu.age);
	method(&stu);
	printf("%s %d\n", stu.name, stu.age);
}
void method(A* p)
{
	scanf_s("%s %d", p -> name,100, &(p -> age));
}