#include<stdio.h>
int perfect(int a)
{
    int i,z[]={500,200,100,50,20,10,5.2,1},n=0;
    for(i=0;i<9;i++)
    {
        n=a/z[i];
        if(n!=0)
        {
            printf("\n %d notes is : %d",z[i],n);
            a=a%z[i];
        }
    }
}
int main()
{
    int n;
    printf("Enter Amount:");
    scanf("%d",&n);
    perfect(n);
}