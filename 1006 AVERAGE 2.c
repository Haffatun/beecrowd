#include <stdio.h>
 
int main() {
 
    double A, B, C, D;
    scanf ("%lf %lf %lf", &A, &B, &C);
    
    A = A * 2;
    B = B * 3;
    C = C * 5;
    
    D = (A + B + C)/10;
    printf ("MEDIA = %.1lf\n", D);
    return 0;
}
