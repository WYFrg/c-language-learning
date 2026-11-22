#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000] = {};
	gets_s(a, 1000);
	int count = 0;
	char* p = a;
	while (*p != '\0')
	{
		if (*p != ' ')
		{
			count++;
		}
		p++;
	}
	printf("%d", count);
}