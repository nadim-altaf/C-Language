#include <stdio.h>
// #include <limits.h>
int main()
{
    int arr[7] = {1, 2, 5, 4, 15, 19, 8};

    int min = arr[0];
    // int min = INT_MAX; //-> -2147483648
    for (int i = 0; i < 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);

    return 0;
}