#include<stdio.h>
int main()
{
    int length;
    printf("Enter length :");
    scanf("%d",&length);

    int breath;
    printf("Enter breath :");
    scanf("%d",&breath);
    
    int area;
    area = length*breath;
    int perimeter;
    perimeter = 2*(length+breath);
    if(area > perimeter)
    {
        printf("area is greater than perimeter");
    }
    if(perimeter > area)
    {
        printf("area is not greater than area");
    }
    if(area == perimeter)
    {
        printf("area is equal to perimeter");
    }
    return 0;
}


    