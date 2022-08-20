#include "find_min.h"

int find_min (int array[], int length) {
  int min = array[0];

  for (int i = 0; i < length - 1; i++) {
    if (min > array[i + 1]) {
      min = array[i + 1];
    }
  }

  return min;
}
