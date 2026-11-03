#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 5,20,25,30,10,15,35,40,45 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;
	for (int i = 0;i < length - 1;i++)
	{
		for (int j = 0;j < length - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < length;i++)
	{
		printf("%d\n",arr[i]);
	}
	int arr1[] = { 5,3,4,1,2 };
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int temp1 = 0;
	for (int i = 0;i < length1 - 1;i++)
	{
		for (int j = i + 1;j < length1;j++)
		{
			if (arr1[i] > arr1[j])
			{
				temp1 = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp1;
			}
		}
	}
	for (int i = 0;i < length1;i++)
	{
		printf("%d\n",arr1[i]);
	}
	int a = 20;
	int* p = &a;
	*p = 200;
	printf("%d\n", *p);
	printf("%d\n", a);
	double b = 3.14;
	double* p1 = &b;
	printf("%.2lf\n", *p1);
}