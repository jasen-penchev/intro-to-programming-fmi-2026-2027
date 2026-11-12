#include <stdio.h>

int main() {
    int num = 1;
    int steps = 5;

    while (steps > 0) {
        // Next value depends on the previous one
        num = num * 2;

        // Decrease remaining step count
        --steps;
    }

    printf("%d\n", num);

    return 0;
}
