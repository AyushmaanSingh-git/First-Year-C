/*Write a program to convert temperature from 
Fahrenheit to Celsius or Celsius to Fahrenheit using a switch case.*/

#include <stdio.h>

int main() {
    int choice;
    float f, c;
    
    printf("Temperature Conversion Menu:\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter the Temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32.0) * (5.0 / 9.0);
            printf("Temperature in Celsius is: %f\n", c);
            break;
            
        case 2:
            printf("Enter the Temperature in Celsius: ");
            scanf("%f", &c);
            f = (c * 9.0 / 5.0) + 32.0;
            printf("Temperature in Fahrenheit is: %f\n", f);
            break;
            
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }
    
    return 0;
}