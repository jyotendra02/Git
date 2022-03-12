#include <cs50.h>
#include <string.h>
#include <stdio.h>
string print_cipher();

int main(void)
{
   string plain_text = get_string("Plain Text: ");
   int l = strlen(plain_text);
    int cipher_text[l];
   for (int i = 0; i < l; i++)
   {
       if ((int)plain_text[i] >=65 && (int)plain_text <=77)
       {
           cipher_text[i] = (int)plain_text[i] + 13;
       }
       else if ((int)plain_text[i] >=78 && (int)plain_text <=90)
       {
           cipher_text[i] = (int)plain_text[i] - 13;
       }
       else if ((int)plain_text[i] >=97 && (int)plain_text <=109)
       {
           cipher_text[i] = (int)plain_text[i] + 13;
       }
       else if ((int)plain_text[i] >=110 && (int)plain_text <= 122)
       {
           cipher_text[i] = (int)plain_text[i] - 13;
       }
       else
       {
           cipher_text[i] = (int)plain_text[i];
       }
   }
    printf("Cipher text: %s\n",print_cipher());

string print_cipher(void)
{
    string text[l];
    for (int j = 0; j < l; j++)
    {
        text[j] == (char)cipher_text[j] ;
    }
    return text[l];
}

}