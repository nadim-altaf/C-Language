#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    //ternary operator
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("%d is Even number",n) : printf(" %d is odd number",n);
    // if (n%2==0)
    // {
    //     printf("%d is Even number",n);
    // }
    // else{
    //     printf(" %d is odd number",n);
    // }
    return 0;
}