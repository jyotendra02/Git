#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
   
    for (int i = 0, l = strlen(s); i < l; i++)
    {
       /* if (s[i] >= 'a'&& s[i] <='z' )   
        {                                                 v1.0
            printf("%c",s[i] - 32);
        }*/
       /*-----------------------------------------------------*/
        /*   if(islower(s[i]))
        {
            printf("%c",toupper(s[i]));
        }
        else                                              v1.2
        {
            printf("%c",s[i]);
        }*/
        /*-----------------------------------------------------*/
        printf("%c",toupper(s[i]));      //               v1.3
    }
     printf("\n");
   
}