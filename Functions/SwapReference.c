
// SWAP 2 NUMBERS :-- USE 3RD VARIABLE

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;   // *x = 2 ,current value = 3
    *y = temp; // *y = 2 --> b = 2
    return;
}
int main()
{
    int a = 2;
    int b = 3;

    // int* x = &a;
    // int* y = &b;

    swap(&a, &b);

    printf(" The value of a is %d\n", a);
    printf(" The value of b is %d", b);

    return 0;
}