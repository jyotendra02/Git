#include<stdio.h>
#include<cs50.h>
//arrays are 2D arrangement of Numbers Characters Words In C.
float average(int length, int array[]);
int main(void)  
{
        /* char score[3]= {'H','I','!'}; //In c we have to declare no of elements an array can hold there is no othe  r way to determine it
        printf("%i %i %i\n",score[0], score[1] ,score[2]); */

    const int A = get_int("Put Number of Scores:"); //const stores numbers which you can use again and again 
    int score[A];
    for(int i=0;i<A;i++)
    {
        score[i]=get_int("Score:");
    }
    printf("Average: %f\n", average(A,score) );
    
float average(int length, int array[]) //when giving arrays as input to a function then you dont specify the length of arrat    
{
    int sum = 0;
    for (int i=0; i<length; i++)
    {
        sum+= array[i];
    }
    return sum/(float)length; // to prevent truncation we cast average as float
}
}

 