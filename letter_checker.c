#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* easy_word();
char* med_word();
char* hard_word();
char* choose_level(int a);
char* dash(char a);

void letter_checker(char a, int b)
{
    //char null_word[10] = "-----";

    int count=0,i;
    char* word = choose_level(b); 
    char* null_word = dash(*word);
    
    while ((strcmp(null_word, word) < -10) && (count < 6))
    {
        
        printf("Guess a letter: ");
        scanf(" %c", &a);
        char guess = tolower(a);

        int found = 0;
       
        for(i=0; i<5; i++)
        {
            if (guess == word[i])
            {
                null_word[i] = word[i];  
                found++;
            } 
        }
        
        if (!found)
        {   
            printf("Error\n");
            count++;
        }
        
        printf("%s\n", null_word);
    }  
}

//New version
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
  char* word;
  int option;
  while((a != 1) && (a != 2) && (a != 3))
  {
      printf("Invalid option\n");
      printf("What level would you like to play?");
      scanf("%d", &a);
      
      if ((a == 1) || (a == 2) || (a == 3))
        break;
  }
  
  if ((a == 1) || (option == 1))
      word = easy_word();
  
  else if ((a == 2) || (option == 2))
      word = med_word();
  
  else if ((a == 3) || (option == 3))
      word = hard_word();
      
  return word;
}      
