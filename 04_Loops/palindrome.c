/*Write a program to check whether a number is palindrome or not.*/

#include <stdio.h>

int main() {
    int num, t, r, rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    t = num; // Store the original number to compare later
    
    while (num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    
    if (t == rev) {
        printf("%d is a palindrome number\n", t);
    } else {
        printf("%d is not a palindrome number\n", t);
    }
    
    return 0;
}