#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = { 0 };

  printf("%d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  printf("size of numbers[]: %ld\n", sizeof(numbers));
  printf("%d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);


  char name[4] = { 'a' };
  printf("%c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
  printf("%s\n", name);

  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = 'A';

  printf("%c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
  printf("%s\n", name);

  char* name2 = "Zed";
  printf("%c, %c, %c, %c\n", name2[0], name2[1], name2[2], name2[3]);
  printf("%s\n", name2);


  return 0;
}
