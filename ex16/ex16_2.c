#include <stdio.h>
#include <string.h>

struct student{
  char name[100];
  int age;
};

void show(struct student st){
  printf("%s, %d\n", st.name, st.age);
}

void show_prt(struct student* st){
  printf("%s, %d\n", st->name, st->age);
}

int main(int argc, char *argv[])
{
  struct student st1;
  st1.age = 20;
  strcpy(st1.name, "bob1");

  show(st1);

  struct student st2 = {"bob2", 40};
  show(st2);

  show_prt(&st1);

  free(&st1);

  return 0;
}

