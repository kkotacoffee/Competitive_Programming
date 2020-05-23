#include <stdio.h>

int main ( void )
{
   const double h = 0.0001;
   const double T = 100.0;
   const int N = ( int ) ( T / h );

   const double k = 1.0;
   double x = 1.0, v = 0.0;

   for ( int n = 0; n < N + 1; n++ ) {
     printf ( "%f %f %f\n", x, v, x * x + v * v);
     double k1_v = ( - x );
     v += h * k1_v;
     double k1_x = v;
     x += h * k1_x;
   }

   return 0;
}