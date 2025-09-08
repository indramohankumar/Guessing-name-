#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int random ,guess;
    int numberofguesses=0;
    srand(time(0));//seeding the random number generator
    printf("welcome to the guessing game\n");
    random = rand()%100 + 1;
    do{
        printf("enter your guess between 1 to 100\n");
        scanf("%d",&guess);
        numberofguesses++;
        if (guess>random){
            printf("lower number please\n");
        }
        else if (guess<random){
            printf("higher number please\n");
        }
        else {
            printf("you guessed it in %d attempts\n",numberofguesses);
        }
    } while(guess!=random);
    return 0;
}
