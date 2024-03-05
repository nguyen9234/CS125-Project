// Function puts in easy words into the file 
// Uses random number generator to randomly select word 
// Returns word
char* easy_word()
{
    char* word = malloc(15);
    
    /* Puts words into a txt file */
    FILE *ptr = fopen("easy_words.txt", "w");
    char word_1[15] = "aware\n";
    char word_2[15] = "equal\n";
    char word_3[15] = "sense\n";
    char word_4[15] = "stake\n";
    char word_5[15] = "chase\n";
    fputs(word_1, ptr);
    fputs(word_2, ptr);
    fputs(word_3, ptr);
    fputs(word_4, ptr);
    fputs(word_5, ptr);
    fclose(ptr);
    
    int num, i;
    num = rand()%5+1;
    
    ptr = fopen("easy_words.txt", "r");
    
    /* Randomly selects word and returns it*/
    for(i=0;i<num;i++)
    {
        fgets(word, 15, ptr);
    }
    
    return word;
    
}

/* Use for checking  
int main()
{
    srand(time(NULL));
    char* word;
    word = easy_word();
    printf("%c", word[2]);
    return 0;
}
*/
