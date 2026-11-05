#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void getmaxandmin(int arr[], int length, int* max, int* min);
int getremainder(int num1, int num2,int* res);
int main()
{
	int arr[5] = { 0 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < length;i++)
	{
		scanf_s("%d",&arr[i]);
	}
	int max = 0;
	int min = 0;
	getmaxandmin(arr, length, &max, &min);
	printf("max=%d,min=%d\n", max, min);
	int a = 20;
	int b = 6;
	int res = 0;
	int flag = getremainder(a, b, &res);
	if (!flag)
	{
		printf("res=%d\n", res);
	}
	return 0;
}
void getmaxandmin(int arr[], int length, int* max, int* min)
{
	*max = arr[0];
	*min = arr[0];
	for (int i = 0;i < length;i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
		else if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}
int getremainder(int num1, int num2,int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
    *res = num1 % num2;
	return 0;
}