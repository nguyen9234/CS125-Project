#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
