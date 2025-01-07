#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sumEven = 0;
    int sumodd = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumodd = sumodd + arr[i];
        }
    }

    printf("The sum of even indiecs is : %d\n", sumEven);
    printf("The sum of odd indiecs is : %d\n", sumodd);

    printf("Diff b/t even and odd indiecs is : %d", sumEven - sumodd);

    return 0;
}
