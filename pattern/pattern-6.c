#include<stdio.h>
int main()
{
	int i,j,r,s,row=3;
	for(i=1; i<=row; i++){
		for(s=1; s<=(row-i); s++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
}
