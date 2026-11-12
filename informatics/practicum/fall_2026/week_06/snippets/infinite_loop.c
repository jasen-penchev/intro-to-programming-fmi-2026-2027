#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        // Variable `i` never gets updated, so this loop runs indefinitely
        printf("This will print forever!\n");
    }

    return 0;
}
