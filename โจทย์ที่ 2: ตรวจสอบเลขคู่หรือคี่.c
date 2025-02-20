#include <stdio.h>
int main() {
    // Task 2: Check if a number is odd or even
    // Receive 1 integer, calculate modulo 2, and print "Even" or "Odd"
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
