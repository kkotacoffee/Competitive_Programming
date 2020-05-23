#include <stdio.h>

#define __USE_BSD // for M_PI constant
#include <math.h>

#define A 0.0 // Ï•ª‹æŠÔ‚Ìæ“ª
#define B 1.0 // Ï•ª‹æŠÔ‚ÌÅŒã
#define N 128 // •ªŠ„”

double func ( double x ) { return 4.0 * 2.0 * x * x * sqrt ( 2 - x * x ); }

void simpson ( double ( *f ) ( double ), const double a, const 
double b, const int n )
{
   double h = ( b - a ) / n;

   double r = 0;
   for ( int i = 0; i+2 <= n; i += 2 ) {
     r += ( *f ) ( a + i * h ) + 4*( *f ) ( a + (i + 1) * h ) + ( *f ) ( a + (i + 2) * h );
   }
   r *= h;
   r /= 3.0;

   printf ( "n = %d, r = %1.10f, err = %1.10f\n", n, r, fabs ( r - M_PI ) );

   return;
}


int main ( void )
{
   double a = A, b = B;
   int n = N;

   simpson ( func, a, b, n );

   return 0;
}

