#include <stdio.h>

int main()  {
    float distance;
    float fuel;
    float mileage;

    printf("Enter the kilometers driven ");
    scanf("%f", &distance);

    printf("Enter the ammount of fuel comsumed in liters: ");
    scanf("%f" , &fuel);

    mileage = distance / fuel;

    printf("The Current Mileage is %.2f km/l\n", mileage);

    return 0;
} 