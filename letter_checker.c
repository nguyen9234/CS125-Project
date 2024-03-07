char letter_checker(char a)
{
    int count=0, i;
    char* null_word[10] = "-----";
    
    
    
    printf("Guess a letter: ");
    scanf(" %c", &a);
    while (strcmp(null_word, word) < -10)
    {
       
        for(i=0; i<5; i++)
        {
            if (a == word[i])
            {
                null_word[i] = word[i];
                
            }
        
        }
        
        printf("%s\n", null_word);
        printf("Guess a letter: ");
        scanf(" %c", &a);   
    }
    return null_word;
}


int main()
{
    /* Starter var for checking */
    int count=0, i;
    char null_word[10] = "-----";
    char guess;
    
    
    srand(time(NULL));
    char* word;
    word = easy_word();
    printf("%s\n", word);
   
    //Notes: guess right answer, dashed lines replaced with the letter
    //Need to figure out: error checking, lowercase/uppercase
    while ((strcmp(null_word, word) < -10) && (count < 6))
    {
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        for(i=0; i<5; i++)
        {
            if (guess == word[i])
            {
                null_word[i] = word[i];
            }
            
            if ((i == 5) && (guess != word[i]))
            {
                printf("error\n");
            }
        }
        
        printf("%s\n", null_word);
       
    }

    return 0;
}


int main()
{
    int count=0, i;
    char null_word[10] = "-----";
    char guess;
    
    srand(time(NULL));
    char* word;
    word = easy_word();
    printf("%s\n", word);
    int c = strcmp(null_word, word);
    printf("%d\n", c);
    
    while ((strcmp(null_word, word) < -10) && (count < 6))
    {
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        //guess = char_lower_case(guess);
        for(i=0; i<5; i++)
        {
            if (guess == word[i])
            {
                null_word[i] = word[i];
                
            }
            else if(guess != word[i])
            {
                printf("Error\n");
                
            }
            
            
        }
        c = strcmp(null_word, word);
        if (strcmp(null_word, word) != c)
        {   
            printf("Error\n");
        }
        
        printf("%d\n", c);
        printf("%s\n", null_word);
       
    }

    return 0;
}
