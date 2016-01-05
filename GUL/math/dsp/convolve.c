#include "convolve.h"
#include "dft.h"
#include <complex.h>
#include <stdlib.h>

void convolve_fft_real(double inx[], double iny[], double out[], int n)
{
	double complex* tr = malloc(2 * n * sizeof(double complex));
	double complex* trx = tr, *try = tr + n * sizeof(double complex);
	fft_r(inx, trx, n);
	fft_r(iny, try, n);
	for (int i=0; i<n; i++)
	{
		trx[i] = trx[i] * conj(try[i]);
	}
	ifft_r(trx, out, n);
	free(tr);
}
