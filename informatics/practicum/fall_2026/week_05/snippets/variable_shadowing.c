#include <stdio.h>

int main() {
    int x = 10; // Outer scope variable `x` is defined

    {
        int x = 20; // This declaration hides the outer `x`

        printf("Inner scope: x = %d\n", x);
    } // Inner `x` is destroyed here (outer `x` becomes visible again)

    printf("Outer scope: x = %d\n", x);

    return 0;
}
