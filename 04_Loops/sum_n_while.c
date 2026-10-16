/*Write a program and draw a flowchart 
to input n natural numbers, and 
find their sum using a while loop.*/

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    
    printf("enter a number : ");
    scanf("%d", &n);
    
    while(i <= n) {
        sum = sum + i;
        i++;
    }
    
    printf("sum is %d\n", sum);
    
    return 0;
}