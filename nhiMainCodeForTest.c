#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

char* easy_word();
char* med_word();
char* hard_word();
char* choose_level(int a);
char* dash(char *a);
char* letter_checker(int b);

int main()
{
    srand(time(NULL));
    const char* word;
    int option;
    char guess;
    
    printf("What level would you like to play?");
    scanf("%d", &option);
    
    

    letter_checker( option);
    return 0;
}
