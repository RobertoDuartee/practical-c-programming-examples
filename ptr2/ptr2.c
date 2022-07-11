//Counts the number of elements that are nonzero and stops when a zero is found. No limit check is 
//provided, sot here must be at least one zero in the array


#include <stdio.h>

int i = 0; 
int array[] = {4,5,8,9,8,1,0,1,9,3};


int main(){
  while(array[i]!=0){
    i++;
  }
  printf("Number of elements before zero %d\n",i);
  return 0;
}
