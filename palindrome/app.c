#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool is_palindrome(char word[]);
bool is_palindrome_with_middle(char word[]);

int main (void) {
  char word1[] = "abccba";
  char word2[] = "not a palindrome";

  bool isPalindrome = is_palindrome_with_middle(word1);
  bool isPalindrome2 = is_palindrome_with_middle(word2);

  printf("word1 = %s\n", isPalindrome ? "true": "false");
  printf("word2 = %s\n", isPalindrome2 ? "true": "false");

  return 0;
}

bool is_palindrome(char word[]) {
  int len = strlen(word);
  // char reversed[len];
  int j = 0;

  for (int i = len - 1; i > -1; i--) {
    // reversed[j] = word[i];
    if(word[j] != word[i]) {
      return false;
    }
    j++;
  }

  return true;

  // return (strcmp(reversed, word) == 0) ? 1 : 0;
}

bool is_palindrome_with_middle(char word[]) {
  int len = strlen(word);
  int middle = floor(len / 2);

  for (int i = 0; i < middle; i++) {
    if(word[i] != word[len - i - 1]) {
      return false;
    }
  }

  return true;
}