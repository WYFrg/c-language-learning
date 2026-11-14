#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int arr[15][15] = {};
	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };
	int x = 0, y = 0;
	int dir = 0, num = 1;
	for (int i = 0;i < (a * a);i++)
	{
	      arr[x][y] = num;
		  int next_x = x + dy[dir];
		  int next_y = y + dx[dir];
		  if (next_x < 0 || next_x >= a || next_y < 0 || next_y >= a || arr[next_x][next_y] != 0)
		  {
			  dir = (dir + 1) % 4;
			  next_x = x + dy[dir];
			  next_y = y + dx[dir];
		  }
		  x = next_x;
		  y = next_y;
		  num++;
	}
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < a;j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}