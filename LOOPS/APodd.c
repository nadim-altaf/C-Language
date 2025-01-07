#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2) // nth term = 2n-1
    {
        printf("%d ", i);
    }
    //        WITHOUT MATHS 


    // int n; // itni baar loop chalega
    // printf("Enter a number:");
    // scanf("%d", &n);
    // // 1 3 5 7 9  ......upto n number of terms
    // // we ae going to use extra variables
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {

    //     printf("%d ", a);
    //     a = a + 2;
    // }

    return 0;
}