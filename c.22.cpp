#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int arr[], int length, int num);
int binary_search1(int arr1[], int length1, int num1);
int main()
{
	int arr[] = { 11,16,23,34,90 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int num = 34;
	int num1 = 5;
    int result = binary_search(arr, length, num);
    printf("%d\n", result);
	int result1 = binary_search1(arr1, length1, num1);
	printf("%d\n", result1);
	return 0;
}
int binary_search(int arr[], int length, int num)
{
	int min = 0;
	int max = length - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if(arr[mid] < num)
		{
			min = mid + 1;
		}
		else if(arr[mid] > num)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int binary_search1(int arr1[], int length1, int num1)
{
	int min1 = 0;
	int max1 = length1 - 1;
	int key = 3;
	while (min1 < num1)
	{
		int mid1 = min1 + (key - arr1[min1]) / (arr1[max1] - arr1[min1]) * (max1 - min1);
		if (arr1[mid1] < num1)
		{
			min1 = mid1 + 1;
		}
		else if (arr1[mid1] > num1)
		{
			max1 = mid1 - 1;
		}
		else
		{
			return mid1;
		}
	}
}