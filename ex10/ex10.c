#include <stdio.h>

typedef char* str;

int main(int argc, char *argv[])
{

  for (int i = 0; i < argc; i++) {
    printf("%d: %s\n", i , argv[i]);
  }

  str states[] = {
    "California", "Oregon", "Washington", "Texas"
  };

  for (int i = 0; i < 4; i++) {
    printf("%d: %s\n", i, states[i]);
  }

  return 0;
}
