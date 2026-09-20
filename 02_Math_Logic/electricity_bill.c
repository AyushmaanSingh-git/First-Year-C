#include <stdio.h>

int main() {
    float units, tariff_rate, total_bill;
    
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    
    printf("Enter the tariff rate per unit: ");
    scanf("%f", &tariff_rate);
    
    // Formula based on the provided assumptions
    total_bill = (units * tariff_rate) + 109.4 + 45.0;
    
    printf("Total Electricity Bill: %.2f\n", total_bill);
    
    return 0;
}