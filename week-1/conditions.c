#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get x from user
    int x = get_int("x:");
    //get y from user
    int y = get_int("y:");

    //compare the given inputs

    if(x>y)
    {
        printf("x is greater than y\n");

    }
    else if (x<y)
    {
        printf("x is less than y \n");

    }
    else
    {
        printf("x is equal to y\n");
    }
}