#define CAPACITY 5

#include <stdio.h>

void printArray(int arr[], unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int arr[CAPACITY] = { 10, 20, 30, 40, 50 };

    printf("Array contents:\n");

    printArray(arr, CAPACITY);

    return 0;
}
