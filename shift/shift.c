#include <stdio.h>

const int ERROR = (1<<0);
const int FRAMING_ERROR = (1<<1);
const int PARITY_ERROR = (1<<2);
const int CARRIER_LOST = (1<<3);
const int CHANNEL_DOWN = (1<<4);


int main(){
    char flags = 0;
    printf("%b",flags);
    flags |= CHANNEL_DOWN;
    printf("%b",flags);
}