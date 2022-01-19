#include<stdio.h>
int main()
{
  char a[60];
  int i=0,count=0;
  printf("Enter the string\n");
  gets(a);
  puts(a);
  while(a[i]!='\0')
  {
     if(a[i]==' ')
     {
       count++;
     }
     i++;
  }
  printf("Number of blank spaces in a string is %d",count);
}
