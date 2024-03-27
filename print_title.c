#include <stdio.h>

void calltitle()
{
        FILE* f = fopen("Hangman.txt", "r");

        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];

        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);
}


