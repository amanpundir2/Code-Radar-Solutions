#include <stdio.h>
int main() {

    int num;
    scanf("%d", &num); // Correctly using &num

    if (num > 0) {
        printf("Positive");
    } else if (num < 0) {
        printf("Negative"); // Fixed spelling mistake
    } else {
        printf("Zero");
    }

    return 0;
}
