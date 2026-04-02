#include <stdio.h>
int main()
{
    for (int i = 65; i <= 90; i++)
    {
        char ch = (char)i; // this is typecasting
        printf("%c -> %d\n", ch, i);

        // printf("%d\n",i);
    }

    return 0;
}