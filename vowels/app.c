#include <stdio.h>
#include <string.h>
#include <ctype.h>

int string_length(char s[]);

int main(void) {
  char s[] = "It's a wonderful life!";
  int count = 0;
  int len = string_length(s);

  for (int i = 0; i < len; i++) {
    switch(toupper(s[i])) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        count++;
    }
  }

  printf("Vowel count = %d\n", count);

  return 0;
}

int string_length(char s[]) {
  int i = 0;

  while (s[i] != '\0') {
    i = i + 1;
  }

  return i;
}