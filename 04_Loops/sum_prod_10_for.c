/*Write a program to input the first 10 numbers, 
find the sum of even numbers, 
and the multiplication of odd numbers using a for loop.*/

#include <stdio.h>

int main() {
    int i, num, sum_even = 0, prod_odd = 1;
    
    printf("Enter 10 numbers:\n");
    
    for (i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            sum_even = sum_even + num;
        } else {
            prod_odd = prod_odd * num;
        }
    }
    
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Multiplication of odd numbers: %d\n", prod_odd);
    
    return 0;
}