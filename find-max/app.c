#include <stdio.h>

int main (void) {
  int my_array[9] = {875, 9, 15, 3, 1450, 78, 102, 785, 65}; 
  int max = my_array[0];

  for (int i = 1 ; i < 9; i++) {
    if (max < my_array[i]) {
      max = my_array[i];
    }
  }

  printf("The largest number is: %d\n", max);

  return 0;
}
