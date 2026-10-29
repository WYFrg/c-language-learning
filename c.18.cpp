#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printArr(int arr3[],int length)
{
	for (int i = 0;i < length;i++)
	{
		printf("%d\n", arr3[i]);
	}
	printf("%zu\n", sizeof(arr3));
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	for (int i = 0;i < 5;i++)
	{
		printf("%d\n", arr[i]);
	}
	arr[4] = 10;
	printf("%d\n", arr[4]);
	char arr1[3] = {'A','B','C'};
	printf("%c\n",arr1[2]);
	printf("%p\n", &arr1);
	char s[] = "hello world";
	printf("%s\n", s);
	int a = 10;
	printf("%p\n", &a);
	int b = 30;
	printf("%p\n", &b);
	char c = 'A';
	printf("%p\n", &c);
	int arr3[] = { 1,2,3 };
	printf("%zu\n", sizeof(arr3));
	int length = sizeof(arr3) / sizeof(arr3[0]);
	printArr(arr3, length);
	printf("%d\n", length);
    return 0;
}
