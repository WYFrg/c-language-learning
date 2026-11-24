#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student
{
	char name[100];
	int age;
};
typedef struct
{
	char name[100];
	int attack;
	int defense;
	int blood;
}a;
int main()
{
	struct student s1 = { "kbs",20 };
	struct student s2 = { "abc",19 };
	struct student s3 = { "def",18 };
	struct student stuArr[3] = { s1,s2,s3 };
	struct student* p = stuArr;
	for (int i = 0;i < 3;i++)
	{
		printf("%s %d\n",p -> name,p -> age);
		p++;
	}
	a b = { "a",100,100,100 };
	a c = { "b",200,50,100 };
	a d = { "c",50,200,100 };
	a arr[] = { b,c,d };
	a* p1 = arr;
	for (int i = 0;i < 3;i++)
	{
		printf("%s %d %d %d\n", p1-> name, p1-> attack,p1 -> defense,p1 -> blood);
		p1++;
	}
}