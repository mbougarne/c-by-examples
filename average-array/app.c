#include <stdio.h>

int array_length(double arr[]);
double array_sum(double arr[]);

int main (void) {
  double arr[] = {5.2, 9.3, 6.5, 4.1, 7.8, -0};
  int len = array_length(arr);
  double sum = array_sum(arr);

  double average = (sum / len);

  // printf("The len is %d\n", len);
  // printf("The average is %.2lf\n", average);

  max(sizeof(int), sizeof(double));

  return 0;
}

int array_length(double arr[]) {
  int l = 0;
  int i = 0;
  
  while (arr[i] != -0) {
    l += 1;
    i++;
  }

  return l;
}

double array_sum(double arr[]) {
  int len = array_length(arr);
  double sum = 0;
  for (int i = 0; i < len; i++) {
    sum += arr[i];
  }

  return sum;
}
