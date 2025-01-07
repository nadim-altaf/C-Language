#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // no. of rows -> denoted by i
    {

        for (int j = 1; j <= 2 * i - 1; j++) // no. of columns -> denoted by j
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}