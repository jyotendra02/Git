#include<stdio.h>
#include<cs50.h>
//we have created our own custom function from line 15-18

void meow(void); //this is a hint that there will exist a function called meow to prevent any sort of compiling error

int main(void)
{
    for(int i=0;i<3;i++)
    {
       meow();  //Here instead of calling printf function we called our own meow() function that just prints meow
    }
}
// to make our code more readable we put our custom functions at the bottom and not at top but this will produce error in on line 11 as out language doesn't know about meow function yet so we add a hint at top
void meow(void)
{
    printf("meow\n");
}