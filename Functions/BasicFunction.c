#include <stdio.h>
int main()
{
    void india(); // function prototype
    india();      // 1

    return 0; // 10
}
void england()
{
    printf("you are in england"); // 6
    return;                       // 7
}

void india()
{
    printf("you are in india\n"); // 2
    void australia();             // function prototype
    australia();                  // 3
    return;                       // 9
}

void australia()
{
    printf("you are in australia\n"); //  4
    void england();                   // function prototype
    england();                        // 5
    return;                           // 8
}