#include<stdio.h>
int main()
{
		int a[10],i,odd=0,even=0,tot=0;
		for(i=0;i<10;i++)
		{
			printf("enter val[%d]:",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++){
			if(a[i]%2==0){
				even=even+a[i];
			}else{
				odd=odd+a[i];
			}
		}tot=even+odd;
		printf("Even sum : %d",even);
		printf("\n Odd sum : %d",odd);
		printf("\nTotal is : %d",tot);
}