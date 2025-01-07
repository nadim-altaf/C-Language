#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter no. of Rows :");
    // scanf("%d", &n);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         int a = n/2+1;
    //         if(i==a || j==a)
    //         printf("*");
    //         else
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    return 0;
}
