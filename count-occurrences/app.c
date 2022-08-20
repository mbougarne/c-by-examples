#include <stdio.h>

int count_occurrences(int array[], int length, int value);

int main (void) {
  int my_array[10] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};
  int count = count_occurrences(my_array, 10, 5);

  printf("[%d] has occurs %d times in the array\n", 5, count);

  return 0;
}

int count_occurrences(int array[], int length, int value) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] == value) {
      count += 1;
    }
  }

  return count;
}
