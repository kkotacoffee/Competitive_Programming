#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ( void )
{
   const double h = 0.0001;
   const double a = 1.0;
   const double T = 1.0;
   const int N = ( int ) ( T / h );

   double x = 1.0;

   for ( int n = 0; n <= N + 1; n++ ) {
     double t = h * n;
     printf ( "%f %f %f\n", t, x, 1e10*fabs(x-exp(1.0)));
     double k1 = h * a * x;
     double k2 = h * a * ( x + k1 / 2 );
     double k3 = h * a * ( x + k2 / 2 );
     double k4 = h * a * ( x + k3 );
     x += ( k1 + 2 * k2 + 2 * k3 + k4 ) / 6.0;
   }
   
   return 0;
}
