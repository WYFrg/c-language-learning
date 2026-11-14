#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[5][10] = {};
	scanf_s("%d", &a);
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < a;j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}
	int arr4[3][5] = 
	{
		{ 1,2,3,4,5 },
		{ 6,7,8,9,10 },
		{11,12,13,14,15}
	};
	int(*p)[5] = arr4;
	printf("%p\n", arr4);
	printf("%p\n", arr4 + 1);
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			printf("%d ", *(*p + j));
		}
		printf("\n");
		p++;
	}
	int arr1[4] = {1,2,3,4};
	int arr2[3] = { 5,6,7 };
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int length2 = sizeof(arr2) / sizeof(arr2[0]);
	int lengtharr[] = { length1,length2 };
	int* arr3[2] = { arr1,arr2 };
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < lengtharr[i];j++)
		{
			printf("%d", *(arr3[i] + j));
		}
		printf("\n");
	}
	/*
	int** p = (int**)&arr3[0];
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < lengtharr[i];j++)
		{
			printf("%d", *(*p + j));
		}
		printf("\n");
		p++;
	}
	*/
	return 0;
}