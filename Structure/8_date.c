#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a, b;

    a.day = 15;
    a.month = 8;
    a.year = 2005;

    b.day = 6;
    b.month = 9;
    b.year = 2003;

    bool flag = true;

    if (a.day != b.day)
        flag = false;

    if (a.month != b.month)
        flag = false;

    if (a.year == b.year)
        flag = false;

    if (flag == true)
        printf("the dates are same");

    else
        printf("the dates are different");

    return 0;
}