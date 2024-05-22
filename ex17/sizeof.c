#include <stdio.h>

struct Region
{
    int i4;
    float f4_1;
    float f4_2;
    char c1;
    char c1_2;
    char c1_3;
    char c1_4;
    char c1_5;
    double d8;
};

struct Address
{
    int a;
    int b;
    struct Region region;
};

int main(int argc, char const *argv[])
{

    char c1 = 'a';
    int a1 = 10;
    float f1 = 10.0f;
    double d1 = 20.0;

    char *c1_prt = &c1;
    int *a1_prt = &a1;
    float *f1_prt = &f1;
    double *d1_prt = &d1;

    char carr[] = "hello";
    int iarr[] = {1, 2, 3};
    float farr[] = {1.0f, 2.0f, 3.0f};
    double darr[] = {10.0, 20.0, 30.0};

    struct Region region;
    struct Address addr;

    printf("int: %ld\n",sizeof(int));
    printf("short: %ld\n",sizeof(short));
    printf("double: %ld\n",sizeof(double));

    printf("c1: %ld\n", sizeof(c1));
    printf("a1: %ld\n", sizeof(a1));
    printf("f1: %ld\n", sizeof(f1));
    printf("d1: %ld\n", sizeof(d1));

    printf("c1_prt: %ld\n", sizeof(c1_prt));
    printf("a1_prt: %ld\n", sizeof(a1_prt));
    printf("f1_prt: %ld\n", sizeof(f1_prt));
    printf("d1_prt: %ld\n", sizeof(d1_prt));

    printf("carr: %ld\n", sizeof(carr));
    printf("iarr: %ld\n", sizeof(iarr));
    printf("farr: %ld\n", sizeof(farr));
    printf("darr: %ld\n", sizeof(darr));

    printf("-----------------\n");

    printf("Region: %ld\n", sizeof(region));
    printf("Address: %ld\n", sizeof(addr));

    return 0;
}
