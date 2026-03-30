// Count the number of elements in given array greater then given number X.
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 3;

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        if (arr[i] > x)
        {
            count++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}