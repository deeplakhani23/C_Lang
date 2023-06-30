#include<stdio.h>
int main()
{
	char non1[30],non2[40],z=0,x=0;
	printf("Enter the first word :");
	gets(non1);
	printf("Enter the second word :");
	gets(non2);
	while(non1[z]!=0)z++;
	while(non2[x]!=0)
	{
		non1[z++]=non2[x];
		x++;
	}
		non1[z]='\0';
		printf("\n%s",non1);
}