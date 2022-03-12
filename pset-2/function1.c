#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

 string word = "computer";
 int A = strlen(word);
 int WORD[A];
 int score = 0;
 for (int i = 0; i < A; i++)
 {
    WORD[i] = (int)toupper(word[i]);
    printf("%i\n",WORD[i]);
    score += POINTS[WORD[i]-65];

 }
 printf("%i\n",score);

}