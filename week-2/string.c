#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  // there exist a function strlen inside header file string.h to find length of string
    string s =get_string("Input:");
    printf("Output:");
  /*  for (int i = 0; s[i] !='\0';i++) */
  /*for(int i=0; i<strlen;i++)*/  //poor design as we are running fn strlen on each loop

   for(int i = 0, l = strlen(s) ; i < l;i++) //now we are asking only once for string length not again n aga
    {
        printf("%c",s[i]);
    }
    printf("\n");
}