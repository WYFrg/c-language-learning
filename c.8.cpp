#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("put your money\n");
	int a = 0;
	scanf_s("%d", &a);
	if (0 < a && a < 100)
	{
		printf("you are VIP1\n");
	}
	else if (100 <= a && a < 500)
	{
		printf("you are VIP2\n");
	}
	else if (500 <= a && a < 1000)
	{
		printf("you are VIP3\n");
	}
	else if (1000 <= a && a < 2000)
	{
		printf("you are VIP4\n");
	}
	else if (2000 <= a && a < 5000)
	{
		printf("you are VIP5\n");
	}
	else if (5000 <= a && a < 10000)
	{
		printf("you are VIP6\n");
	}
	else if (10000 <= a && a < 20000)
	{
		printf("you are VIP7\n");
	}
	else
	{
		printf("you are not VIP\n");
	}
	int day0fweek = 0;
	int monday = 1;
	int tuesday = 2;
	int wednesday = 3;
	int thursday = 4;
	int friday = 5;
	int saturday = 6;
	int sunday = 7;
	printf("what day is today?\n");
	scanf_s("%d", &day0fweek);
	switch (day0fweek)
	{
	case 1:
		printf("original\n");
		break;
	case 2:
		printf("at 80%% of the original price\n");
		break;
	case 3:
		printf("at 75%% of the original price\n");
		break;
	case 4:
		printf("at 60%% of the original price\n");
		break;
	case 5:
		printf("at 50%% of the original price\n");
		break;
	case 6:
		printf("buy one get one free\n");
		break;
	default:
		printf("no discount\n");
		break;
	}
	int month = 0;
	printf("enter the month (1-12)\n");
	scanf_s("%d", &month);
	switch (month)
	{
	case 1:
	case 2:
	case 12:
		printf("winter\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("autumn\n");
		break;
	default:
		printf("Invalid month\n");
		break;
	}
	for (int i = 1; i <= 10; i++)
	{
		printf("improve a little every day\n");
	}
	return 0;
}