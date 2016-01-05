#pragma once

/**
 * Computes the sum of the factors of a given int.
 * The code is very similar to:
 * http://healpix.jpl.nasa.gov/html/libfftpack/bluestein_8c-source.html (GPL2 license)
 * Don't input 0! (it would cause an infinite loop)
 */
int sum_prime_fcrs(int);
