#include <stdio.h>
int main()
{
    // FILE *ptr = fopen("nadim.txt", "r");
    // char str[100];

    // while (fgets(str, 100, ptr) != NULL)
    //     printf("%s", str);

    FILE *ptr = fopen("akeeb.txt", "w");
    char str[] = "Tawheed is the key to jannah";
    fputs(str, ptr);
    fclose(ptr);
    return 0;
}