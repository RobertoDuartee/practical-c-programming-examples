#include <stdio.h>
#include <stdint.h>

int main(){
  struct area_struct{
    int a;
    int b;
  };
  typedef struct area_struct area;
  area square_area = {2,9};
  int area_result;
  area_result = square_area.a * square_area.b;
  printf("The area of the square is: %i\n",area_result);
}
