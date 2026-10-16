//Write a program to input a 5-digit number and find the middle digit of the number.
// If the middle digit is odd, find the square root of the full number; if it is even, find the square of the full number.


#include <stdio.h>
#include <math.h>

int main() {
    int num, mid;
    double result;
    
    printf("Enter a 5 digit num: ");
    scanf("%d", &num);
    
    // Check if the number is exactly 5 digits
    if (num >= 10000 && num <= 99999) {
        mid = (num / 100) % 10;
        
        if (mid % 2 == 0) {
            result = pow(num, 2);
            printf("Mid digit is even and its square is: %.0lf\n", result);
        } else {
            result = sqrt(num);
            printf("Mid digit is odd, square root is: %.2lf\n", result);
        }
    } else {
        printf("Invalid input! Please enter a 5-digit number.\n");
    }
    
    return 0;
}