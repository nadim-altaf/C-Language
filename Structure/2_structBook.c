#include <stdio.h>
int main()
{
    struct book // user defined data type
    {
        char name[50];
        float price;
        int noOfPages;
    } a, b, c;

    a.noOfPages = 100;
    a.price = 499.78;
    strcpy(a.name, "secret seven");

    b.noOfPages = 200;
    b.price = 799.78;
    strcpy(b.name, "the ending");

    printf("%d\n", a.noOfPages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    printf("%d\n", b.noOfPages);
    printf("%f\n", b.price);
    printf("%s\n", b.name);

    return 0;
}