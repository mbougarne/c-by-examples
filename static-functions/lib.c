#include <stdio.h>

static void print(double v) {
  printf("%0.3f\n", v);
}

void report_value(double v) {
  if (v >= 100) {
    printf("Out of range");
  } else {
    print(v);
  }
}