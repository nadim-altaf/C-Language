#include<stdio.h>
int main()
{
    float p,t,r,si; //four variable will create
    printf("Enter p : ");
    scanf("\n%f",& p);
    printf("Enter t :");
    scanf("\n%f",& t);
    printf("Enter r :");
    scanf("\n%f",& r);

     
     si = (p*r*t)/100;

    printf("Your Simple Interest Is : %f",si);
    return 0;
}
