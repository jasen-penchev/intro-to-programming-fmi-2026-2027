#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 5) {
        // Add the current value of `i` to the sum
        sum += i;

        // Increment `i` by 1 in each iteration
        ++i;
    }

    printf("%d\n", sum);

    return 0;
}
