#define CAPACITY 5

#include <stdio.h>

void copyArray(int dest[], int src[], unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}

void printArray(int arr[], unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int dest[CAPACITY] = { 0 };
    int src[CAPACITY] = { 1, 2, 3, 4, 5 };

    printf("Destination (before copying): ");

    printArray(dest, CAPACITY);

    copyArray(dest, src, CAPACITY);

    printf("Destination (after copying): ");

    printArray(dest, CAPACITY);

    return 0;
}
