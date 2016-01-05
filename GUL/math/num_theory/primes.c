#include "primes.h"
#include <math.h>

int sum_prime_fcrs(int n)
{
	int sum = 0;
	// First, handle all 2 factor
	while ((n&1) == 0)
	{
		sum += 2;
		n = n>>1;
	}

	// Now, we handle the odd factors
	int bound = sqrt(n + 0.01);
	int tmp;
	for (int x=3; x <= bound; x+=2)
	{
		while ((n/x)*x == n)
		{
			sum += x;
			n = tmp;
			bound = sqrt(n + 0.01);
		}
	}

	/// Don't forget this possibility (which happens when the largest factor
	//  of n is not repeated).
	if (n != 1)
		sum += n;

	return sum;
}
