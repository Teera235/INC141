#include <stdio.h>
int main() {

    int n, i = 1, fact = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}
