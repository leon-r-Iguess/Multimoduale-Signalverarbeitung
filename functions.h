


#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define BLK_SIZE_512



typedef struct {
		double *pdValue;
		int iNumValues;
		double dTimeinterval;
	} MMSignal;

double interpolate_linear(double dX, double dX1, double dX2, double dY1, double dY2);
// warum das dX da steht ist ungarische notation und d.h. dX: d... -> double ; ...X -> variablenname

void scale_input(double *pdIn,int iLength; double dFactor, double dLowerLimit);
/*********************
* Function - signal rescale in place
*
* Description:	Rescale all values in a given signal 
*		according to a given new lower limit and scaling factor
*
* Input : 	MMSignal pmmsIn
*		double dFactor
*		double dLowerLimit
*
* Return:	void nothing
* Output:	the values in the input signal are changed - in place rescaling
*
********************/
void signal_rescale(MMSignal *pMMSIn, double dFactor, double dLowerLimit){
	scale_input(pmmsResult->pdValue, pmmsResult->iNumValues, dFactor,dLowerLimit); 

}; //pMMS ist pointer auf MMSignal 


MMSignal *signal_copy_rescale(const MMSignal *pmmsIn, double dFactor, double dLowerLimit);
MMSignal *signal_init(int iLength, double dInitValue);
//soll iLength initialiseren, dInitValue initialisieren, Wert mit einer schleife belegen

MMSignal *signal_copy_create(MMSignal *pMMSIn);

// war hier nicht da 
double *create_sine_array(int iNumSamples, int iNumSamplesPerPeriod);

MMSignal *signal_create_sine_curve(int iNumSamples, int iNumSamplesPerPeriod);

void signal_write_file(MMSignal *pmmsIn, char* Filename);

double *read_double_array(char* pcFilename, int piNumValues);
MMSignal *signal_create_from_file(char* pcFilename);


#endif
