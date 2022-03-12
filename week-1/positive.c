//Abstraction and scope

#include<stdio.h>
#include<cs50.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n",i);
}

//Prompt user for positive integer
int get_positive_int(void) //we are using int in place of void because this function does have an output unlike previous one
{
            //we are declaring n outside of do while loop so that we can use it anywhere else , this is called scope of variable
    int n;  //do while loops first implements the given task and then evaluates it
    do
    {
        n=get_int("Positive Integer: ");
    }
    while(n<1);
    return n;
}
