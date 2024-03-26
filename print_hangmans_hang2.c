#include <stdio.h>

void hangman_hang(int x);

void print_hangmans_hang(int x)
{
    if (x == 0){

        hangman_hang(0);
    }
    else if (x == 1){

        hangman_hang(1);
    }
    else if(x ==2){
        hangman_hang(2);
    }
    else if(x ==3){
        hangman_hang(3);
    }
    else if(x ==4){
        hangman_hang(4);
    }
    else if(x ==5){
        hangman_hang(5);
    }
    else if(x ==6){
        hangman_hang(6);
    }
}
