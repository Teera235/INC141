#include <stdio.h>
int main() {

    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
