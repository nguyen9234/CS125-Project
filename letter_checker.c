#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* easy_word();
char* med_word();
char* hard_word();
char* choose_level(int a);

void letter_checker(char a, int b)
{
    char null_word[10] = "-----";
    int count=0,i;
    char* word = choose_level(b);   
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

/*main
int main()
{
    int count=0, i;
    char null_word[10] = "-----";
    char guess;
    
    srand(time(NULL));
    char* word;
    word = easy_word();
    printf("%s\n", word);
    int c = strcmp(null_word, word);
    printf("%d\n", c);
    
    while ((strcmp(null_word, word) < -10) && (count < 6))
    {
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

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
        
        printf("%d\n", c);
        printf("%s\n", null_word);
       
    }

    return 0;
}*/
