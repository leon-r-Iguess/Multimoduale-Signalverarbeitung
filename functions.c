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

void scale_input(double *pdIn,int iLength; double dFactor, double dLowerLimit){

	for(int i = 0; i<iLength; i++){
		pdIn[i]=(pdIn[i]*dFactor)-dLowerLimit;
	};

}

void signal_rescale(MMSignal *pmmsIn, double dFactor, double dLowerLimit){
        scale_input(pmmsResult->pdValue, pmmsResult->iNumValues, dFactor,dLowerLimit);

};

MMSignal *signal_copy_rescale(const MMSignal *pmmsIn, double dFactor, double dLowerLimit){
	
};


double *create_sine_array(int iNumSamples, int iNumSamplesPerPeriod){

	double* sinArr = (double*) malloc(iNumSamples * sizeof(double));
	for( int i = 0; i < iNumSamples-1; i++){
		double sinDegree = 2.0 * dPi * i / iNumSamplesPerPeriod;
		
		double sinArr[i] = sin(sinDegree);
	}

	return sinArr;

};

