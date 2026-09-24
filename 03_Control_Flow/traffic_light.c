#include <stdio.h>

int main() {
    char light;
    
    printf("Enter traffic light character (R, Y, G): ");
    scanf(" %c", &light); 
    
    if (light == 'R' || light == 'r') {
        printf("Stop\n");
    } else if (light == 'Y' || light == 'y') {
        printf("Slow down\n");
    } else if (light == 'G' || light == 'g') {
        printf("Go\n");
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}