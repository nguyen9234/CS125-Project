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
void calltitle();
void print_hangmans_hang(int x);
void hangman_hang(int x);
void success();
void failure();

int main()
{
    srand(time(NULL));
    const char* word;
    int option, win_lose;
    char guess;
    
    calltitle();
    printf("\n\n");
    
    printf("What level would you like to play? (1=easy, 2=medium, 3=hard)");
    scanf("%d", &option);
    //win_lose = letter_checker(option);
    letter_checker(option);
    //if win_lose == 1
    //   call success
    //else if win_lose == 0
    //   call lose
    return 0;
}
