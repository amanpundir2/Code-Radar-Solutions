#include <stdio.h>
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Prevent division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed");
    } else if (num1 % num2 == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }

    return 0;
}
