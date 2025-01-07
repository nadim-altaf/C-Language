#include <stdio.h>
int main() //HOMEWORK GREATEST OF 4 POSITIVE DIGITS NUMBERS
{
    int a, b, c, d;
    printf("Enter ist number :");
    scanf("%d", &a);
    printf("\nEnter 2nd number :");
    scanf("%d", &b);
    printf("\nEnter 3rd number :");
    scanf("%d", &c);
    printf("\nEnter 4th number :");
    scanf("%d",&d);

    
    if (a > b && a > c && a > d)
    {
        printf("a is greatest ");
    }
    if (b > a && b > c && b > d)
    {
        printf("b is greatest");
    }
    if (c > a && c > b && c > d)
    {
        printf("c is greatest");
    }
    if(d > a && d > b && d > c)
    {
        printf("d is greatest");
    }
    return 0;
}