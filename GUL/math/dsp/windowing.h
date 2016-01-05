#pragma once

typedef double(*WindowFunction)(int,int) ;

void custom(double[], double[], int, WindowFunction);

/**
 * Computes the given signal after applying a generalized Hamming window.
 * alpha and beta are the parameters $\alpha$ and $\beta$ appearing in
 * $\alpha - \beta cos(\frac{2\pi i}{n-1})$
 */
void generalized_hamming(double[], double[], int, double, double);

/**
 * Computes the given signal after applying Hamming's window.
 * If you want to overwrite in, just call hamming(in, in, n)
 */
void hamming(double[], double[], int);

/**
 *
 */
void hann(double[], double[], int);

/**
 * An alias for hann.
 */
inline void hanning(double in[], double out[], int n)
{
	hann(in, out, n);
}
