#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

//Contributors: Nhi Nguyen & Dakota Jacobs
//Note: Dakota contributed with ASCII art

//Call other files
#include "headers.h"

char* choose_level(int a);
char* dash(char *a);
int letter_checker(int b);
void hangman_hang(int x);
void success();
void failure();

//char* easy_word();
//char* med_word();
//char* hard_word();
//void print_hangmans_hang(int x);
//void calltitle();

int main()
{
    srand(time(NULL));
    //Variables
    const char* word;
    int option, win_lose;
    char guess;

    //Game start
    calltitle();
    printf("\n\n");
    printf("    'Rules of the game'\n");
    printf("1) Only guess 1 letter at a time, otherwise it will only take the first\n");
    printf("2) You have 6 chances to guess correctly\n");
    printf("3) Have FUN :] \n\n");
    printf("What level would you like to play? (1=easy, 2=medium, 3=hard)");

    //Start of game
    win_lose = letter_checker(option);

    //Print win or lose statement
    if (win_lose ==1)
    {
       success();
    }
    else 
    {
       failure();
    }
    return 0;
}
