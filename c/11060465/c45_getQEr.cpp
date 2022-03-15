#include <cmath>

void getQEr(double a, double b, double c, double *a1, double *a2, bool *solution)
{
	double r;

	r = b * b - 4 * a * c;

	if (r >= 0)
	{
		*a1 = (-b + sqrt(r)) / (2 * a);
		*a2 = (-b - sqrt(r)) / (2 * a);

		*solution = true;
	}
	else
	{
		*solution = false;
	}

	return;
}