#include <stdio.h>
#include "functions.h"


int main(void){

    double x = 2.0005;
    double x1 = 2;
    double x2 = 3;
    double y1 = 1;
    double y2 = 4;

    printf("%f\n", interpolate_linear(x, x1, x2, y1, y2));

    return 0;
}
