#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int order(int arr[],int length,int num)
{
    for (int i = 0;i < length;i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    double a = 0, b = 0, c = 0;
    double d = 0;
    scanf_s(" %lf%lf%lf%lf", &a, &b, &c, &d);
    double sum = a * 100 + b * 10 + c + d * 0.1;
    printf("%.1f\n", sum);
    double sum1 = d + c * 0.1 + b * 0.01 + a * 0.001;
    printf("%.3lf\n", sum1);
    int e = 0;
	scanf_s("%d", &e);
    bool p1 = (e % 2 == 0);
    bool p2 = (e > 4 && e <= 12);
    printf("%d ", (p1 && p2));
    printf("%d ", (p1 || p2));
    printf("%d ", (p1 != p2));
    printf("%d \n", (!p1 && !p2));
    int arr[] = { 1,2,3,4,5 };
    int length = sizeof(arr) / sizeof(arr[0]);
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < length; i++)
    {
		int index = rand() % length;
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
    int num = 8;
    int index1 = order(arr, length, num);
    printf("%d", index1);
} 