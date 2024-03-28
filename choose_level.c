#include <stdio.h>
#include <stdlib.h>

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

  //Error Checking: if users type in a number larger than 3 or a letter
  while((a > 3) || (scanf("%d", &a) != 1))
  {
      printf("Invalid option\n");
      printf("What level would you like to play?");
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
