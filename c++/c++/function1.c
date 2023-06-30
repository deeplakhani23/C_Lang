#include<stdio.h>
 int mod()
 {
	int i,j,sp=25;
	for(i=1; i<=5;i++)
	{
		for(j=1;j<=5;j++)
			printf(" ");
		for(j=1;j<=i;j++){
			printf("* ");
		}
			sp--;
			printf("\n");
	}
 }
 int main()
  {
    mod();
  }
			
			