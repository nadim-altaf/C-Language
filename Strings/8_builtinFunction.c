#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Nadim"; // \0 also included in size
    int x = strlen(str);
    printf("%d", x);
    return 0;
}