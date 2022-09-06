#include <stdio.h>
#include <string.h>
#include <ctype.h>

int length(char s[]);
void flip_string(char *s);

int main(void) {
  char s[] = "MOURAD bougarne";

  flip_string(s);
  printf("%s\n", s);

  return 0;
}

int length(char s[]) {
  int i = 0;

  while (s[i] != '\0') {
    i++;
  }

  return i;
}

void flip_string(char *s) {
  for (int i = 0; i < length(s); i++) {
    if (islower(s[i])) {
      s[i] = toupper(s[i]);
    } else {
      s[i] = tolower(s[i]);
    }
  }
}
