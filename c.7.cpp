#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int blood = 0;
	int damage = 0;
	int restore = 0;
	scanf_s("%d %d %d", &blood, &damage, &restore);
	blood = blood - damage + restore;
	if(blood > 200) 
	{
		blood = 200;
	}
	printf("%d\n", blood);
	if (1)
	{
		printf("blood is low!\n");
	}
	int a = 0;
	printf("Please enter a number:\n");
	scanf_s("%d", &a);
	if (a % 2 ==0)
	{
		printf("The number is even.\n");
	}
	else {
		printf("The number is odd.\n");
	}
	return 0;
}