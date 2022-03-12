#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char c = get_char("Do you Agree?");

    if (c=='Y' || c=='y')// Char Need To Be Put Inside 'SINGLE QUOTES'
    {
        printf("Agreed.\n");
    }
    else if (c=='n' || c =='N')
    {
        printf("Not Agreed.\n");
    }
}