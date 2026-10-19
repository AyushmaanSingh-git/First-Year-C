/*Write a program to input a limit 'n', and find the sum of all even numbers and
 the product (multiplication) of all odd numbers from 1 to 'n' using a for loop.*/

#include <stdio.h>

int main() {
    // 's' holds the sum, so it must start at 0.
    // 'p' holds the product, so it must start at 1 (multiplying by 0 would ruin it).
    int i, n, s = 0, p = 1;
    
    printf("Enter the limit: ");
    scanf("%d", &n);
    
    // The loop starts at 1 and runs exactly 'n' times
    for(i = 1; i <= n; i++) {
        
        // The modulo operator (%) checks the remainder. 
        // If dividing 'i' by 2 leaves a remainder of 0, the number is even.
        if(i % 2 == 0) {
            s = s + i; // Add the even number to our running sum
        } 
        // If it's not even, it must be odd. No need for a second if-statement.
        else {
            p = p * i; // Multiply the odd number into our running product
        }
    }
    
    // Print the final calculated values after the loop finishes
    printf("Sum of even numbers = %d\n", s);
    printf("Multiplication of odd numbers = %d\n", p);
    
    return 0;
}