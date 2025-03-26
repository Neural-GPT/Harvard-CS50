#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a, b;

    a = get_int("input your first number here ");

    b = get_int("input your second number here ");

    if (a > b)
    {
        printf("a is greater than b\n");
    }

    else if (a < b)
    {
        printf("b is greater than a\n");
    }

    else
    {
        printf("a is equal to b\n");
    }
}
