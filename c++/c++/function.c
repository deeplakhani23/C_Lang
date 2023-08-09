#include<stdio.h>
 int mad()     //function define
 {
	int a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	
		printf("mad:%d",a+b);
 }
 int main()
 {
	printf("Hello....\n");
	mad();         //function call
	printf("\n Hiii....");
 }