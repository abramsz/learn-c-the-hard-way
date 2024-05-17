#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person* person_create(char *name, int age, int height, int weight){
  struct Person* who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void person_destroy(struct Person* who){
  assert(who != NULL);
  free(who->name);
  free(who);
}

void person_show(struct Person* who){
  printf("%s, %d, %d, %d\n", who->name, who->age, who->height, who->weight);
}


int main(int argc, char *argv[])
{
  struct Person* joe = person_create("Jeo Alex", 32, 64, 140);
  struct Person* frank = person_create("Frank Blank", 20, 72, 180);

  printf("%p\n", joe);
  printf("%p\n", frank);
  
  person_show(joe);
  joe->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  person_show(joe);

  person_destroy(joe);
  person_destroy(frank);


  return 0;
}
