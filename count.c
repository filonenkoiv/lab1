#include <math.h>
#include "count.h"

double f(double x) {
	return exp(-fabs(x)*sin(x));
}

double g(double x) {
	return exp(-fabs(x)*cos(x));
}
