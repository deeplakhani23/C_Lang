#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter a and b: ");
    scanf("%d%d",&a, &b);
    printf("\n1. Auddititon\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch(ch){
        case 1 :
            printf("Addition of a and b is: %d\n",a+b);
            break;
         case 2 :
            printf("Substraction of a and b is: %d\n",a-b);
            break;
        case 3 :
            printf("Multiplication of a and b is: %d\n",a*b);
            break;
        case 4 :
            printf("Division of a and b is: %d\n",a/b);
            break;
        default:
            printf("Wrong input....");
            break;
        }
    }