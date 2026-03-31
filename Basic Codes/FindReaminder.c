#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Dividend : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
    // int q = a/b;
    // int r = a - b*q;
    // printf("The Remainder when %d is divided by %d is : %d",a,b,r);
    int r = a % b;
     printf("The Remainder when %d is divided by %d is : %d",a,b,r);

    return 0;
}

/* OUTPUT After Run
Enter Dividend : 39
Enter Divisor : 7
The Remainder when 39 is divided by 7 is : 4*/

// MODULUS
// int r = a % b;
// printf("The Remainder when %d is divided by %d is : %d",a,b,r);
