#include <stdio.h>
#include <string.h>

int main()

{
    char str[40]; // = "Hello world"; // one space wiil be added i.e -> ( \0 )

    // scanf("%s", str); // only the first word will be considered
    //  scanf("%[^\n]s", str); //
    gets(str); // entire sentence can be input

    // int i = 0;
    // while (str[i] != '\0')
    // {
    printf("%s", str);
    //     i++;
    // }

    // printf("%s", str);

   // puts(str);

    return 0;
}