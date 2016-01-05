#define _USE_MATH_DEFINES
#include "dct.h"
#include "math.h"

/**
 * This is DCT-II in the terminology used on Wikipedia:
 * https://en.wikipedia.org/wiki/Discrete_cosine_transform#DCT-II
 */
void dct_ii(double in[], double out[], int n)
{
	for (int i = 0; i < n; i++)
	{
		double res = 0;
		for(int j = 0; j < n; j++)
		{
			res += in[j] * cos(M_PI*(j+0.5)*i/n);
		}
		out[i] = res;
	}
}

void idct_ii(double in[], double out[], int n)
{

}
