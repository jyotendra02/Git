#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s;
    do
    {
        s = get_int("Starting Size: ");
    }while(s<9);



    // TODO: Prompt for end size

    int e;
    do
    {
        e = get_int("Ending Size: ");
    }while(e<s);

    // TODO: Calculate number of years until we reach threshold
    int i=0;
    if(s==e)
    {
        printf("Years: 0\n");
    }
    else
    {
        do
    {
        s = s +(s/3) -(s/4);
        i++;
    }while(s<e);

    printf("Years: %i\n",i);

    }

}
