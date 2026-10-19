#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
    const double EPS = 1e-9;
    double a = 0.1 + 0.2;
    double b = 0.3;

    // Evaluates to 1 (true) if numbers are approximately equal, 0 (false) otherwise
    int isEqual = fabs(a - b) < EPS;

    printf("Comparison result: %d\n", isEqual);

    return 0;
}
