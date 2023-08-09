#include<stdio.h>
int main()
{
    int a = 20, *p,**q;
        p = &a;
        q = &p;
    printf("value of a is:%d\n",a);
    printf("Address of a is:%u\n",&a);
    printf("Address of a using p is:%d\n",p);
    printf("Address of p is:%u\n",&p);
    printf("value of a using p is:%d\n",*p);
    printf("value of q using p is:%d\n",**q);
}
