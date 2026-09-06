#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Number 1: Square Root = %f, Cube = %f\n", sqrt(num1), pow(num1, 3));
    printf("Number 2: Square Root = %f, Cube = %f\n", sqrt(num2), pow(num2, 3));
    
    return 0;
}