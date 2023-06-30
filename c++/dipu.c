#include<stdio.h>
int main()
{
	int a[3][3],i,j,n=0,n1=0,n2=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter val a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("  %d ",a[i][j]);
			if(i==j){
				n=n+a[i][j];
			}else if(i<j){
				n1=n1+a[i][j];
			}else{
				n2=n2+a[i][j];
			}
		}printf("\n");
	}printf("\nDiogonal Element Total : %d",n);
	printf("\nUpper Triangle Total : %d",n1);
	printf("\nLower Triangle Total : %d",n2);
}	