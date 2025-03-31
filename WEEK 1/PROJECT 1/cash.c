

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Input the change owed: ");
    }
    while (change < 0);

    // change coins possible= 25,10,5,1

    int coins =
        change / 25 + (change % 25) / 10 + ((change % 25) % 10) / 5 + (((change % 25) % 10) % 5);
    printf("%d\n", coins);
}
