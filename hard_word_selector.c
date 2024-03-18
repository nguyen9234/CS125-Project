#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function puts in med words into the file 
// Uses random number generator to randomly select word 
// Returns word
char* hard_word()
{
    char* word = malloc(15);
    
    /* Puts words into a txt file */
    FILE *ptr = fopen("hard_words.txt", "w");
    char word_1[15] = "wiggle worm\n";
    char word_2[15] = "flat earth\n";
   
    fputs(word_1, ptr);
    fputs(word_2, ptr);
   
    fclose(ptr);
    
    int num, i;
    num = rand()%2+1;
    
    ptr = fopen("hard_words.txt", "r");
    
    /* Randomly selects word and returns it*/
    for(i=0;i<num;i++)
    {
        fgets(word, 15, ptr);
    }
    
    return word;  
}

/* Use for checking  
int main()
{
    srand(time(NULL));
    char* word;
    word = hard_word();
    printf("%s", word);
    return 0;
}
*/
