#include<stdio.h>
int main(){
	int t,i,n;
		printf("Enter Number Length: ");
	scanf("%d dddd", &t);

	for(i=0; i<t; i++){
	 
		scanf("%d", &n);
		if(n%2==0){
			printf("Evend\n");
		}
		else
		{
			printf("Odd\n");
		}
		 
	}
	return 0;
}
