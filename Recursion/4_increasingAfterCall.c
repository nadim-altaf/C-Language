#include <stdio.h>

// Print 1 to n (After recursive call)

void increasing(int n)
{
    if (n == 0) // base case
    {
        return;
    }
   
    increasing(n - 1); // call

    printf("%d\n", n); // code

    return;
}

int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    increasing(n);

    return 0;
}