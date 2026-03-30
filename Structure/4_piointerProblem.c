#include <stdio.h>
typedef int *int_pointer;
int main()
{
    int x = 4, y = 5;

    int_pointer a = &x, b = &y;

    printf("%p\n", a);
    
    printf("%p", b);
    return 0;
}