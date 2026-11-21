#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100] = "abc";
	printf("%s\n", str1);
	str1[0] = 'A';
	printf("%s\n", str1);
	const char* str2 = "defg";
	printf("%s\n", str2);
	printf("%p\n", str2);
	printf("%p\n", str1);
	int length = strlen(str1);
	printf("%d\n", length);
	strcat(str1, str2);
	printf("%s\n", str1);
	printf("%s\n",str2);
	strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%s\n",str2);
	int res = strcmp(str1, str2);
	printf("%d\n", res);
	_strlwr(str1);
	printf("%s\n", str1);
	_strupr(str1);
	printf("%s\n", str1);
	char str[100];
	scanf_s("%s", str, 100);
	printf("%s\n", str);
	char* p = str;
	while (1)
	{
		char c = *p;
		if (c == '\0')
		{
			break;
		}
		printf("%c\n", c);
		p++;
	}
	char strArr[2][100] =
	{
		"hi",
		"hello"
	};
	for (int i = 0;i < 2;i++)
	{
		char* str = strArr[i];
		printf("%s\n", str);
	}
	const char* strArr2[2] =
	{
		"hi",
		"hello"
	};
	for (int i = 0;i < 2;i++)
	{
		const char* str = strArr2[i];
		printf("%s\n", str);
	}
	return 0;
}