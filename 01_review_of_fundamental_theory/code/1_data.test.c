#include <stdio.h>


int main (void) {

    int a = 0x00112233;

    printf("a = 0x%08X\n", a);
    printf("10 - 5 = %d\n", 10-5);
    printf("10 +(~5 + 1) = %d\n", 10 + (~5 + 1));
    printf("p = %p, size = %zu \n", &a, sizeof(&a));

    return 0;
}