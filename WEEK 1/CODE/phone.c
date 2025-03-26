#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name= get_string("Input your name here: ");
    string number= get_string("Input your number here: ");
    int age= get_int("Input your age here: ");
    printf("\n");

    printf("Your name is %s, your age is %i and your phone number is %s\n", name,age,number);
}
