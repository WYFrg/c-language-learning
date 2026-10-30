#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int arr[] = { 32,25,24,16,80 };
	int max = arr[0];
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < length;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	srand(time(NULL));
	int a[10] = {0};
	int length1 = sizeof(a) / sizeof(a[0]);
	int sum = 0;
	for (int i = 0;i < length1;i++)
	{
		int num = rand() % 100 + 1;
		a[i] = num;
		printf("%d\n", a[i]);
	}
	for (int i = 0;i < length1;i++)
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);
	return 0;
}
