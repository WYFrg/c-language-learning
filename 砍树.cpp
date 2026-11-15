#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int binarySearch(int arr[1000000], int high, int N,int M,int maxtree);
int main()
{
    int maxtree = 0;
    int N = 0, M = 0;
    scanf_s("%d %d", &N, &M);
    int arr[1000] = {};
    int high = 0;
    for (int i = 0;i < N;i++)
    {
        scanf_s("%d", &arr[i]);
        if (arr[i] > maxtree)
        {
            maxtree = arr[i];
        }
    }
    int index = binarySearch(arr, high, N,M,maxtree);
    printf("%d", index);
}
int binarySearch(int arr[1000], int high, int N,int M,int maxtree)
{
    int min = 0;
    int max = maxtree;
    int ans = 0;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        long long sum = 0;
        for (int i = 0;i < N;i++)
        {
            if (arr[i] > mid)
            {
                sum += arr[i] - mid;
            }
        }
        if (sum >= M)
        {
            ans = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return ans;
}