#include <stdio.h>

int main (void) {
  int my_array[] = {1010, 9, 10, 11, 4, 3, 1, 6, 7}; 
  int min = my_array[0];

  for (int i = 0; i < 8; i++) 
  {
    if (min > my_array[i + 1]) {
      min = my_array[i + 1];
    }
  }

  printf("Small number is: %d\n", min);

  return 0;
}
