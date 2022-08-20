#include <stdio.h>
#include "find_min.h"

int main (void) {
  int my_array[9] = {875, 9, 15, 3, 1450, 78, 102, 785, 65}; 
  int min = find_min(my_array, 9);

  printf("The smallest number is: %d\n", min);

  return 0;
}
