#include <stdio.h>
#include <stdint.h>

int number = 0;
char answer;

int main(){
    while(1){
        printf("Enter number: ");
        scanf("%i",&number);

        if(number%2){
            printf("The number %i is odd\n",number);
        }
        else{
            printf("The number %i is even\n",number);
        }
        printf("Enter another number (y/n): ");
        scanf(" %c",&answer);

        if(answer != 'y'){
            break;
        }
    }
    return(0);
}