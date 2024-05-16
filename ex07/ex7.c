#include <stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;
  printf("bugs: %d at rate %f\n",bugs, bug_rate);

  long universe_of_defects = 99999999999999999L * 1024L * 1024L * 1024L;
  printf("universe: %ld\n",universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("expected_bugs: %f\n",expected_bugs);

  double parts_of_universe = expected_bugs / universe_of_defects;
  printf("portion: %e\n", parts_of_universe);

  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("care_percentage: %d%%\n",care_percentage);


  return 0;
}
