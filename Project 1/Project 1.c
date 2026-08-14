#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    
    // printf("Random number : %d\n", randomNumber);
    int no_of_guesses = 0;
    int guessed_number;
    do{
        printf("Guess the number :\n");
        scanf("%d",&guessed_number);
        if(guessed_number>randomNumber){
            printf("Enter a lower number!\n");
            if(guessed_number==randomNumber){
                break;
            }
        }
        else if(guessed_number<randomNumber){
            printf("Enter a higher number!\n");
        }
        else{
            printf("Congrats!\n");
        }
        no_of_guesses++;
        
    }while(guessed_number!=randomNumber);
    printf("You guessed_number the number in %d guesses!",no_of_guesses);

    return 0;
}
