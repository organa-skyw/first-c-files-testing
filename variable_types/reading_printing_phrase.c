#include <stdio.h>

int main() {
  char phrase[101];
  printf("Type a Phrase:");
  fflush(stdin);
  fgets(phrase, 101, stdin);

  printf("\n Phrase Entered: %s", phrase);
  return 0;
}
