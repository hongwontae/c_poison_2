#include <stdio.h>
#include <float.h>


int main (void) {

    float fdata = 123.125F;

    printf("%f, %E\n", fdata, fdata);

    printf("%E ~ %E\n", FLT_MIN, FLT_MAX);
    printf("%E ~ %E\n", DBL_MIN, DBL_MAX);



    return 0;

}