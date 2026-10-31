#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int arr[10] = { 0 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	srand(time(NULL));
	for (int i = 0;i < length;)
	{
		int num = rand() % 100 + 1;
		int is_duplicate = 0;
		for (int j = 0;j < i;j++)
		{
			if (arr[j] == num)
			{
				is_duplicate = 1;
				break;
			}
		}
			if (is_duplicate == 0)
			{
				arr[i] = num;
				i++;
			}
		printf("%d\n", num);
	}
	int sum = 0;
	int a = 0;
	for (int i = 0;i < length;i++)
	{
		sum = sum + arr[i];
		a = sum / length;
	}
	for (int i = 0;i < length;i++)
	{
		if (arr[i] < a)
		{
			count++;
		}
	}
	printf("%d\n", sum);
	printf("%d\n", a);
	printf("%d\n", count);
	int b = 0, c = 0, d = 0;
	scanf_s("%d %d %d", &b, &c, &d);
	printf("----------------\n");
	int arr1[] = { b,c,d };
	int length1 = sizeof(arr1) / sizeof(arr[0]);
	for(int i = 0;i < length1;i++)
	{
		printf("%d\n", arr1[i]);
	}
	for (int i = length1 - 1;i >= 0;i--)
	{
		printf("%d\n", arr1[i]);
	}
	for (int i = 0;i < length1 / 2;i++)
	{
		int temp = arr1[i];
		arr1[i] = arr1[length1 - 1];
		arr1[length1 - 1] = temp;
	}
	for (int i = 0;i < length1;i++)
	{
		printf("%d\n", arr1[i]);
	}
	return 0;
}