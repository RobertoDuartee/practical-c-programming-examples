

#include <stdio.h>

float data[5];
float total;
float average;
int len;
int sum = 0;
int main(){
  data[0] = 34.0;
  data[1] = 27.0;
  data[2] = 45.0;
  data[3] = 82.0;
  data[4] = 22.0;
  len = sizeof(data)/sizeof(data[0]);
  for(int i = 0;i<len;i++){
  sum = sum + data[i];
  }
  average = sum/5;
  printf("Total %i Average %f\n",sum,average);
  return(0);
}
