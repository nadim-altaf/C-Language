//  PASSING ARRAY TO FUNCTION

#include <stdio.h>
void fun(int arr[])
{
    arr[0] = 1054;
    return;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    fun(arr); // pass by refrence , not using pointers
    printf("%d\n", arr[0]);
    return 0;
}
