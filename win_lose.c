#include <stdio.h>

//Contributor: Dakota Jacobs

//Opens success Ascii Art
void success()
{
    FILE* f = fopen("success.txt", "r");
        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];
        
        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);  
}

//Opens fail Ascii Art
void failure()
{
    FILE* f = fopen("failure.txt", "r");
        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];
        
        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);  
}

