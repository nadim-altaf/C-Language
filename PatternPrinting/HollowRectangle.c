#include <stdio.h>
int main()
{
    // HOME work
    // ******
    // *    *
    // *    *
    // ******

    int n, m;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    printf("Enter no. of columns :");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // int a = 4;
            if (i == 1 || j == 6)

                printf("*");

            if (i == 6 || j == 1)
                printf("#");
            if (i == 4 || j == 6)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
