#pragma once

void dct_ii(double[], double[], int);
void idct_ii(double[], double[], int);

inline void dct(double in[], double out[], int n)
{
	dct_ii(in, out, n);
}

inline void idct(double in[], double out[], int n)
{
	idct_ii(in, out, n);
}
