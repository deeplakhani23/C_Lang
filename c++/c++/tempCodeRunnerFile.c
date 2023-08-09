#include<stdio.h>
int main()
{
    int a,count;
    printf("Enter a number:");
    scanf("%d",&a);
    count=1;
    start:
    if(count<=10){
        printf("%d * %d = %d\n",a,count,a*count,count++);
        //count++;
        goto start;
    }
}