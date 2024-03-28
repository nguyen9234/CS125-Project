#include <stdio.h>
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
