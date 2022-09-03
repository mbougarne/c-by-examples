#include <stdio.h>

int fibonacci(int n);

int main(void) {
  int term1 = 0, term2 = 1, length = 0, fib = 0;  

  do {
    printf("Enter sequence length: ");
    scanf("%d", &length);
    if(length < 3) {
      printf("The length must be >=3\n");
    }
  } while (length < 3);

  const int r = fibonacci(length);

  printf("%d\n", r);

  // printf("\nIterative solution\n");
  // printf("%d,%d,", term1, term2);

  // for (int i = 0; i < length; i++) {
  //   fib = term1 + term2;
  //   term1 = term2;
  //   term2 = fib;

  //   printf("%d", fib);

  //   if (i != length - 1) {
  //     printf(",");
  //   } else {
  //     printf("\n");
  //   }
  // }

  return 0;
}

int fibonacci(int n) {
  if (n < 2) return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}
