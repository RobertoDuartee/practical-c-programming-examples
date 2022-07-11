#include <stdio.h>
#include <string.h>

char *tmp_name(void){
  char name[30];
  static int sequence = 0;

  sequence++;

  strcpy(name,"tmp");

  //but int the sequence digit
  name[3] = sequence + '1';

  //end the string
  name[4] = '\0';
  return(name);
}


int main(){
  char *tmp_name(void);
  printf("Name: %s\n",tmp_name());
  return(0);
}
