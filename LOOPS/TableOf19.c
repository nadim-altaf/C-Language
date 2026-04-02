#include<stdio.h>
int main()
{
    int n;
    for(n = 1;n<=190;n++)
    {
        if(n%19==0){
            printf("%d\n",n);
        }
        //printf("%d\n",n);
    }


    return 0;
}