#include <stdio.h>
int main() {

    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score >= 80 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 70) {
        printf("Grade B\n");
    } else if (score >= 60) {
        printf("Grade C\n");
    } else if (score >= 50) {
        printf("Grade D\n");
    } else if (score >= 0) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }
    return 0;
}
