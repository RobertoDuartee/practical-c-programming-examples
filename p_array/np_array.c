#include <stdio.h>


int array[3][2];

int main(){
    int x,y;

    array[0][0] = 0*10+0;
    array[0][1] = 0*10+0;
    array[1][0] = 0*10+0;
    array[1][1] = 0*10+0;
    array[2][0] = 0*10+0;
    array[2][1] = 0*10+0;

    printf("array[%d] ",0);
    printf("%i",array[0,0]);
    printf("%i",array[0,1]);
    printf("\n");

    printf("array[%d] ",1);
    printf("%i",array[1,0]);
    printf("%i",array[1,1]);
    printf("\n");

    printf("array[%d] ",2);
    printf("%i",array[2,0]);
    printf("%i",array[2,1]);
    printf("\n");
    return(0);

}


