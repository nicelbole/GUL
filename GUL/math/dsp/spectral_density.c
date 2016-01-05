/**
 * \file In this file functions for spectral density estimation are implemented.
 */

#include "spectral_density.h"
#include "../complex.h"
#include "dft.h"
#include <stdlib.h>

/**
 * \fn bartlett
 * Implements the Bartlett's method for estimating spectral density.
 */
double complex* bartlett(double vals[], int n)
{
	return 0;
}

/**
 * \fn periodogram
 * Implements the periodogram function: $$
 */
double* periodogram(double vals[], int n)
{
	double complex* trs = NULL;
	fft_r(vals, trs, n);
	double* res = malloc(n*sizeof(double));
	for (int i = 0; i < n; i++)
		res[i] = (trs[i] * conjl(trs[i])) / n;
	free(trs);
	
	return res;
}
