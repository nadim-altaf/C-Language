//  PASSING ARRAY TO FUNCTION

#include <stdio.h>
void fun(int x[])
{
    // SWAP
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;

    return;
}
int main()
{

    int arr[2] = {4, 6};
    printf("%d %d\n", arr[0], arr[1]);

    fun(arr); // pass by refrence , not using pointers
              // PURA ADDRESS JATA HAI
    printf("%d %d\n", arr[0], arr[1]);

    return 0;
}
