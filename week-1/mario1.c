#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //Get Positive integer from user
    int n;
    do
    {
        n = get_int("width:");
    }
    while(n<1);

    //print out number of ## given by user
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           printf("#");
       }
       printf("\n");
    }
    printf("\n");
}