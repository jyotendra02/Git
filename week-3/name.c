 #include <cs50.h>
 #include <string.h>
 #include <stdio.h>

 int main(void)
 {
     string name[] = {"harsh", "jyotendra" ,"ojas", "prabal", "shreyansh", "shreyas", "utkarsh"};

     for( int i = 0; i < 7; i++)
     {
         if(strcmp(name[i], "jyotendra") == 0)  // WE CAN'T COMPARE STRINGS IN C JUST AS WE DO FOR INTEGERS
         {
             printf("Found\n");
             return 0;
         }
     }
     // DON'T PUT RETURN 1 INSIDE THE LOOP BECAUSE IF NOT FOUND IN ITH LOOP IT WILL RETURN NOT FOUND
     printf("Not Found \n"); //  ONLY IF WE DON FIND AFTER COMPLETION OF FOR LOOP THEN ONLY RETURN NOT FOUND
     return 1;
 }
