#define X_SIZE 60
#define Y_SIZE 30

int matrix[X_SIZE][Y_SIZE]

void init_matrix(void){
  int x,y;
  for(x = 0;x<X_SZIE;x++){
    for(y=0;y<Y_SIZE;y++){
      matrix[x][y] = -1;
    }
  }
}
