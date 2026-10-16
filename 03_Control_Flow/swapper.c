//Write a program to input a 5-digit number and swap the first and last digit of the number.

#include <stdio.h>

int main() {
    int num, l, f, mid, final;
    
    printf("Enter a 5 digit no.: ");
    scanf("%d", &num);
    
    // Check if the number is exactly 5 digits
    if (num >= 10000 && num <= 99999) {
        l = num % 10;
        f = num / 10000;
        mid = (num % 10000) / 10;
        
        final = (l * 10000) + (mid * 10) + f;
        
        printf("Swapped number: %d\n", final);
    } else {
        printf("Invalid input! Please enter a 5-digit number.\n");
    }
    
    return 0;
}