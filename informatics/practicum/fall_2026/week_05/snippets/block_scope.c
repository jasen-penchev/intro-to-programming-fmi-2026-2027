#include <stdio.h>

int main() { // Outer scope
    int a = 10;

    { // Inner scope
        int b = 5;

        printf("Inner scope: a = %d\n", a);
        printf("Inner scope: b = %d\n", b);
    } // Variable `b` is destroyed here

    printf("Outer scope: a = %d\n", a); // Variable `a` is still accessible

    // printf("Outer scope: b = %d\n", b); // ERROR: Variable `b` is not defined here

    return 0;
}
