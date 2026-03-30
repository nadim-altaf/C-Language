#include <stdio.h>
void increasing(int x, int n) // parameterised way ,using extra variable

{
    if (x>n)
    {
        return;
    }
    printf("%d ", x);
    increasing(x + 1, n);
    return;
}

int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    increasing(1, n);

    return 0;
}