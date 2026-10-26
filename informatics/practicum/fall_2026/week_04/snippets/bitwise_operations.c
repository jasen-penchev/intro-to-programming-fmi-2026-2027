#include <stdint.h>
#include <stdio.h>

int main() {
    // 00000101
    uint8_t a = 5;

    // 00000011
    uint8_t b = 3;

    printf("a & b = %u\n", a & b);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 1 = %u\n", a >> 1);
    printf("a ^ b = %u\n", a ^ b);
    printf("a | b = %u\n", a | b);
    printf("~a = %u\n", (uint8_t)~a);

    return 0;
}
