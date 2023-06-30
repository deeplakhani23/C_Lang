#include<stdio.h>
int main()
{
		int a[5],b[5],c[5],i,t,per;
		for(i=0;i<5;i++)
		{
			printf("enter the sci marks of student %d:",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{
			printf("enter the maths marks of student %d:",i);
			scanf("%d",&b[i]);
		}
		for(i=0;i<5;i++)
		{
			printf("enter the eng marks of student [%d] :",i);
			scanf("%d",&c[i]);
		}
		printf("sci\tmaths\teng\ttotal\tpercentage\tGrade");
		for(i=0;i<5;i++)
			{
				t=a[i] + b[i] + c[i];
				per= t/3;
				printf("\n%d\t%d\t%d\t%d\t%d\t\t",a[i],b[i],c[i],t,per);
				if(a[i]<35||b[i]<35||c[i]<35)
				{
					printf("faill...");
				}
				else if(per>=75)
				{
					printf("grade A");
				}
				else if(per>=60&&per<75)
				{
					printf("grade B");
				}
				else if(per>=45&&per<60)
				{
					printf("grade C");
				}
				else 
				{
					printf("grade D");
				}
			}
}
