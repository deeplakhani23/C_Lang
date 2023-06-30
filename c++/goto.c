#include<stdio.h>
int main(){    
    int i=1;
    test:
        if(i<=10){
            printf("%d ",i++);
            goto test;
         }
}