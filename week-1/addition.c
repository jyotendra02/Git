#include <cs50.h>
#include <stdio.h>

int main(void)
{
//  declaration of variable x that stores integer
//  get_int funtion will take value from user
    int x = get_int("x:");

    int y = get_int("y:");
//int can only take values upto 2billion as it also support -ve numbers in
//to store more numbers we can use long data type with respective format code
    printf("%i \n",x/y);
}
