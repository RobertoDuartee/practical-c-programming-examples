#define MAX 10 //size of the array

void init_array_1(int data[]);
void init_array_2(int *data_ptr);

int main(){
  int array[MAX];
  
  //One way of initializing the array
  init_array_1(array);

  //another way of initializgin the array
  init_array_1(&array[0]);

  //works but the compiler generates a warning
  init_array_1(&array);

  //Similar to the first method
  init_array_2(array);

  return 0;
}


void init_array_1(int data[]){
  int i;
  for(i =0;i<MAX;i++){
    data[i] = 0;
  }
}

void init_array_2(int *data_ptr){
  int i;
  for(i = 0;i<MAX;i++){
    *(data_ptr+i) = 0;
  }
}


