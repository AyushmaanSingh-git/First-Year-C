#include <stdio.h>

int main() {
    float price, total_amount;
    int num_tickets;
    
    printf("Enter the price of one movie ticket: ");
    scanf("%f", &price);
    
    printf("Enter the number of tickets to book: ");
    scanf("%d", &num_tickets);
    
    total_amount = price * num_tickets;
    
    printf("Total amount to pay: Rs %.2f\n", total_amount);
    
    return 0;
}