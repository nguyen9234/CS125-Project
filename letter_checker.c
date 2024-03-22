//Fixed version
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* easy_word();
char* med_word();
char* hard_word();
char* choose_level(int a);
char* dash(char *a);

void letter_checker(int b)
{
    //char null_word[10] = "-----";

    int count=0,i;
    
    char* word = choose_level(b); 
    char* null_word = dash(word);
    printf("%s\n", null_word);
    char a;
    
    
    while ((strcmp(null_word, word) < 85) && (count < 6))
    {
        printf("Guess a letter: ");
        scanf(" %c", &a);
        char guess = tolower(a);

        int found = 0;
       
        for(i=0; i<strlen(word); i++)
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
        printf("%d\n", strcmp(null_word,word));
    }  
}







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


