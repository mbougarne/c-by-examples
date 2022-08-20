#include "find_max.h"

int find_max (int array[], int length) {
  int max = array[0];

  for (int i = 1; i < length; i++) {
    if (max < array[i + 1]) {
      max = array[i + 1];
    }
  }

  return max;
}
