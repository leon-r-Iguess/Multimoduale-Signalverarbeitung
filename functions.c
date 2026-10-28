#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//error codes
const int VALUE_ERROR = 1;
const int OUT_OF_BOUNDS = 2;

//Interpolationsfunktion
double interpolate_linear(double dX, double dX1, double dX2, double dY1, double dY2){

    if (dX1 >= dX2) {
        fprintf(stderr, "VALUE_ERROR: x1 (%f) muss kleiner als x2 (%f) sein\n", dX1, dX2);
        exit(VALUE_ERROR);
    }

    if (dX <= dX1 || dX >= dX2) {
        fprintf(stderr, "OUT_OF_BOUNDS: x = %f liegt nicht in [%f, %f]\n", dX, dX1, dX2);
        exit(OUT_OF_BOUNDS);
    }

    double gradient = (dY2 - dY1) / (dX2 - dX1);
    double get_b = -(gradient * dX1) + dY1;

    return gradient * dX + get_b;
}

