#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Main Contributor: Nhi Nguyen
// Lines 54-63: Dakota Jacobs
char* easy_word();
char* med_word();
char* hard_word();
char* choose_level(int a);
char* dash(char *a);
void print_hangmans_hang(int x);
void hangman_hang(int x);

int letter_checker(int b)
{
    //Variables
    int count=0,i,winlose;

    //Calls function 
    char* word = choose_level(b); 
    char* null_word = dash(word);
    printf("%s\n", null_word);
    char a;
    
    //User guesses letter
    while ((strcmp(null_word, word) != 0) && (count <= 6))
    {
        printf("Guess a letter: ");
        scanf(" %c", &a);
        char guess = tolower(a);

        int found = 0;
        
        //If correct, update dashes with the appropriate letter
        for(i=0; i<strlen(word); i++)
        {
            if (guess == word[i])
            {
                null_word[i] = word[i];  
                found++;
            } 
        }
        //If incorrect, prints the updated "hangman" image
        if (!found)
        {   
            print_hangmans_hang(count);
            count++;
        }
        printf("%s\n", null_word); 
    }  

    //If user guessed correctly, returns a 1, if guessed incorrectly, return a 0
    if (count == 6)
    {
        winlose=0;
    }
    else if (strcmp(null_word, word) == 0)
    {
        winlose=1; 
    }
    return winlose;
}
