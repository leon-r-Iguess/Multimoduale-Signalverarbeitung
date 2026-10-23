#include <stdio.h>
#include "functions.h"


int main(void){

    double x = 1.5;
    double x1 = 2;
    double x2 = 3;
    double y1 = 1;
    double y2 = 4;

    printf("%f\n", interpolate(x, x1, x2, y1, y2));

    return 0;
}
