#include <stdio.h>

//Contributor: Dakota Jacobs

void success()
{
    FILE* f = fopen("success.txt", "r");
        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];
        
        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);  
}

void failure()
{
    FILE* f = fopen("failure.txt", "r");
        const unsigned MAX_LENGTH = 500;
        char buffer[MAX_LENGTH];
        
        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);  
}

