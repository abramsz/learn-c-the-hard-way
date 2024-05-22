#include <stdio.h>

struct A
{
    char a;
    char c;
    short b;
    
    int d;
};

int main(int argc, char const *argv[])
{

    struct A a;
    printf("A: %ld\n", sizeof(a));

    return 0;
}
