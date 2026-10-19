/*Write a program to check whether a number is armstrong no. or not.*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, t, r;
    int c = 0;
    int s = 0;
    
    printf("enter a num : ");
    scanf("%d", &n);
    
    t = n; // Save the original number before we modify 'n'
    
    // First loop: Count how many digits the number has (stored in 'c')
    while (n != 0) {
        c = c + 1;
        n = n / 10;
    }
    
    n = t; // Reset 'n' back to the original number for the second loop
    
    // Second loop: Extract each digit, raise it to the power of 'c', and add to sum ('s')
    while (n != 0) {
        r = n % 10;
        s = s + pow(r, c);
        n = n / 10;
    }
    
    // If the calculated sum matches the original number, it is an Armstrong number
    if (t == s) {
        printf("Armstrong\n");
    } else {
        printf("Not armstrong\n");
    }
    
    return 0;
}