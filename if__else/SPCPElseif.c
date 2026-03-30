#include<stdio.h>
int main()
{
    int cp;
    printf("Enter cp :");
    scanf("%d",&cp);
    int sp;
    printf("Enter sp :");
    scanf("%d",&sp);
    if(sp > cp)
    {
        printf("Profit");
    }
    else if(cp > sp)
    {
        printf("Lose");
    }
    else
    {
        printf("No Profit,No Lose"); 
    }

    return 0;
}