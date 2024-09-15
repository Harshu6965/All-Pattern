#include<stdio.h>
int main()
{
	int i, j, n;

        printf("enter number of rows : ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%c", j+96);
		}
		printf("\n");
	}
	return 0;
}