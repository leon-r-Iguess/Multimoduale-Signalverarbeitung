#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//error codes
const int VALUE_ERROR = 1;
const int OUT_OF_BOUNDS = 2;

//Interpolationsfunktion
double interpolate(double x, double x1, double x2, double y1, double y2){

    if (x1 >= x2) {
        fprintf(stderr, "VALUE_ERROR: x1 (%f) muss kleiner als x2 (%f) sein\n", x1, x2);
        exit(VALUE_ERROR);
    }

    if (x < x1 || x > x2) {
        fprintf(stderr, "OUT_OF_BOUNDS: x = %f liegt nicht in [%f, %f]\n", x, x1, x2);
        exit(OUT_OF_BOUNDS);
    }

    double gradient = (y2 - y1) / (x2 - x1);
    double get_b = -(gradient * x1) + y1;

    return gradient * x + get_b;
}

double rescaling(){};