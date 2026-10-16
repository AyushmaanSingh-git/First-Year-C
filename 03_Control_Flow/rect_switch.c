/*Write a program to input a choice from the user. 
If the choice is 1, calculate the area of a rectangle. 
If the choice is 2, calculate the perimeter of a rectangle using a switch case.*/

#include <stdio.h>

int main() {
    int area, peri, l, b, n;
    
    printf("Enter the length and breadth : \n");
    scanf("%d %d", &l, &b);
    
    printf("Choose - Area(1) or Perimeter(2) : ");
    scanf("%d", &n);
    
    switch(n) {
        case 1:
            area = l * b;
            printf("Area is %d\n", area);
            break;
        case 2:
            peri = 2 * (l + b);
            printf("Perimeter is %d\n", peri);
            break;
        default:
            printf("choose valid input\n");
    }
    
    return 0;
}