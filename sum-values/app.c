#include <stdio.h>

int main (void) {
  int arr[] = {1, 2, 6, 9, 8, 7, 6, 5};
  int sum = 0;

  for (int i = 0; i <  8; i++) {
    sum += arr[i];
  }

  printf("The sum is equal to == %d\n", sum);

  return 0;
}