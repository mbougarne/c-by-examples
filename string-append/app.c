#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concat(char *first, char *second);
int string_length(char s[]);

int main (void) {
  char s1[] = "Mourad";
  char s2[] = " Bougarne";

  char *s3 = concat(s1, s2); 

  printf("%s\n", s3);

  free(s3);
  return 0;
}

char* concat(char *first, char *second) {
  int second_len = string_length(second);
  int first_len = string_length(first);
  int size = (first_len + second_len) + 1;
  char *str = calloc(size, sizeof(char));

  for (int i = 0; i < first_len; i++) {
    str[i] = first[i];
  }

  for (int i = 0; i < second_len; i++) {
    str[first_len + i] = second[i];
  }

  str[size - 1] = '\0';

  return str;
}

int string_length(char s[]) {
  int count = 0;

  while(s[count] != '\0') {
    count = count + 1;
  }

  return count;
}