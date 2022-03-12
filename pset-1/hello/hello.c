#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //prompt user for name
    string name = get_string("Whats Your Name?: ");
    printf("You are %s\n", name);
}