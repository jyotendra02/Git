#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // CODE SMELL: WE ARE JUST RELYING ON THE FACT THE NUMBERS AND NAMES ARE ENTERED RESPECTIVELY 
    // IF NOT THEN THERE IS NO WAY TO ATTEST THAT THE NUMBER CORRESPONDING TO THE NAME IS INDEED CORRECT 
    
    // WE NEED SOME DATA STRUCTURE THAT CAN ACTUALLY LINK BOTH THESE VALUES 
    string name[] = {"Brian", "David"};
    string numbers[]= {"+91-975-534-9440", "+91-877-037-2373"};
    for (int i = 0; i < 2; i++)
    {
        if(strcmp(name[i], "David") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}