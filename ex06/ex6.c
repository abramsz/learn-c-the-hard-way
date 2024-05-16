#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double supper_power = 5678.4532;
  char initial = 'A';
  char firstName[] = "Zed";
  char lastName[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You are %f levels of power\n", power);
  printf("You are %f awesome super power\n",supper_power);
  printf("initial: %c\n",initial);
  printf("firstName: %s\n",firstName);
  printf("Full Name: %c %s.%s\n",firstName,initial,lastName);

  return 0;
}
