#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Contributors: Nhi Nguyen

// Function puts in easy words into the file 
// Uses random number generator to randomly select word 
// Returns word
char* easy_word()
{
    char* word = malloc(15);
    
    /* Puts words into a txt file */
    FILE *ptr = fopen("easy_words.txt", "w");
    char word_1[15] = "aware\n";
    char word_2[15] = "equal\n";
    char word_3[15] = "sense\n";
    char word_4[15] = "stake\n";
    char word_5[15] = "chase\n";
    
    fputs(word_1, ptr);
    fputs(word_2, ptr);
    fputs(word_3, ptr);
    fputs(word_4, ptr);
    fputs(word_5, ptr);
    
    fclose(ptr);
    
    int num, i;
    num = rand()%5+1;
    
    ptr = fopen("easy_words.txt", "r");
    
    /* Randomly selects word and returns it*/
    for(i=0;i<num;i++)
    {
        fscanf(ptr, "%s", word);
    }
    return word;  
}


// Function puts in med words into the file 
// Uses random number generator to randomly select word 
// Returns word
char* med_word()
{
    char* word = malloc(15);
    
    /* Puts words into a txt file */
    FILE *ptr = fopen("med_words.txt", "w");
    char word_1[15] = "dilemma\n";
    char word_2[15] = "soldier\n";
    char word_3[15] = "seminar\n";
    char word_4[15] = "contact\n";
    char word_5[15] = "climate\n";
    fputs(word_1, ptr);
    fputs(word_2, ptr);
    fputs(word_3, ptr);
    fputs(word_4, ptr);
    fputs(word_5, ptr);
    fclose(ptr);
    
    int num, i;
    num = rand()%5+1;
    
    ptr = fopen("med_words.txt", "r");
    
    /* Randomly selects word and returns it*/
    for(i=0;i<num;i++)
    {
        fscanf(ptr, "%s", word);
    }
    
    return word;
    
}


// Function puts in med words into the file 
// Uses random number generator to randomly select word 
// Returns word
char* hard_word()
{
    char* word = malloc(15);
    
    /* Puts words into a txt file */
    FILE *ptr = fopen("hard_words.txt", "w");
    char word_1[15] = "wiggleyworm\n";
    char word_2[15] = "flatearth\n";
   
    fputs(word_1, ptr);
    fputs(word_2, ptr);
   
    fclose(ptr);
    
    int num, i;
    num = rand()%2+1;
    
    ptr = fopen("hard_words.txt", "r");
    
    /* Randomly selects word and returns it*/
    for(i=0;i<num;i++)
    {
        fscanf(ptr, "%s", word);
    }
    
    return word;  
}
