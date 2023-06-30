#include<stdio.h>
int nub(int z)
{
	int x=0;
	while(z!=0){
		x=x*10+z%10;
		z/=10;
	}return x;
}
int main()
{
	int z, m;
	printf("Enter number : ");
	scanf("%d",&z);
	
	m=nub(z);
	printf("The revers number is :%d",m);
}
		