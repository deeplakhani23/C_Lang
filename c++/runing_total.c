#include<stdio.h>
#define n 5
int sum(int a[])
{
    int i,sum;
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d\n",a[i]);
        else{
            sum=a[i]+a[i-1];
            printf("%d\t%d\n",a[i],sum);
        }
    }
}
int main()
{
    int arr[n],i;
        for(i=0;i<n;i++)
        {
            printf("Enter Number of : ");
            scanf("%d",&arr[i]);
        }
        sum(arr);
}