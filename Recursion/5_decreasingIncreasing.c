#include <stdio.h>

// Print 1 to n (After recursive call)

void increasing_decreasing(int n)
{
    if (n == 0) // base case
    {
        return;
    }
    printf("%d\n", n); // code -> decreasing
    increasing_decreasing(n - 1); // call
    printf("%d\n", n); // code -> increasing

    return;
}

int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    increasing_decreasing(n);

    return 0;
}