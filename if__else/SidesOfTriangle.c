#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter ist side :");
    scanf("%d", &a);
    printf("Enter 2nd side :");
    scanf("%d", &b);
    printf("Enter 3rd side :");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Sides of triangle is valid");
    }
    else
    {
        printf("Sides of triangle is not valid");
    }

    return 0;
}