#include<stdio.h>
#include<cs50.h>

void meow(int n);        //prototype of meow function
int get_width(void);     //prototype of get width function

int main(void)
{
   int k =get_width();
    meow(k);
}

void meow(int n)                //It is a function that will print meow n number of times , value of n can be attined
{                               //from  user or you can declare by yourself depending on situation
    for(int i=0;i<n;i++)
    {
        printf("meow\n");
    }
}

int get_width(void)             //Here i have created function to get value of width from user and store it in variable w
{
    int w;
    do
    {
        w=get_int("Width: ");
    }while(w<1);
    return w;
}