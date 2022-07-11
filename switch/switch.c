#include <stdio.h>

int number;
char type;
char line[80];

int main(void){
    while(1){
        printf("Enter conversion and number: ");
        fgets(line,sizeof(line),stdin);
        sscanf(line,"%c",&type);

        if((type == 'q')||(type == 'Q')){
            break;
        }
        switch(type){
            case 'o':
            case 'O':
                sscanf(line,"%c %o",&type,&number);
                break;

            case 'x':
            case 'X':
                sscanf(line,"%c %x",&type,&number);
                break;

            case 'd':
            case 'D':
                sscanf(line,"%c %d",&type,&number);
                break;

            case '?':
            case 'h':
                printf("Letter conversion\n");
                printf("    o   Octal\n");
                printf("    x   Hexadecimal\n");
                printf("    d   Decimal\n");
                printf("    q   Quit\n");

                continue;

            default:
                printf("Type ? for help\n");
                continue;

        }
        printf("Result is %d\n",number);
    }
    return(0);
}