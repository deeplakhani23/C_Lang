#include<stdio.h>
int main()
{
	char dud1[10],dud2[20],dud;
	int d,p,a=0;
		printf("enter the dud:");
		gets(dud1);
		while(dud1[a]!=0)
		a++;
		p=a-1;
	for(d=0;d<a;d++)
		{
		dud2[d]=dud1[p];
		p--;
		}
		dud2[d]='\0';
		printf("%s\n",dud2);
}
	