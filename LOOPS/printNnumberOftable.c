#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter number :");
    scanf("%d", &n);

    for (int i = 1; i <= 30; i++)
    {
        a = n * i;

        printf("%d * %d = %d\n", n, i, a);
    }

    return 0;
}