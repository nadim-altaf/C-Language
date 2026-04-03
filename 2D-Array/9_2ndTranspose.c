#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows :");
    scanf("%d", &n);

    int m;
    printf("Enter Columns :");
    scanf("%d", &m);

    printf("Enter all the elements:\n");
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    int brr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", arr[j][i]);
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    // printing brr
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}