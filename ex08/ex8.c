#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed";
  char fullName[] = { 'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0' };
  
  printf("size of int: %ld\n", sizeof(int));
  printf("size of areas (int[]): %ld\n", sizeof(areas));
  printf("number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("%d, %d\n", areas[0], areas[1]);

  printf("size of char: %ld\n", sizeof(char));
  printf("size of char[]: %ld\n",sizeof(name));
  printf("number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("size of fullName: %ld\n", sizeof(fullName));
  printf("number of chars: %ld\n", sizeof(fullName) / sizeof(char));
  printf("%s, %s\n", name, fullName);

  // areas[10] = 100;

  return 0;
}
