#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand((unsigned int)time(NULL));
	int guess = 0;
	int num = rand() % 100 + 1;
	int count = 0;
	printf("congratulation ! you're strated a number-guessing game from 1 to 100\n");
	while (1)
	{
		printf("input your number\n");
		scanf_s("%d", &guess);
		if (guess < 1 || guess >100)
		{
			printf("input a number again\n");
			continue;
		}
		count++;
		if (guess < num)
		{
			printf("it's too small\n");
		}
		else if(guess > num)
		{
			printf("it's too big\n");
		}
		else
		{
			printf("congratulations on your success\n");
			break;
		}
	}
	printf("your number of guesses is %d\n", count);
	if (count >= 1 && count <= 3)
	{
		printf("you're lucky\n");
	}
	else if (count > 3 && count <= 10)
	{
		printf("you're amazing\n");
	}
	else if (count > 10 && count <= 20)
	{
		printf("you're good\n");
	}
	else
	{
		printf("you made it,but you failed\n");
	}
	printf("the program has ended.press any key to exit.\n");
	system("pause");
	return 0;
}