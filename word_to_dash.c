#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        null_word[x] = '_';
    }
    null_word[len]='\0';
    
    return null_word;
}
