#include <stdio.h>
int main()
// Given a point (x,y), write a prigram to find out if it lies on
// the x-axis,y-axis or at thr origin,viz. (0,0).
{
    int x, y;
    printf("Enter the coordinates :");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is origin");
    }
    else if (x == 0)
    {
        printf("The point lies on y-axis");
    }
    else if (y == 0)
    {
        printf("The point lies on x-axis");
    }
    else
    {
        printf("The point does not lie on x-axis or y-axis");
    }

    return 0;
}