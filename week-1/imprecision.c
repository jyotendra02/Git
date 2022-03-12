#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float x = get_float("x:");
    float y = get_float("y:");

    printf("%.30f\n",x / y); //using .30 to get numbers upto 30 decimal places
}