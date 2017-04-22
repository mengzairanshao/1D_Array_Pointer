#include<stdio.h>
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int(*p)[4], i, j;
	p = a;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
			printf("%d ", *(*(p + i - 1) + j - 1));
		printf("\n");
	}
}