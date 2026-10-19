/*Write a program to check whether a number is perfect square or not.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, t;
    
    printf("Enter a num: ");
    scanf("%d", &num);
    
    // sqrt() finds the square root. Storing it in an 'int' (t) drops any decimal points.
    t = sqrt(num);
    
    // If multiplying the integer part by itself gives the original number, it's a perfect square.
    if (t * t == num) {
        printf("%d is a perfect square\n", num);
    } else {
        printf("%d is not a perfect\n", num);
    }
    
    return 0;
}