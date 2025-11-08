#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// guessing a number between 1 and 50 game 
int main()
{
const int MIN = 1;
const int MAX = 50;
int tries=0;
int guess;
int number;

//using the current time as a seed
srand(time(0));
// our programme will choose a number randomly
number = (rand() % MAX)  +  MIN;
// leting someone predict the number by helping him
do{
 printf("Choose a number :");
 scanf("%d", &guess);
   if(guess > number){
      printf("Too High !!\n");
   }
   else if(number > guess){
     printf("Too Low !!\n");
   }
   else{
    printf("The number is correct\n");
   }
  tries ++;
}while (number != guess);

printf("The correct number is : %d\n", number);
printf("The number of tries was : %d", tries);

return 0;
}