#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void die(const char *message)
{
  if (errno)
  {
    perror(message);
  }
  else
  {
    printf("Err: %s\n", message);
  }
}

typedef int (*cmp_cb)(int a, int b);

int *bubble_sort(int *numbers, int count, cmp_cb fn)
{
  int temp = 0;
  int *target = malloc(count * sizeof(int));

  if (!target)
  {
    die("Memory error.");
  }

  memcpy(target, numbers, count * sizeof(int));

  for (size_t i = 0; i < count; i++)
  {
    for (size_t j = 0; j < count - 1; j++)
    {
      if (fn(target[j], target[j + 1]) > 0)
      {
        temp = target[j + 1];
        target[j + 1] = target[j];
        target[j] = temp;
      }
    }
  }
  return target;
}

int asc_order(int a, int b)
{
  return a - b;
}

int desc_order(int a, int b)
{
  return b - a;
}

int strange_order(int a, int b)
{
  if (a == 0 || b == 0)
  {
    return 0;
  }
  else
  {
    return a % b;
  }
}

void test_sorting(int *numbers, int count, cmp_cb fn)
{
  int *sorted = bubble_sort(numbers, count, fn);

  if (!sorted)
    die("Failed to sort as requested.");

  for (int i = 0; i < count; i++)
  {
    printf("%d ", sorted[i]);
  }
  printf("\n");

  free(sorted);

  unsigned char *data = (unsigned char *)fn;

  for (int i = 0; i < 25; i++)
  {
    printf("%02x ", data[i]);

    if ((i + 1) % 4 == 0)
    {
      printf(" ");
    }

    if ((i + 1) % 8 == 0)
    {
      printf("\n");
    }
  }

  printf("\n");
}

int main(int argc, char *argv[])
{

  if (argc < 2)
    die("USAGE: ex18 4 3 1 5 6");

  int count = argc - 1;
  int i = 0;
  char **inputs = argv + 1;

  int *numbers = malloc(count * sizeof(int));
  if (!numbers)
    die("Memory error.");

  for (i = 0; i < count; i++)
  {
    numbers[i] = atoi(inputs[i]);
  }

  test_sorting(numbers, count, asc_order);
  test_sorting(numbers, count, desc_order);
  test_sorting(numbers, count, strange_order);

  free(numbers);

  return 0;
}
