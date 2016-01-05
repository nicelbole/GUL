#define _USE_MATH_DEFINES
#include "windowing.h"
#include <math.h>

void custom(double in[], double out[], int n, WindowFunction winfunc)
{
	for (int i = 0; i < n; i++)
		out[i] = in[i] * winfunc(i, n);
}

void generalized_hamming(double in[], double out[], int n, double alpha, double beta)
{
	for (int i = 0; i < n; i++)
		out[i] = in[i] * (alpha - beta * cos(2*M_PI*i/(n-1)));
}

void hamming(double in[], double out[], int n)
{
	const double a = 0.54, b = 0.46;
	for (int i = 0; i < n; i++)
		out[i] = in[i] * (a - b * cos(2*M_PI*i/(n-1)));
}

void hann(double in[], double out[], int n)
{
	for (int i = 0; i < n; i++)
		out[i] = in[i] * (0.5 - 0.5 * (cos((2*M_PI)*i)/(n-1)));
}
