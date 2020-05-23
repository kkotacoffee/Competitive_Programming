#include <stdio.h>

#define __USE_BSD // for M_PI constant
#include <math.h>

#define A 0.0 // Ï•ª‹æŠÔ‚Ìæ“ª
#define B 1.0 // Ï•ª‹æŠÔ‚ÌÅŒã
#define N 4 // •ªŠ„”

double func ( double x ) { return 4.0 * sqrt ( 1 - x * x ); }

void trapezoidal ( double ( *f ) ( double ), const double a, const 
double b, const int n )
{
   double h = ( b - a ) / n;

   double r = 0.5 * ( ( *f ) ( a ) + ( *f ) ( b ) );
   for ( int i = 1; i < n; i++ ) {
     r += ( *f ) ( a + i * h );
   }
   r *= h;

   printf ( "n = %d, r = %1.10f, err = %1.10f\n", n, r, fabs ( r - M_PI ) );

   return;
}


int main ( void )
{
   double a = A, b = B;
   int n = N;

   trapezoidal ( func, a, b, n );

   return 0;
}

