#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct          // DEFINING CUSTOM DATA STRUCTURE PERSON THAT STORES NAME AND NUMBER OF PEOPLE
{
    string name;
    string number;
}
person;

const int NUMBER = 2;

int main(int argc, int argv[])
{
    const int NUMBER = argv[1];

    person people[NUMBER];

    for (int j = 0; j < NUMBER; j++)
    {
        people[j].name = get_string("What's the Name?: ");
        people[j].number = get_string("whats their Number?: ");
    }


    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}