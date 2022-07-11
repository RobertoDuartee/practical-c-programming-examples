#include <stdio.h>
int array[] = {1,2,3,4,5,0,1,2,3,2};
int *array_ptr;

int main(){
  array_ptr = array;
  while((*array_ptr)!= 0){
    ++array_ptr;
  }
  printf("Number of elements before zero %ld\n",array_ptr - array);
  return 0;
}
