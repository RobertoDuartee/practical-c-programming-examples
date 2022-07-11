/**********
 * 
 * 
 *      A random number is choosen between 1 and 100. The player is given
 *      a set of bounds and must choose a number between them.
 *      If the player choose the correct number, he win, otherwise
 *      the bunds are adjusted to reflect the players guess and the game continues.
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
int number_to_guess;
int low_limit;
int high_limit;
int guess_count;
int player_number;
char line[80];


int main(){
    number_to_guess = rand()%100+1;
    //printf("number to guess: %d",number_to_guess);

    low_limit = 0;
    high_limit = 100;
    guess_count = 0;

    while(1){
        printf("Bounds %d - %d\n",low_limit,high_limit);
        printf("Value[%d]?",guess_count);

        ++guess_count;

        fgets(line,sizeof(line),stdin);
        sscanf(line,"%d",&player_number);

        if(player_number == number_to_guess){
            break;
        }
        if(player_number < number_to_guess){
            low_limit = player_number;
        }
        else{
            high_limit = player_number;
        }
    }
    printf("Bingo\n");
    return(0);
}