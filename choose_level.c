//User types in a number to choose level 
//Function for selected level will be called
//Returns a random word

char* choose_level(int a)
{
  char* word;
  int option;
  while((a != 1) && (a != 2) && (a != 3))
  {
      printf("Invalid option\n");
      printf("What level would you like to play?");
      scanf("%d", &a);
      
      if ((a == 1) || (a == 2) || (a == 3))
        break;
  }
  
  if ((a == 1) || (option == 1))
      word = easy_word();
  
  else if ((a == 2) || (option == 2))
      word = med_word();
  
  else if ((a == 3) || (option == 3))
      word = hard_word();
      
  return word;
  
}      
