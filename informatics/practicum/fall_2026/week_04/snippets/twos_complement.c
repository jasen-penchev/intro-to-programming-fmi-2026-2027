#include <stdint.h>
#include <stdio.h>

int main() {
    int8_t n = 5;
    int8_t neg = ~n + 1;

    printf("n = %d (0x%02X)\n", n, (uint8_t)n);
    printf("~n = %d (0x%02X)\n", (int8_t)~n, (uint8_t)~n);

    printf("~n + 1 = %d (0x%02X)\n", neg, (uint8_t)neg);

    return 0;
}
