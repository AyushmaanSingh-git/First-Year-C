#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci, amount;
    
    printf("Enter Principal, Rate of Interest, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    // Simple Interest
    si = (principal * rate * time) / 100.0;
    
    // Compound Interest
    amount = principal * pow((1 + rate / 100.0), time);
    ci = amount - principal;
    
    printf("Simple Interest: %f\n", si);
    printf("Compound Interest: %f\n", ci);
    
    return 0;
}