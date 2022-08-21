#include <stdio.h>

void reverse(int array[], int length);

int main (void) {
  int my_array[5] = {7, 8, 15, 32, 4};
  int reversed_array[5];

  // for (int i = 4; i > -1; i--) {
  //   my_array[(4 - i)] = my_array[i];
  // }

  reverse(my_array, 5);

  for (int i = 0; i < 5; i++) {
    printf("reversed_array[%d]: %d\n", i, my_array[i]);
  }

  return 0;
}

void reverse(int array[], int length) {
  int temp = 0;
  for (int i = 0; i < (length / 2); i++) {
    temp = array[i];
    array[i] = array[length - i - 1];
    array[length - i - 1] = temp;
  }
}
