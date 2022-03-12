#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    // TO GET STRING AS INPUT FROM USER

    string text = get_string("Text: ");

    // INITIALISED VARIABLES TO STORE VALUES OF LETTERS WORDS SENTENCES IN THE GIVEN STRING

    int letters = 0;
    int space = 0;
    int words = 0;
    int sentences = 0;

    // CALCULATING STRING LENGTH

    int strl = strlen(text);

    // ABSTRACTING NUMBER OF LETTERS

    for (int i = 0; i < strl; i++)
    {
       if(isalpha(text[i]))
       {
           letters += 1;
       }
       else
       {
           letters += 0;
       }

    }

     // ABSTRACTING NUMBER OF WORDS

    for(int j = 0; j < strl; j++)
    {
        if(text[j]==' ')
        {
            space += 1;
        }
        else
        {
            space += 0;
        }
        words = space + 1;
    }

    // ABSTRACTING NUMBER OF SENTENCES

    for (int k = 0; k < strl; k++)
    {
       if(text[k]== '.'|| text[k]== '?'|| text[k]== '!')
       {
           sentences += 1;
       }
       else
       {
           sentences += 0;
       }

    }

    // CALCULATION L AND S FOR COLEMAN LIAU INDEX

    float L = (letters/(float)words)*100;
    float S = (sentences/(float)words)*100;
    float CLI = 0.0588*L - 0.296*S - 15.8;

    // PRINTING INSTRUCTION

    if(CLI >= 1 && CLI <= 16)
    {
        printf("Grade %.0f\n",CLI);
    }
    else if (CLI < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}