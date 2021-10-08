#include<stdio.h>
int main()
{
	int i, j, s, rows=10;
	for(i=0; i<=rows; i++)
	{
		for(s=1; s<=(rows-i); s++)
		{
			printf(" ");
		}
		for(j=1; j<i; j++)
		{
			printf("* ");
		}
		printf(" \n");
	}
	
	
}
