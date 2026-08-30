#include<stdio.h>
//perimeter of quadrilateral
int main() {
    float a;
    printf("Enter lenght of side a in cm:");
    scanf("%f", &a);

    float b ;
    printf("Enter length of side b in cm :");
    scanf("%f", &b);

    printf("Perimeter of quad : %f cm ", 2 * (a + b));
    return 0;

}
