#include <stdio.h>
int main()
{
    int a = 25;
    int *x = &a;
    // imp -> *x = 7;            // a is changed
    int **y = &x;
    int ***z = &y;

    printf("%d\n", a); // %p se address print hota hai

    printf("%d\n", *x);

    printf("%d\n", **y);

    printf("%d\n", ***z);

    return 0;
}

// int ke ander address store nahi hota