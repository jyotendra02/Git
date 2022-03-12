#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    //Money In Dollors to pay
    float dollar;
    do
    {
        dollar = get_float("Change Owed: ");
    }while(dollar<=0);
    //Convert Dollars to cent
    int cent = round(dollar * 100);

    //determine no of coins to give (quarter(25cents),dime(10cents),nickle(5cents),penny(1cent))

    int i=0;
    while (cent >=25)
    {
        cent -= 25;
        i++;
    }
    while (cent >=10)
    {
        cent -= 10;
        i++;
    }
    while (cent >=5)
    {
       cent -= 5;
        i++;
    }
    while (cent >=1)
    {
        cent -= 1;
        i++;
    }
    printf("%i\n",i);




}