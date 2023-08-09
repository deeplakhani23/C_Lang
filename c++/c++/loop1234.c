#include<stdio.h>
int main()
{
		int a,b;
		a=1;
		b=1;
		
		do{
				printf("%d",a);
				printf("%d",b);
				printf("\n");
				a++;
				b++;
		   }while(a<=5 || b<=5);
}