#include <stdio.h>

int main() {
    char a;
    
    printf("Enter any character: ");
    scanf("%c", &a);
    
    // Check if the character is an alphabet
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        // Check for vowels
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || 
            a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            printf("%c is a vowel\n", a);
        } else {
            printf("%c is a consonant (alphabet)\n", a);
        }
    } 
    // Check if the character is a digit
    else if (a >= '0' && a <= '9') {
        printf("%c is a digit\n", a);
    } 
    // If it's neither an alphabet nor a digit, it's a special symbol
    else {
        printf("%c is a special symbol\n", a);
    }
    
    return 0;
}