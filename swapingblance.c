#include <stdio.h>

// Function to swap two balances using pointers
void swapBalances(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    float balance1, balance2;
    printf("Enter first account balance: ");
    scanf("%f", &balance1);
    printf("Enter second account balance: ");
    scanf("%f", &balance2);
    printf("\nBefore swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);
    swapBalances(&balance1, &balance2);
    printf("\nAfter swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);
    return 0;
}
