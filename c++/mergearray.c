#include<stdio.h>
int main()
{
    int arr1[10], arr2[10], size1, size2, i, k, merge[20];
    printf("Enter Array1 size :");
    scanf("%d",&size1);
    printf("Enter Array1 Elements :");
    for(i=0; i<size1; i++)
    {
        scanf("%d",&arr1[i]);
        merge[i]=arr1[i];
    }
    \
    k = i;
    printf("\nEnter Array2 size :");
    scanf("%d",&size2);
    printf("\nEnter Array2 Elements :");
    for(i=0; i<size2; i++)
    {
        scanf("%d",&arr2[i]);
        merge[k++]=arr2[i];
        
    }
    printf("\narray merge is:\n");
    for(i=0;i<k; i++)
        printf("%d ",merge[i]);
        return 0;
}

