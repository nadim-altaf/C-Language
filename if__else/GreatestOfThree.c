#include <stdio.h>
int main()
{
    int n, a, d;
    printf("Enter ist number n :");
    scanf("%d", &n);
    printf("\nEnter 2nd number a :");
    scanf("%d", &a);
    printf("\nEnter 3rd number d :");
    scanf("%d", &d);

    
    if (n > a && n > d)
    {
        printf("n is greatest ");
    }
    if (a > n && a > d)
    {
        printf("a is greatest");
    }
    if (d > n && d > a)
    {
        printf("d is greatest");
    }
    return 0;
}
