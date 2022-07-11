#include <stdio.h>
#include <stdint.h>

uint16_t HIGH_SPEED = (1<<2);

uint16_t DIRECT_CONNECT = (1<<3);

uint16_t flags = 0;

int main(){
    printf("hexadecimal: %X\n",flags);
    flags |= HIGH_SPEED;
    printf("hexadecimal high speed: %X\n",HIGH_SPEED);
    flags |= DIRECT_CONNECT;
    printf("hexadecimal direct connect: %X\n",DIRECT_CONNECT);
    printf("hexadecimal flags: %X\n",flags);


    if((flags & HIGH_SPEED) != 0){
        printf("High speed set\n");
    }
    if((flags & DIRECT_CONNECT) != 0){
        printf("Direct connect set\n");
    }
    return(0);
}

/*
00000100
00001100
00000100 distinto de cero

00001000
00001100
00001000 distinto de cero

*/

/*
Para resetearr el pin/bit
PARITY_ERROR    00000100
~PARITY_ERROR   11111011
flags           00000101

flags & ~PARITY_ERROR   00000001
flags &= ~PARITY_ERROR   00000001

*/
