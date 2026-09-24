#include <stdio.h>

int main() {
    float salary, total_tax;
    float base_tax = 1000.0;
    
    printf("Enter the salary: ");
    scanf("%f", &salary);
    
    if (salary > 70000) {
        total_tax = base_tax + 700.0;
        printf("You will pay a total tax of Rs %.2f\n", total_tax);
    } else if (salary > 50000) {
        total_tax = base_tax;
        printf("You will pay a tax of Rs %.2f\n", total_tax);
    } else {
        printf("You are unemployed.\n");
    }
    
    return 0;
}