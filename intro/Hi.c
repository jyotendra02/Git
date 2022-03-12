#include <stdio.h>  //stdio stands for standard input output which is a library of c to execute functions like printf
#include <cs50.h>   //cs50 library to run code easily ang provides funcitons such as get_sting get_int etc.
                    // header files provide more functionalites while coding than the language has i.e. C
int main(void)    
{
    string answer = get_string("What's your name?  "); // get_string is a function made by cs50 staff to get string as input form user its not an actual c funtoion
    printf("hello,%s\n", answer);                     //%s is a format code and acts as a placeholder for displaying the input given by user in answer variable
                                                     //\n breaks the current line and shifts the prompter to next line
}


/*
int main(void)        Is A boilerplate code for c and is equivalent of when green flag clicked in scratch
{

}
*/
