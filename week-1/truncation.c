#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get numbers from user
    int x = get_int("x:Divident--");
    int y = get_int("y:Divisor--");

    //divide the numbers given
    //We convert int to float just because if we dont do it then fractional part will be thrown away by code as it can only store integers
    float z = (float) x/(float) y;
    printf("%f \n",z);
}