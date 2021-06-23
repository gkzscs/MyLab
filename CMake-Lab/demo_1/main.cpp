#include <stdio.h>
#include <stdlib.h>
#include "config.h"

#ifdef USE_MATH
	#include "math_func.h"
#else
	#include <math.h>
#endif


double power(double base, int exponent);


int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Usage: %s base exponent \n", argv[0]);
		return 1;
	}

	double base = atof(argv[1]);
	int exponent = atoi(argv[2]);

#ifdef USE_MATH
	printf("Use math_lib\n");
	double result = power(base, exponent);
#else
	printf("Use standard lib\n");
	double result = pow(base, exponent);
#endif

	printf("%g ^ %d is %g\n", base, exponent, result);
	return 0;
}
