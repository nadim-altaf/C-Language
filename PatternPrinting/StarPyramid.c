#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    int nst = 1;
    int nsp = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // for space
        {
            printf(" ");
        }
        nsp = nsp - 1;
        for (int k = 1; k <= nst; k++)
        {

            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }

    return 0;
}