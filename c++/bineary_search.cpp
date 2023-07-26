#include<stdio.h>
#define n 10
int binerysearch(int a[],int l,int h,int x)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==x)
            return mid+1;
        else if(a[mid]<n)
            l=mid+1;
        else
            h=mid-1;
    }
        return -1;
}
int main()
{
    int a[n]={1,5,15,19,24,26,37,41,49},x;
        printf("Enter your searching element:");
        scanf("%d",&x);
    int m=binerysearch(a,0,n-1,x);
        if(m==-1)
            printf("Element is not found....");
        else
            printf("Element is found a+%d position",m);
}