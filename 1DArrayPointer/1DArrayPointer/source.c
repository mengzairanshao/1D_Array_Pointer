#include<stdio.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int(*p)[4],i;
	p = &a;
	for(i=3;i>=0;i--)
		printf("%d ", (*p)[i]);
	printf("\n");
	return 0;
}