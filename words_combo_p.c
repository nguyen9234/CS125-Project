#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Contributors: Nhi Nguyen
char* easy_word();
char* med_word();
char* hard_word();

//User types in a number to choose level 
//Function for selected level will be called
//Returns a random word

char* choose_level(int a)
{
  //Variables
  char* word;
  int option;
  int rf = scanf("%d", &a);
  //Error Checking: if users type in a number larger than 3 or a letter
  while((a > 3) || (rf != 1))
  {
      printf("Invalid option\n");
      printf("What level would you like to play? (1=Easy, 2=Medium, 3=Hard) ");
      scanf("%*c%d", &a);
      
      if ((a == 1) || (a == 2) || (a == 3))
        break;
  }

  //Calls appropriate word selector depending on option
  if ((a == 1) || (option == 1))
      word = easy_word();
  
  else if ((a == 2) || (option == 2))
      word = med_word();
  
  else if ((a == 3) || (option == 3))
      word = hard_word();
      
  return word;
}      

//Contributors: Dakota Jacobs
//Debugging: Nhi Nguyen
//Takes the word and converts it into dashes
char* dash(char *a)
{
    //Variables
    int len, x;

    //String length and initialized array
    len = strlen(a);
    char* null_word = malloc(len); 

    //Using the string length, initializes values into the array
    for(x=0; x<(len); x++)
    {
        null_word[x] = '-';
    }
    null_word[len]='\0';
    
    return null_word;
}
