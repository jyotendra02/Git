#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0 };  // If elements of arrays are known then we can declare them like this

    for(int i = 0; i < 7; i++)
    {
        if (numbers[i]==0)
        printf("Found\n");
        return 0;
    }
    printf("Not Found\n");
    return 1;
}