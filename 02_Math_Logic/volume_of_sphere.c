#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;
    const float PI = 3.14159;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    
    printf("Volume of the sphere: %f\n", volume);
    return 0;
}