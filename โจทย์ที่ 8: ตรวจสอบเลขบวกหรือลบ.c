#include <stdio.h>
int main() {
    // Task 8: Check if a number is positive, negative, or zero
    // Receive 1 integer and print its sign
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
