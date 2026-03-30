#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    printf("Enter no. of Columns :");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) // outer loop -> no. of lines(rows)
    {

        for (int i = 1; i <= m; i++) // inner loop -> no. of stars in each line or (no. of columns)
        {
            printf("*"); 
        }
        printf("\n"); //har line ke baad ek enter marnai ke liya
    }

    return 0;
}