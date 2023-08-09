#include<stdio.h>
 int main()
 {
	char str[50];
	printf("Enter strings:");
	//scanf("%s",&str);         //spce not allowed
	//scanf("%[^\n]s",str);     //spce allowed
	gets(str);
	
	//puts(str);
	printf("\nyour string is:%s",str);
	int i=0;
	
	while(str[i]!='\0'){
		i++;
	}
	printf("\n lenth is:%d",i);
}