#include <cstdio>
#include <gsl/gsl_sf_bessel.h> // Where it is??

int
main (void)
{
  double x = 5.0;
  double y = gsl_sf_bessel_J0 (x);
  std::printf ("J0(%g) = %.18e\n", x, y);
  return 0;
}
