#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter nuber of rows you want to print");
	scanf("%d", &rows);
	for(i=0; i<=rows; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
