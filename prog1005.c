#include <stdio.h>

double media (double A, double B) 
{
   double media = (A * 3.5 + B * 7.5) / 11;
   return media;
}

main () 
{
    double A, B;
    scanf("%lf %lf", &A, &B);
    
    printf("MEDIA = %.5f\n", media (A,B));
}
