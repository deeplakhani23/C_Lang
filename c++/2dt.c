#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3];
	for(i=0;i<3;i++)
	{
		for(j-0;j<3;j++)
	  {
			printf("enter val a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
	  }
	}
	
	for(i=0;i<3;i++)
	{
		printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}	printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}	printf("\t");
		for(j=0;j<3;j++)
		{
			b[i][j]=a[i][j]+a[i][j];
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
}