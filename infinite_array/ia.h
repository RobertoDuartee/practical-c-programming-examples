//Definitions for the infinite array (ia) package
//An infinite array is an array whose size can grow
// as needed.

#define BLOCK_SIZE

struct infinite_array{
  float data[BLOCK_SIZE];
  struct infinite_array *next;
};

#define ia_init(array_ptr) {(array_ptr)->next = NULL;}

extern int ia_get(struct infinite_array *array_ptr,int index);

extern void ia_store(struct infinite_array * array_ptr,int index,int store_data);
