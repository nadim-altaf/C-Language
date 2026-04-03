#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows / columns :");
    scanf("%d", &n);

    printf("Enter all the elements:\n");

    int arr[n][n];
// input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
 printf("\n");
// transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)  // or j <= i
        {
            // swap arr[i][j] and arrr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}