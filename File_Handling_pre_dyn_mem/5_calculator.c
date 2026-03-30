#include <stdio.h>
int main()
{
    int a; // operand
    scanf("%d", &a);

    char ch; // + - / *   -> operator
    scanf("%c", &ch);

    int b;
    scanf("%d", &b);

    // if (ch == '+')
    //     printf("%d", a + b);

    // if (ch == '-')
    //     printf("%d", a - b);

    // if (ch == '*')
    //     printf("%d", a * b);

    // if (ch == '/')
    //     printf("%f", (float)a / b);
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    case '/':
        printf("%d", (float)a / b);
        break;

    default:
        printf("Invalid operator");
    }
    return;
}