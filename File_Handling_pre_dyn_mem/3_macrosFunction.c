#include <stdio.h>

#define Pi 3.14159265359
#define area(r) (Pi*r*r)  // macro function
// float area(float r)
// {
//     return Pi * r * r;
// }
int main()
{
    printf("%f", area(10));
    return 0;
}