#include <cmath>

bool getQE(double a, double b, double c, double *a1, double *a2)
{
	double r;

	r = b * b - 4 * a * c;

	if (r >= 0)
	{
		*a1 = (-b + sqrt(r)) / (2 * a);
		*a2 = (-b - sqrt(r)) / (2 * a);

		return true;
	}
	else
	{
		return false;
	}
}