#include <stdio.h>
void x()
{
    printf("You are in india\n");

    return;
}
void y()
{
    printf("you are in england\n");
    x();
    return;
}

void z()
{
    printf("you are in itily\n");
    y();
    return;
}
void a()
{
    printf("You are in china\n");
    z();
    return;
}
int main()
{
    z();
    return 0;
}
