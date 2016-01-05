#pragma once
#include <math.h>

/**
 * Formula from O'Shaughnessy (1987)
 */
inline double hzToMel(double mel)
{
	return 700 * (log(mel/1127) - 1);
}

/**
 * Formula from O'Shaughnessy (1987)
 */
inline double melToHz(double hz)
{
	return 1127 * (1 + exp(hz/700));
}
