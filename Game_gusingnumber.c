// Guess number Game program 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int number, guess, nguess = 1;
  srand(time(0));
  number = rand() % 100 + 1;
  do{
    printf("Guess the number between 1 to 100 \n");
    scanf("%d", &guess);
    if (guess == number)
    {
      printf("You guess correct number   \n");
    }
    else if (guess > number)
    {
      printf("Lower number Please !\n");
    }
    else if (guess < number)
    {
      printf("Higher number Please! \n");
    }
    nguess++;
    } 
  while (guess != number);
  printf("you guseed it in %d attenpt \n", nguess);
  return 0;
}