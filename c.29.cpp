#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int arr[100] = { 0 };
	int* p1 = arr;
	for (int i = 0;i < a;i++)
	{
		scanf_s("%d", p1);
			p1++;
	}
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);
	printf("%zu\n", sizeof(arr));
	printf("%zu\n", sizeof(&arr));
	int arr1[2][3] = 
	{
		{1,2,3},
		{10,20,30}
	};
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%d ", arr1[i][j]);
		}
	}
	printf("\n");

	return 0;
}