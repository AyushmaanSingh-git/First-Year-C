//Write a program to find roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate the discriminant
    d = (b * b) - (4 * a * c);
    
    if (d >= 0) {
        printf("Roots are real numbers.....\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        // Using %.2f to match the 0.00 and -0.25 formatting in your sample
        printf("Roots are: %.2f and %.2f\n", r1, r2);
    } else {
        printf("Roots are imaginary numbers.....\n");
    }
    
    return 0;
}