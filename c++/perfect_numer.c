#include<stdio.h>
int perfect(int a)
{
    int i,n=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            n=n+i;
            printf("%d ",i);
        }
    }printf(": %d",n);
    if(a==n)printf("\nThis number is perfect : %d",n);
    else printf("\nThis numeber is not perfect : %d",n);
}
int main()
{
    int a;
    printf("Enter A:");
    scanf("%d",&a);
    perfect(a);
}