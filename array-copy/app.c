#include <stdio.h>
#include <stdlib.h>

int *copy_array(int *array, int length);

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};
  int *a_copy = copy_array(a, 5); 

  for (int i = 0; i < 5; i++) {
    printf("a_copy[%d] = %d\n", i, a_copy[i]);
  }

  free(a_copy);
  return 0;
}

int *copy_array(int *array, int length) {
  int *copy = malloc(length * sizeof(int));
  
  for(int i = 0; i < length; i++) {
    copy[i] = array[i];
  }

  return copy;
}
