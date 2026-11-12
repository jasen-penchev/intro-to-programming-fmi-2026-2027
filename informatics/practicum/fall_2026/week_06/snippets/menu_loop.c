#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int choice;

    do {
        printf("1. Load Game\n2. Quit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            int ch;

            while ((ch = getchar()) != '\n' && ch != EOF);

            // Reset to stay in loop
            choice = -1;

            printf("Invalid input. Try again.\n");

            continue;
        }

        switch (choice) {
        case 1:
            printf("Loading...\n"); break;
        case 2:
            printf("Quitting...\n"); break;
        default:
            printf("Invalid input. Try again.\n"); break;
        }
    } while (choice != 2);

    return 0;
}
