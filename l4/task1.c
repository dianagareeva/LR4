#include <math.h>

double f(const double *x, double *result)					
{
	*result = pow(cos(*x), 2) - pow(sin(*x), 2);
}