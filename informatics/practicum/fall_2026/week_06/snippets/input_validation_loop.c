#include <stdio.h>

int main() {
    int number;

    // Intentional endless loop
    while (1) {
        printf("Enter a positive integer: ");

        int result = scanf("%d", &number);

        // Clear input buffer if `scanf` failed
        if (result != 1) {
            printf("Invalid input. Try again.\n");

            // Discard invalid input
            while (getchar() != '\n');

            // Skip rest, ask again
            continue;
        }

        if (number > 0) {
            printf("You entered: %d\n", number);

            // Exit loop on valid input
            break;
        }
        else {
            printf("Number must be positive. Try again.\n");
        }
    }

    return 0;
}
