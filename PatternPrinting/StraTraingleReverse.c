#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter no. of Rows :");
    // scanf("%d", &n);
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int n;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        a = a - 1; // OR (a--;)
        printf("\n");
    }

    return 0;
}