#pragma once

void convolve(double[], double[], double[], int);
void convolve_fft_real(double[], double[], double[], int);
void convolve_naive(double[], double[], double[], int);

inline void convolve(double inx[], double iny[], double out[], int n)
{
	convolve_fft_real(inx, iny, out, n);
}
