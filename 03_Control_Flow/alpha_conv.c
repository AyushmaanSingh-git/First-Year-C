#include <stdio.h>

int main() {
    char a;
    
    printf("Enter any Alphabet: ");
    scanf("%c", &a);
    
    // Check if it's an uppercase letter (ASCII 65 to 90)
    if (a >= 65 && a <= 90) {
        printf("Your Alphabet is Uppercase\n");
        a = a + 32; // Convert to lowercase
        printf("The lower case of it is %c\n", a);
    }
    // Check if it's a lowercase letter (ASCII 97 to 122)
    else if (a >= 97 && a <= 122) {
        printf("Your Alphabet is Lowercase\n");
        a = a - 32; // Convert to uppercase
        printf("The upper case of it is %c\n", a);
    }
    // Handle non-alphabet characters
    else {
        printf("Character entered is not an alphabet\n");
    }
    
    return 0;
}