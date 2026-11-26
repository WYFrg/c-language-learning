#include<stdio.h>
typedef struct
{
	int chinese;
	int math;
	int english;
	int sum;
	int id;
}A;
int main()
{
	A stu[305] = {};
	int x = 0, y = 0, z = 0, n = 0, sum = 0;
	scanf_s("%d", &n);
	A* p = stu;
	A* p1[305];
	for (int i = 0;i < n;i++)
	{
		stu[i].id = i + 1;
		scanf_s("%d %d %d", &(p->chinese), &(p->math), &(p->english));
		p->sum = p->chinese + p->math + p->english;
		p1[i] = &stu[i];
		p++;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - 1 - i;j++)
		{
			if ((p1[j]->sum < p1[j + 1]->sum) || ((p1[j]->sum == p1[j + 1]->sum) && (p1[j]->chinese < p1[j + 1]->chinese)) || ((p1[j]->sum == p1[j + 1]->sum) && (p1[j]->chinese == p1[j + 1]->chinese)) && (p1[j]->id > p1[j + 1]->id))
			{
				A* temp = p1[j];
				p1[j] = p1[j + 1];
				p1[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < 5;i++)
	{
		printf("%d %d\n", p1[i]->id, p1[i]->sum);
	}
}