#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	for (int i = 0;i < 3;++i)
	{
		printf("i love you\n");
	}
	for (int i = 1;i <= 3;i++)
	{
		printf("i love you too\n");
	}
	for (int i = 5;i >= 1;i--)
	{
		printf("%d\n", i);
	}
	for (int i = 1;i <= 5;i++)
	{
		printf("%d\n", i);
	}
	int a = 0;
	for (int i = 0;i <= 5;i++)
	{
		a = a + i;
		printf("%d\n", a);	
	}
	int sum = 0;
	for (int c = 1;c <= 100;c++)
	{
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
	}
	  printf("sum = %d\n", sum);
	  int a1 = 0;
	  int a2 = 0;
	  int count = 0;
	  printf("please input a1 and a2\n");
	  scanf_s("%d %d", &a1, &a2);
	  int max = a1 > a2 ? a1 : a2;
	  int min = a1 < a2 ? a1 : a2;
	  for (int d = a1;d <= a2; d++)
	  {
		  if (d % 6 == 0 && d % 8 == 0)
		  {
			  count++;
		  }
	  }
	  printf("%d\n", count);
	  int x = 1;
	  while (x <= 3)
	  {
		  printf("improve a little every day\n");
		  x++;
		  }
}
