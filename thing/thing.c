#include <stdio.h>

int main(){
    int thing_var; //defined a variable for thing
    int *thing_ptr; //define a pointer to thing

    thing_var = 2;  //assign a value to thing
    printf("Thing %d\n",thing_var); 

    thing_ptr = &thing_var; //make the pointer point to thing
    *thing_ptr = 3;  //thing_ptr points to thing_var so
                    //thing_var changes to 3

    printf("Thing %d\n",thing_var);

    //Another way of doing the printf
    printf("thing %d\n",*thing_ptr);

    return(0);
}