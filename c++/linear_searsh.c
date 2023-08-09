#include<stdio.h>
#include<stdlib.h>
#define n 10
int search(int a[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (a[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int a[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(a) / sizeof(a[0]);
  
    int result = search(a, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}