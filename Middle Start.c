#include<stdio.h>
int main()
{
	int i, j, k, n;

	printf("enter number of rows : ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}