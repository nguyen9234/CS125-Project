#include <stdio.h>

//Contributors: Dakota Jacobs
//Sets the error hangman
void hangman_hang(int x) {
    int counter=0;
     FILE* f = fopen("hangmans_hang.txt", "r");
        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];
        while (fgets(buffer, MAX_LENGTH, f)){
            counter +=1;
            if(x == 0){
                if(counter <10)
                printf("%s", buffer);
            }
            else if(x == 1){
                if(counter >10 && counter < 20)
                printf("%s", buffer);
            }
            else if(x == 2){
                if(counter >20 && counter < 30)
                printf("%s", buffer);
            }
            else if(x == 3){
                if(counter >30 && counter < 40)
                printf("%s", buffer);
            }
            else if(x == 4){
                if(counter >40 && counter < 50)
                printf("%s", buffer);
            }
            else if(x == 5){
                if(counter >50 && counter < 60)
                printf("%s", buffer);
            }
            else if(x == 6){
                if(counter >60 && counter < 70)
                printf("%s", buffer);
            }
        }
}


//Contributors: Dakota Jacobs

//Prints error hangman
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


//Contributors: Dakota Jacobs

//Prints title at start of game
void calltitle()
{
        FILE* f = fopen("Hangman.txt", "r");

        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];

        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);
}
