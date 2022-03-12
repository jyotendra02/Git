#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //in Computer memory char c1 c2 c3 will each take 1 byte or block and save 72 73 33 in them as bits
    char c1 ='H';
    char c2 ='I';
    char c3 ='!';
    printf("%i %i %i \n", c1, c2, c3);
    
    /* string s will take 4 bytes as a block and save 3 char 'H' 'I' '!' in them as elements in an 
    array of char and in 4th byte it will store \0 NUL character  to mark the end of string  */ 
    string s = "HI!";
    
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // c can access memory outside the defined string 
}

