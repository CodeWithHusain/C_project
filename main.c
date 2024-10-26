#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    // initiolize random number generator
    srand(time(0));

    // generate random number between 1 to 100
    int random = (rand() % 100) + 1;

    // printf("random number: %d", random); 

    int guess ;
   
    int no_of_guesses = 0;
    
    do{
        printf("guess number ");
        scanf("%d",&guess);

        if(guess<random){
            printf("Higher number please!\n");
        }
        else if (guess>random){
            printf("Lower number please!\n");
        }
        else{
            printf("You guessed rigth number! that is %d, congrats\n",random);
        }

        no_of_guesses++;

        

    }while(guess!=random);
    printf("you guessed the number in %d guesses",no_of_guesses);
    
    return 0;
}